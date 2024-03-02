## Function Name: `buttonExamTT_Click`

### Location

File: `AdminSetDates.h`

## Input Parameters

| Parameter  | Description                              |
|:----------:|:----------------------------------------:|
| **`System::Object^  sender`** | The object that raises the event |
| **`System::EventArgs^  e`** | Event data|

## Output Parameters

Returns `System::Void`

## Description 

1. Allots room for examination to each student for each course the student has taken.
2. The exam schedule is automatically fixed by slots, given a starting date. Hence, the remaining task is to provide rooms (for seating arrangement), so, this function is sufficient.
3. Allocation algorithm is based on 'first fit' idea, i.e. allocate the first available room to a student for a particular course.

> Note: 
We have assumed that there can be only two courses at max scheduled in the same slot. Hence the room allocation strategy first divides the room capacity into halves and uses only one of them for seating. One half is left empty to represent actual empty spaces in exams. The half which is used is further divided into halves and then allocation is done in first fit manner from this pool for a course to students.
## SQL Queries

The following are the SQL queries used in this function:

### Query 1: To fetch the available room capacity information from the Room Table. 

```sql
SELECT room_ID,capacity FROM [Room] ORDER BY capacity;
```

### Query 2: To fetch the information about all students and courses opted by them from the 'Courses Taken' Table. 

```sql
SELECT * FROM [Courses Taken];
```

> Note: There is an **implicit** third query for the update of the `Courses Taken` table, which is automatically handled by the `SqlCommandBuilder^` type.


## Function Name: `StudentTimetable_Load`

### Location

File: `StudentTimetable.h`

## Input Parameters

| Parameter  | Description                              |
|:----------:|:----------------------------------------:|
| **`System::Object^  sender`** | The object that raises the event |
| **`System::EventArgs^  e`** | Event data|

## Output Parameters

Returns `System::Void`

## Description 

1. Renders the dropdown for selecting day and the timetable for Monday by default on load of the screen.

## SQL Queries

The following are the SQL queries used in this function:

### Query 1: To fetch the room id to name and location mapping information from the Room Table. 

```sql
SELECT room_ID,name,location FROM [Room];
```

### Query 2: To fetch the information about the current users' (student) courses from the 'Courses Taken' Table. 

```sql
SELECT course_ID,course_name,slot,room_ID
FROM [Courses] 
WHERE course_ID IN 
(
    SELECT course_ID 
    FROM [Courses Taken] 
    WHERE [Courses Taken].roll_no = roll_no
);
```


## Function Name: `comboBox1_SelectedIndexChanged`

### Location

File: `StudentTimetable.h`

## Input Parameters

| Parameter  | Description                              |
|:----------:|:----------------------------------------:|
| **`System::Object^  sender`** | The object that raises the event |
| **`System::EventArgs^  e`** | Event data|

## Output Parameters

Returns `System::Void`

## Description 

1. Updates the screen according to selected day from the dropdown, displaying the schedule for the selected day.

## SQL Queries

The following are the SQL queries used in this function:

### Query 1: To fetch the room id to name and location mapping information from the Room Table. 

```sql
SELECT room_ID,name,location FROM [Room];
```

### Query 2: To fetch the information about the current users' (student) courses from the 'Courses Taken' Table. 

```sql
SELECT course_ID,course_name,slot,room_ID
FROM [Courses] 
WHERE course_ID IN 
(
    SELECT course_ID 
    FROM [Courses Taken] 
    WHERE [Courses Taken].roll_no = roll_no
);
```

## Function Name: `chronoSort`

### Location

File: `StudentTimetable.h`

## Input Parameters

| Parameter  | Description                              |
|:----------:|:----------------------------------------:|
| **`tuple<string, string, string, string>& a`** | A reference to a tuple representing a row of the timetable |
| **`tuple<string, string, string, string>& b`** | A reference to a  tuple representing a row of the timetable|

## Output Parameters

| Parameter  | Description                              |
|:----------:|:----------------------------------------:|
| **`bool`** | `true` if `a` should be placed before `b` in a chronological order, otherwise `false`|

## Description 

1. Custom sorts the rows of the time table in chronologically ascending order, as the default sorting is lexicographic.

> Note: The function is declared `static` to avoid conflicts between managed (garbage collected) versions and native versions of functions, data types and data structures provided by C++.

## Function Name: `ProfTimetable_Load`

### Location

File: `ProfTimetable.h`

## Input Parameters

| Parameter  | Description                              |
|:----------:|:----------------------------------------:|
| **`System::Object^  sender`** | The object that raises the event |
| **`System::EventArgs^  e`** | Event data|

## Output Parameters

Returns `System::Void`

## Description 

1. Renders the dropdown for selecting day and the timetable for Monday by default on load of the screen.

## SQL Queries

The following are the SQL queries used in this function:

### Query 1: To fetch the room id to name and location mapping information from the Room Table. 

```sql
SELECT room_ID,name,location FROM [Room];
```

### Query 2: To fetch the information about the current users' (faculty) courses from the Courses Table. 

```sql
SELECT slot,course_ID,course_name,room_ID 
FROM [Courses] 
WHERE prof_ID = faculty_ID;
```


## Function Name: `comboBox1_SelectedIndexChanged`

### Location

File: `ProfTimetable.h`

## Input Parameters

| Parameter  | Description                              |
|:----------:|:----------------------------------------:|
| **`System::Object^  sender`** | The object that raises the event |
| **`System::EventArgs^  e`** | Event data|

## Output Parameters

Returns `System::Void`

## Description 

1. Updates the screen according to selected day from the dropdown, displaying the schedule for the selected day.

## SQL Queries

The following are the SQL queries used in this function:

### Query 1: To fetch the room id to name and location mapping information from the Room Table. 

```sql
SELECT room_ID,name,location FROM [Room];
```

### Query 2: To fetch the information about the current users' (faculty) courses from the Courses Table. 

```sql
SELECT slot,course_ID,course_name,room_ID 
FROM [Courses] 
WHERE prof_ID = faculty_ID;
```

## Function Name: `chronoSort`

### Location

File: `ProfTimetable.h`

## Input Parameters

| Parameter  | Description                              |
|:----------:|:----------------------------------------:|
| **`tuple<string, string, string, string>& a`** | A reference to a tuple representing a row of the timetable |
| **`tuple<string, string, string, string>& b`** | A reference to a  tuple representing a row of the timetable|

## Output Parameters

| Parameter  | Description                              |
|:----------:|:----------------------------------------:|
| **`bool`** | `true` if `a` should be placed before `b` in a chronological order, otherwise `false`|

## Description 

1. Custom sorts the rows of the time table in chronologically ascending order, as the default sorting is lexicographic.

> Note: The function is declared `static` to avoid conflicts between managed (garbage collected) versions and native versions of functions, data types and data structures provided by C++.

> Note: In both `ProfTimetable.h` and `StudentTimetable.h` there are two additional functions which operate on a `DataGridView`, which are `ClearDataGridView` and `RemoveAutoSorting`, which, as their names suggest, clears the `DataGridView` and removes the automatic (default) sorting (here, lexicographic) on columns of `DataGridView`, respectively.

> Note: Many functions as well as data and its structure in both `ProfTimetable.h` and `StudentTimetable.h` are common, raising the question that they could be abstracted out of these two files and reused everywhere as common functions or common data, however, the issues between the managed runtime and native C++ prevented that.