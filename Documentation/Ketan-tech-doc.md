## Function Name: `buttonTT_Click`

### Location

File: `AdminSetdates.h`

## Input Parameters

| Parameter  | Description                              |
|:----------:|:----------------------------------------:|
| **`sender`** | Object, the control that raised the event. |
| **`e`** | EventArgs, the event data.|

## Output Parameters

None

## Description 

1. This function is triggered when the admin clicks on a button, initiating the generation of a timetable.
2. It's a heuristic-based timetable generator aiming to minimize conflicts between compulsory and elective courses. The algorithm ensures that no two compulsory courses for the same batch or two courses for the same professor are assigned the same slot.
3. The heuristic in play here is that compulsory courses are alloted starting from A to then G slot.
However electives are alloted starting from G to then A slot. Hence minimising the conflicts. It also considers different scheduling patterns for morning and afternoon classes for different years.

## SQL Queries

The following are the SQL queries used in this function:

### Query 1: Getting Course Data

```sql
SELECT * FROM Courses;
```
### Query 2: Getting Admin Data

```sql
SELECT * FROM Admin;
```

### Query 3: Updating Course Data

```sql
UPDATE Courses SET slot = @slot, room_ID=@room_ID WHERE course_ID = @CourseCode;
```

### Query 4: Updating Admin Data

```sql
UPDATE Admin SET view_timetable = 'True';
```

>Note: This function doesn't ensure always optimal solution and expects that admin has already mapped professors to their courses.
>Here the problem reduces to alloting each course a slot as we assume timetable follows the same pattern as existing timetable
>This function ensures that no 2 compulsory courses for same batch are given same slot 
>This function ensures that no 2 courses for same proffessor are given same slot
>The 1st and 3rd years have classes in morning and labs in afternoon whereas 2nd and 4th year have classes in afternoon and labs in morning.

## Function Name: `MarshalString`

### Location

File: `AdminSetdates.h`

## Input Parameters

| Parameter  | Description                              |
|:----------:|:----------------------------------------:|
| **`s`** | Managed String to be marshaled |
| **`os`** | Reference to a C++ string to store the marshaled result |

## Output Parameters

| Output  | Description                                    |
|:-------:|:-----------------------------------------------:|
| **`os`** | Reference to a C++ string containing the marshaled result |

## Description 

1. This function takes a managed string (`s`) and a reference to a C++ string (`os`) as input parameters.
2. It marshals the managed string `s` into a C-style string (`chars`) using `Marshal::StringToHGlobalAnsi`.
3. The C-style string is assigned to the C++ string `os`.
4. Finally, memory allocated by `Marshal::StringToHGlobalAnsi` is released using `Marshal::FreeHGlobal`.

## SQL Queries

The function does not involve any SQL queries.

