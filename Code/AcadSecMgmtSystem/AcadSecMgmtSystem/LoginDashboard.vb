Public Class LoginDashboard

    Private Sub Button3_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button3.Click
        ' Create an instance of LoginInnerScreen
        Dim innerScreenForm As New LoginInnerScreen()

        ' Set the Role property
        innerScreenForm.Role = "Admin"

        ' Display the inner form
        Globals.viewChildForm(childformpanel, innerScreenForm)

    End Sub

    Private Sub Button4_Click_1(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button4.Click
        ' Create an instance of LoginInnerScreen
        Dim innerScreenForm As New LoginInnerScreen()

        ' Set the Role property
        innerScreenForm.Role = "Professor"

        ' Display the inner form
        Globals.viewChildForm(childformpanel, innerScreenForm)

    End Sub

    Private Sub Button5_Click_1(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button5.Click
        ' Create an instance of LoginInnerScreen
        Dim innerScreenForm As New LoginInnerScreen()

        ' Set the Role property
        innerScreenForm.Role = "Student"

        ' Display the inner form
        Globals.viewChildForm(childformpanel, innerScreenForm)

    End Sub
End Class
