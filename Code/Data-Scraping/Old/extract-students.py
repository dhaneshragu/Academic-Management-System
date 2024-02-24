import time
import csv
from selenium import webdriver
from webdriver_manager.chrome import ChromeDriverManager
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import Select
from selenium.common.exceptions import NoSuchElementException
import pyodbc
import requests
from io import BytesIO
from PIL import Image

# If some error comes replace driver_version with the chrome version shown in cmdline
driver = webdriver.Chrome(service=Service(ChromeDriverManager(driver_version='121.0.6167.161').install()))

site = "https://www.iitg.ac.in/cse/csebtechContinuing"
driver.get(site)


select_element = driver.find_element(By.ID, 'Entry_Year')

# Create a Select object
select = Select(select_element)

# MSSQL Connection Setup
server = 'sql5075.site4now.net'
database = 'db_aa52db_mainacaddb'
username = 'db_aa52db_mainacaddb_admin'
password = 'swelab@123'
conn_str = f'DRIVER={{SQL Server}};SERVER={server};DATABASE={database};UID={username};PWD={password}'
conn = pyodbc.connect(conn_str)
cursor = conn.cursor()

# Iterate through each option in the dropdown
href_list = {'2020':[],'2021':[],'2022':[]}

for option in select.options:
    # Select the option for year
    year = option.get_attribute('value') 
    if(year not in ['2020','2021','2022']):
        continue
    select.select_by_value(option.get_attribute('value'))
    time.sleep(1)
    idx = 2
    while True:
        try:
            for row in range(1,4):
                xpath = f'//*[@id="resultTableBody"]/tr[{idx}]/td[{row}]/strong/font/a'
                element = driver.find_element(By.XPATH, xpath)
                link = element.get_attribute("href")
                href_list[year].append(link)
            idx += 1
        except NoSuchElementException:
                break
    
    print("Year:",year,"done.")

# Go to links and extract roll numbers

for year in ['2021','2022']:
    links = href_list[year]
    csv_filename = f"cserere-{year}.csv"
    with open(csv_filename, mode='w', newline='') as csv_file:
        fieldnames = ['RNo', 'Name', 'Year', 'EmailID']
        writer = csv.DictWriter(csv_file, fieldnames=fieldnames)
        writer.writeheader()
        for link in links:
            driver.get(link)
            time.sleep(1)
            div_xpath = '//*[@id="fh5co-main"]/div/div/div/div/div[1]/div[1]/p[2]'
            try:
                div_element = driver.find_element(By.XPATH, div_xpath)
                stud_details = div_element.text.splitlines()
                try:
                    rno = stud_details[0].split(":")[1].strip()
                    if rno=="200101015" or rno=="220101001" :
                        break
                    if rno.startswith("21") and (rno >= "210101009" and rno<="210101112"):
                        continue

                    img_xpath = '//*[@id="fh5co-main"]/div/div/div/div/div[1]/div[2]/figure/img'
                    try:
                        img_element = driver.find_element(By.XPATH, img_xpath)
                        img_url = img_element.get_attribute("src")
                        response = requests.get(img_url, stream=True)
                        time.sleep(1)
                        # Resize the image to 100x100 pixels
                        image = Image.open(BytesIO(response.content))
                        resized_image = image.resize((100, 100))
                        resized_data = BytesIO()
                        resized_image.save(resized_data, format="JPEG")
                        
                        # Insert resized image data into the database
                        cursor.execute("UPDATE [Student Database] SET DP = ? WHERE roll_no = ?", pyodbc.Binary(resized_data.getvalue()), rno)
                        conn.commit()
                    
                    except:
                        print("F")

                except:
                    print(f"Data not available for {link}")
            except Exception as e:
                print(f"Error extracting text from the : {str(e)}")
                
# Close the browser window
driver.quit()
conn.close()