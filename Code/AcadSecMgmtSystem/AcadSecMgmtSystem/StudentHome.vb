Imports System.Data.SqlClient
Public Class StudentHome
    'Get connection Strings
    Dim conString = Globals.getdbConnectionString()
    Dim Con = New SqlConnection(conString)
    Private Sub StudentHome_Load(sender As System.Object, e As System.EventArgs) Handles MyBase.Load

        ' Switch on only if Grades are released by acad section
        GradeReleasedPanel.Visible = False

        'Just for simulation, to be replaced with real logics
        Dim query = "SELECT * FROM dummy_course_details"
        Con.Open()

        Dim cmd As New SqlCommand(query, Con)
        Dim adapter As New SqlDataAdapter(cmd)

        ' Create a DataTable to store the data
        Dim dataTable As New DataTable()

        'Fill the DataTable with data from the SQL table
        adapter.Fill(dataTable)

        'IMP: Specify the Column Mappings from DataGridView to SQL Table
        DataGridView1.AutoGenerateColumns = False
        DataGridView1.Columns(0).DataPropertyName = "Course Code"
        DataGridView1.Columns(1).DataPropertyName = "Course Name"
        DataGridView1.Columns(2).DataPropertyName = "credits"
        DataGridView1.Columns(3).DataPropertyName = "grade"

        ' Bind the data to DataGridView
        DataGridView1.DataSource = dataTable
        Con.Close()

    End Sub

    Private Sub Label5_Click(sender As System.Object, e As System.EventArgs) Handles Label5.Click

    End Sub
End Class
