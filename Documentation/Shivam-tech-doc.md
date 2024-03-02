## Function Name: `ViewRecords_Load`

### Location

File: `ViewRecords.h`

## Input Parameters

| Parameter  | Description                              |
|:----------:|:----------------------------------------:|
| **`System::Object^  sender`** | The object that raises the event |
| **`System::EventArgs^  e`** | Event data |

## Output Parameters

Returns `System::Void`

## Description 

Based on the default year value of comboBox, it fetches data from Admin database and renders on the screen.

## SQL Queries

The following are the SQL queries used in this function:

### Query 1: To fetch the fees paid in that year.

```sql
SELECT fees_paid FROM dbo.[Financial Records] WHERE year= year;
```

### Query 2: To fetch the total number of students in that year.

```sql
SELECT no_of_students FROM dbo.[Financial Records] WHERE year= year;
```

### Query 3: To fetch the total number of teachers in that year.

```sql
SELECT no_of_teachers FROM dbo.[Financial Records] WHERE year= year;
```

## Function Name: `comboBox1_SelectedIndexChanged`

### Location

File: `ViewRecords.h`

## Input Parameters

| Parameter  | Description                              |
|:----------:|:----------------------------------------:|
| **`System::Object^  sender`** | The object that raises the event |
| **`System::EventArgs^  e`** | Event data |

## Output Parameters

Returns `System::Void`

## Description 

Upon changing the selected yer from comboxBox, it fetches new data from Admin database and renders on the screen.

## SQL Queries

The following are the SQL queries used in this function:

### Query 1: To fetch the fees paid in that year.

```sql
SELECT fees_paid FROM dbo.[Financial Records] WHERE year= year;
```

### Query 2: To fetch the total number of students in that year.

```sql
SELECT no_of_students FROM dbo.[Financial Records] WHERE year= year;
```

### Query 3: To fetch the total number of teachers in that year.

```sql
SELECT no_of_teachers FROM dbo.[Financial Records] WHERE year= year;
```

## Function Name: `getisFeePayment`

### Location

File: `StudentHome.h`

## Input Parameters

None

## Output Parameters

| Parameter               | Description                                      |
|-------------------------|--------------------------------------------------|
| **`bool`**              | Returns `true` if Fee Payment has started, `false` otherwise.|

## Description 

Retrieves the boolean value of the `start_fee_payment` field from the `Admin` table to determine if Fee Payment has started.

## SQL Queries

### Query 1: Get start_fee_payment value from Admin table

```sql
SELECT start_fee_payment FROM Admin;
```

## Function Name: `getisCourseReg`

### Location

File: `StudentHome.h`

## Input Parameters

None

## Output Parameters

| Parameter               | Description                                      |
|-------------------------|--------------------------------------------------|
| **`bool`**              | Returns `true` if Course Registration has started, `false` otherwise.|

## Description 

Retrieves the boolean value of the `is_course_registration` field from the `Admin` table to determine if Course Registration has started.

## SQL Queries

### Query 1: Get is_course_registration value from Admin table

```sql
SELECT is_course_registration FROM Admin;
```

## Function Name: `getisFeesPaid`

### Location

File: `StudentHome.h`

## Input Parameters

None

## Output Parameters

| Parameter               | Description                                      |
|-------------------------|--------------------------------------------------|
| **`bool`**              | Returns `true` if student has paid the fees, `false` otherwise.|

## Description 

Retrieves the boolean value of the `fees_paid` field from the `Student Database` table to determine if student has paid the fees.

## SQL Queries

### Query 1: Get fees_paid value from [Student Database] table

```sql
SELECT fees_paid FROM [Student Database] where roll_no = RollNumber;
```

## Function Name: `Button3_Click`

### Location

File: `StudentHome.h`

## Input Parameters

| Parameter  | Description                              |
|:----------:|:----------------------------------------:|
| **`System::Object^  sender`** | The object that raises the event |
| **`System::EventArgs^  e`** | Event data |

## Output Parameters

Returns `System::Void`

## Description 

Renders `StudentCourseReg.h` if the student has paid the fees else displays an error message.

## Function Name: `Button2_Click`

### Location

File: `StudentHome.h`

## Input Parameters

