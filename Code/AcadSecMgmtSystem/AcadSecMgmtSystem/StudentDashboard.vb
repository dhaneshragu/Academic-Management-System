Public Class StudentDashboard

    Private Sub Form2_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        'View the student home by default - first argument, name of the panel in the parent form, second - name of the child form
        Globals.viewChildForm(childformpanel, StudentHome)
    End Sub
End Class