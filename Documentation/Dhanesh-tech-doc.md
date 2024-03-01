## Function Name: `setAvailableCoursesTable`

### Location

File: `StudentCourseReg.h`

## Input Parameters

| Parameter  | Description                              |
|:----------:|:----------------------------------------:|
| **`String ^ semester`** | Semester for which courses have to be fetched |

## Output Parameters

Doesn't return anything.

## Description 

1. Gets all the compulsory courses offered for that semester and populates the `Data Grid View` that displays the courses with Add/Drop button.
2. Adds all the slots of compulsory courses to busy slots for that student in `chosenElectiveSlots` set.

## SQL Queries

The following are the SQL queries used in this function:

### Query 1: To fetch compulsory courses details from Faculty and Courses Table.

```sql
SELECT Courses.[course_ID],Courses.[course_name],Faculty.[name] 
as prof_name,Courses.[LTPC],Courses.slot 
FROM Courses 
INNER JOIN Faculty ON 
Faculty.faculty_ID = Courses.[prof_ID] 
WHERE Courses.[sem_offered] = @Semester
 AND Courses.[is_compulsory] = 1
;
```


## Function Name: `DataGridView1_CellContentClick`

### Location

File: `StudentCourseReg.h`

## Input Parameters

| Parameter             | Description                                                  |
|-----------------------|--------------------------------------------------------------|
| **`System::Object^ sender`** | The object that raises the event.                             |
| **`System::Windows::Forms::DataGridViewCellEventArgs^ e`**      | Information about the event data (DataGridViewCellEventArgs).|

## Output Parameters

Doesn't return anything.

## Description 

1. Monitors the click event on the "Add/Drop" button in a DataGridView.
2. If the button is clicked:
   - Modifies the Database by adding or dropping a course using `InsertIntoDB` or `DeleteFromDB`.
   - Toggles the button text between "Add" and "Drop".


## Function Name: `DeleteFromDB`

### Location

File: `StudentCourseReg.h`

## Input Parameters

| Parameter       | Description                                              |
|-----------------|----------------------------------------------------------|
| **`int RollNo`** | Roll number of the student.                               |
| **`String^ cid`**| Course ID to be deleted from the student's records.       |

## Output Parameters

Doesn't return anything.

## Description 

Deletes a record from the "Courses Taken" table in the database for a specific student and course.

## SQL Queries

The following SQL query is used in this function:

### Query 1: Delete record from "Courses Taken" table

```sql
DELETE FROM [Courses Taken] 
WHERE roll_no = @RollNo 
AND Course_ID = @CID
```
This query will delete the course taken by student when he/she presses Drop button.


## Function Name: `CommonButtonClickHandler`

### Location

File: `StudentCourseReg.h`

## Input Parameters

| Parameter             | Description                                                  |
|-----------------------|--------------------------------------------------------------|
| **`System::Object^ sender`** | The object that raises the event.                             |
| **`System::EventArgs^ e`**    | Information about the event data.                              |

## Output Parameters

Doesn't return anything.

## Description 

Handles the click event for common buttons in the UI. Performs actions based on the button clicked, such as adding or dropping courses from the database. Updates UI elements accordingly.



## Function Name: `handleThirdyearElectives`

### Location

File: `StudentCourseReg.h`

## Input Parameters

None.

## Output Parameters

Doesn't return anything.

## Description 

1. Populates the UI ComboBoxes with elective courses for the third year. 
2. Separates lab and theory electives into different lists based on the database query results.

## SQL Queries

### Query 1: Get third-year elective lab and theory courses info from Courses and Faculty Tables

```sql
SELECT Courses.[course_ID], Courses.[course_name], Faculty.[name] 
as prof_name, Courses.[LTPC], Courses.slot, Courses.[is_lab] 
FROM Courses
INNER JOIN Faculty 
ON Faculty.faculty_ID = Courses.[prof_ID]
WHERE Courses.[sem_offered] 
LIKE '%6%' AND Courses.[is_compulsory] = 0
```
This SQL query retrieves elective lab and theory courses offered in the sixth semester.


## Function Name: `getColValue`

### Location

File: `StudentCourseReg.h`

## Input Parameters

| Parameter            | Description                                       |
|----------------------|---------------------------------------------------|
| **`String^ colReqd`**| The column whose value is required.               |
| **`String^ colOrig`**| The column to match the specified value against.  |
| **`String^ colVal`** | The specified value to match against.             |

## Output Parameters

| Parameter              | Description                                               |
|------------------------|-----------------------------------------------------------|
| **`String^`**          | The value of the specified column based on the condition. |

## Description 

Retrieves the value of a specified column (`colReqd`) from the "Courses" table where the value of another column (`colOrig`) matches the provided value (`colVal`).

## SQL Queries

### Query 1: Get column value from "Courses" table

```sql
SELECT Courses.[colReqd] FROM Courses 
WHERE Courses.[colOrig] = 'colVal'
```
This SQL query retrieves the specified column value based on the condition.


