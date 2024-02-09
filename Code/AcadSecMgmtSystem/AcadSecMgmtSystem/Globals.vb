Imports System.Configuration

'To get the global variables/declarations to be used all over the project
Public Class Globals
    Private Shared dbConnectionString As String = ConfigurationManager.ConnectionStrings("ConString").ConnectionString

    'To get the dbString
    Public Shared Function getdbConnectionString() As String
        Return dbConnectionString
    End Function

End Class
