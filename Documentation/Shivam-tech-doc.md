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
