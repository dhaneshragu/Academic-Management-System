import time
import csv
from selenium import webdriver
from webdriver_manager.chrome import ChromeDriverManager
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import Select
from selenium.common.exceptions import NoSuchElementException

# If some error comes replace driver_version with the chrome version shown in cmdline
driver = webdriver.Chrome(service=Service(ChromeDriverManager(driver_version='121.0.6167.161').install()))

site = "https://www.iitg.ac.in/cse/csebtechContinuing"
driver.get(site)


select_element = driver.find_element(By.ID, 'Entry_Year')

# Create a Select object
select = Select(select_element)

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

for year in ['2020','2021','2022']:
    links = href_list[year]
    csv_filename = f"cse-{year}.csv"
    with open(csv_filename, mode='w', newline='') as csv_file:
        fieldnames = ['RNo', 'Name', 'Year', 'EmailID']
        writer = csv.DictWriter(csv_file, fieldnames=fieldnames)
        writer.writeheader()
        for link in links:
            driver.get(link)
            div_xpath = '//*[@id="fh5co-main"]/div/div/div/div/div[1]/div[1]/p[2]'
            try:
                div_element = driver.find_element(By.XPATH, div_xpath)
                stud_details = div_element.text.splitlines()
                try:
                    rno = stud_details[0].split(":")[1].strip()
                    name = stud_details[1].split(":")[1].strip()
                    email = stud_details[2].split(":")[1].strip()
                    writer.writerow({'RNo': rno, 'Name': name, 'Year': year, 'EmailID': email})
                except:
                    print(f"Data not available for {link}")
            except Exception as e:
                print(f"Error extracting text from the : {str(e)}")
                
# Close the browser window
driver.quit()


