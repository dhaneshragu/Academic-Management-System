Imports System.Data.SqlClient
Imports System.IO

Public Class Form1
    Dim conString = Globals.getdbConnectionString()
    Dim Con = New SqlConnection(conString)
    Dim query = "SELECT * from StudentDetails"
    Private Sub Form1_Load(sender As System.Object, e As System.EventArgs) Handles MyBase.Load
        Con.Open()
        Label1.Text = "Success"
        Dim cmd As New SqlCommand(query, Con)
        Dim adapter As New SqlDataAdapter(cmd)

        ' Create a DataTable to store the data
        Dim dataTable As New DataTable()

        ' Fill the DataTable with data from the SQL table
        adapter.Fill(dataTable)
        ' Bind the DataTable to the DataGridView
        DataGridView1.DataSource = dataTable
        ' Optionally, enable sorting
        DataGridView1.Columns("Name").SortMode = DataGridViewColumnSortMode.Automatic
        Con.Close()
    End Sub


End Class