## Function Name: `checkCompatibility`

### Location

File: `StudentCourseReg.h`

## Input Parameters

| Parameter                | Description                                       |
|--------------------------|---------------------------------------------------|
| **`String^ course`**     | The course to be checked for compatibility.        |
| **`String^ Slot`**       | The slot to check compatibility with the course.  |

## Output Parameters

| Parameter                | Description                                               |
|--------------------------|-----------------------------------------------------------|
| **`bool`**               | Returns `true` if the course is compatible, `false` otherwise.|

## Description 

1. Checks if a given course is compatible to be chosen in a specified slot. 
2. It considers conflicts based on the type of lab and other chosen elective slots.
3. Uses map and common time table slot logic to output the boolean value.

> **NOTE :** This implementation considers that A course cant be taken if any of its slot clashes with a Lab and also assumes clash with compulsory courses mandatorily irrespective of whether the student has registered for that or not.

## Function Name: `comboBoxY_SelectedIndexChanged`

### Location

File: `StudentCourseReg.h`

## Input Parameters

| Parameter                     | Description                                           |
|-------------------------------|-------------------------------------------------------|
| **`System::Object^ sender`**  | The object that raises the event.                      |
| **`System::EventArgs^ e`**     | Information about the event data.                      |

## Output Parameters

Doesn't return anything.

## Description 

1. Handles the selected index change event for `comboBoxY`. 
2. Displays information about the selected course, including the course name, professor ID, and slot in the UI appropriately.

## SQL Queries

### Query 1: Get course name based on selected course ID

```sql
SELECT Courses.[course_name] FROM Courses WHERE Courses.[course_ID] = 'selectedItem'
```
This SQL query retrieves the course name based on the selected course ID.

### Query 2: Get professor ID and slot based on selected course ID

```sql
SELECT Courses.[prof_ID], Courses.[slot] FROM Courses WHERE Courses.[course_ID] = 'selectedItem'
```
This SQL query retrieves the professor ID and slot based on the selected course ID.


## Function Name: `StudentCourseReg_Load`

### Location

File: `StudentCourseReg.h`

## Input Parameters

| Parameter                     | Description                                           |
|-------------------------------|-------------------------------------------------------|
| **`System::Object^ sender`**  | The object that raises the event.                      |
| **`System::EventArgs^ e`**     | Information about the event data.                      |

## Output Parameters

Doesn't return anything.

## Description 

1. Handles the load event for the `StudentCourseReg` form.
2. Clears the database for the current student, sets up available courses table, and handles elective courses based on the semester.
3. For Second and first yearites no electives are shown and for third yearites electives are shown. The fourth year electives are handled by `FourthYearCourseReg.h`.


## Function Name: `getIsGradesViewing`

### Location

File: `StudentHome.h`

## Input Parameters

None

## Output Parameters

| Parameter               | Description                                      |
|-------------------------|--------------------------------------------------|
| **`bool`**              | Returns `true` if Grades viewing has started, `false` otherwise.|

## Description 

Retrieves the boolean value of the `view_grades` field from the `Admin` table to determine if Grades viewing has started.

## SQL Queries

### Query 1: Get view_grades value from Admin table

```sql
-- Retrieving the view_grades value from the Admin table
SELECT Admin.[view_grades] FROM Admin;
```
This SQL query retrieves the boolean value of the view_grades field from the Admin table.


## Function Name: `StudentHome_Load`

### Location

File: `StudentHome.h`

## Input Parameters

- **`System::Object^ sender`**: The object that raised the event.
- **`System::EventArgs^ e`**: The event data.

## Output Parameters

None

## Description 

1. Displays the user's DP using a method from the `Constants` class.
2. Initializes UI elements, sets labels, and disables buttons.
3. Checks if grades can be viewed using a method named `getisGradesViewing`.
4. Adjusts UI elements based on grades viewing status.
5. Retrieves and displays course details in DataGridView1.
6. Retrieves and displays fee payment status in DataGridView2.
7. Checks and updates buttons for course registration and fee payment.

## Function Name: `FetchAndDisplayImage`

### Location

File: `Constants.cpp`

## Input Parameters

- **`String^ rno`**: Roll number of the student.
- **`PictureBox^ pictureBox`**: PictureBox control to display the student's image.

## Output Parameters

None

## Description 
1. Fetches the student's profile picture from the database based on the roll number and displays it in the specified PictureBox.
2. Converts the image data to a `MemoryStream` and creates a `Bitmap` from it.
3. A similar function is `fetchAndDisplayProfImage` which displays the image of professor.

## SQL Queries

The following is the SQL query used in this function:

### Query 1: To fetch professor's profile picture from Faculty Table.

```sql
SELECT DP FROM [Student Database] WHERE roll_number = @rno
```
Fetches the `VARBINARY` encoded image from DB.