| Parameter  | Description                              |
|:----------:|:----------------------------------------:|
| **`System::Object^  sender`** | The object that raises the event |
| **`System::EventArgs^  e`** | Event data |

## Output Parameters

Returns `System::Void`

## Description 

1. If student has not already paid fees then clicking on Button2 a message will be shown of successful fee payment.
2. It updates [Student Database] table by setting fees_paid to 1.
3. It updates [Financial Records] table by adding the fees_paid by the student to fees_paid attribute of table.

## SQL Queries

### Query 1: Set fees_paid value to 1 of [Student Database] table

```sql
Update [Student Database] set fees_paid = 1 where roll_no = RollNumber;
```

### Query 2: Select fees value from [Student Database] table

```sql
SELECT fees FROM dbo.[Student Database] WHERE roll_no=  RollNumber;
```

### Query 3: Select fees value from [Student Database] table

```sql
Update [Financial Records] set fees_paid = fees_paid + fees where year = 2023;
```

## Function Name: `getisViewTimeTable`

### Location

File: `ProfDashboard.h`

## Input Parameters

None

## Output Parameters

| Parameter               | Description                                      |
|-------------------------|--------------------------------------------------|
| **`bool`**              | Returns `true` if admin has generated the timetable, `false` otherwise.|

## Description 

Retrieves the boolean value of the `view_timetable` field from the `Admin` table to determine if admin has generated the timetable.

## SQL Queries

### Query 1: Get view_timetable value from Admin table

```sql
SELECT view_timetable FROM Admin;
```

## Function Name: `getisMidEndDateSet`

### Location

File: `StudentDashboard.h`

## Input Parameters

None

## Output Parameters

| Parameter               | Description                                      |
|-------------------------|--------------------------------------------------|
| **`bool`**              | Returns `true` if admin has set the midsem and endsem date, `false` otherwise.|

## Description 

Retrieves the date value of the `midsem_start_date` field and `endsem_start_date` from the `Admin` table to determine if admin has set the midsem and endsem start dates.

## SQL Queries

### Query 1: Check midsem_start_date and endsem_start_date for NOT NULL

```sql
SELECT CASE WHEN midsem_start_date IS NOT NULL AND endsem_start_date IS NOT NULL THEN 1 else 0 END AS Result From [Admin];
```

## Function Name: `getisViewTimeTable`

### Location

File: `StudentDashboard.h`

## Input Parameters

None

## Output Parameters

| Parameter               | Description                                      |
|-------------------------|--------------------------------------------------|
| **`bool`**              | Returns `true` if admin has generated the timetable, `false` otherwise.|

## Description 

Retrieves the boolean value of the `view_timetable` field from the `Admin` table to determine if admin has generated the timetable.

## SQL Queries

### Query 1: Get view_timetable value from Admin table

```sql
SELECT view_timetable FROM Admin;
```

## Function Name: `getisFeesPaid`

### Location

File: `StudentDashboard.h`

## Input Parameters

None

## Output Parameters

| Parameter               | Description                                      |
|-------------------------|--------------------------------------------------|
| **`bool`**              | Returns `true` if student has paid the fees, `false` otherwise.|

## Description 

Retrieves the boolean value of the `fees_paid` field from the `Student Database` table to determine if student has paid the fees.

## SQL Queries

### Query 1: Get fees_paid value from [Student Database] table

```sql
SELECT fees_paid FROM [Student Database] where roll_no = RollNumber;
```

## Function Name: `Button4_Click`

### Location

File: `StudentDashboard.h`

## Input Parameters

| Parameter  | Description                              |
|:----------:|:----------------------------------------:|
| **`System::Object^  sender`** | The object that raises the event |
| **`System::EventArgs^  e`** | Event data |

## Output Parameters

Returns `System::Void`

## Description 

Renders `StudentTimetable.h` if the student has paid the fees and admin has generated the timetable else displays an error message.

## Function Name: `Button5_Click`

### Location

File: `StudentDashboard.h`

## Input Parameters

| Parameter  | Description                              |
|:----------:|:----------------------------------------:|
| **`System::Object^  sender`** | The object that raises the event |
| **`System::EventArgs^  e`** | Event data |

## Output Parameters

Returns `System::Void`

## Description 

Renders `StudentExamScedule.h` if the student has paid the fees and admin has set the midsem and endsem start dates else displays an error message.