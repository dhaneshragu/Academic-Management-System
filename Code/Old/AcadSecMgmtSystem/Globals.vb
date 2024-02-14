Imports System.Configuration

'To get the global variables/declarations to be used all over the project
Public Class Globals
    'Private Shared dbConnectionString As String = ConfigurationManager.ConnectionStrings("ConString").ConnectionString

    'Deployed Database
    Private Shared dbConnectionString As String = ConfigurationManager.ConnectionStrings("maindbConString").ConnectionString

    'To get the dbString
    Public Shared Function getdbConnectionString() As String
        Return dbConnectionString
    End Function

    'To view the child form in the same window inside a parentPanel
    Public Shared Sub viewChildForm(ByVal parentpanel As Panel, ByVal childpanel As Form)
        parentpanel.Controls.Clear()
        childpanel.TopLevel = False
        childpanel.FormBorderStyle = Windows.Forms.FormBorderStyle.None
        childpanel.Dock = DockStyle.Fill
        'childpanel.AutoSize = True
        childpanel.BringToFront()
        parentpanel.Controls.Add(childpanel)
        childpanel.Show() 'Add to panel and show the child form
    End Sub

End Class
