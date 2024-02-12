Public Class ProfDashboard

    Private Sub Form2_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        'View the student home by default - first argument, name of the panel in the parent form, second - name of the child form
        Globals.viewChildForm(childformpanel, StudentHome)
    End Sub

    Private Sub Button3_Click(sender As System.Object, e As System.EventArgs) Handles Button3.Click
        'View the student home on clicking the student Button3
        Globals.viewChildForm(childformpanel, StudentHome)
    End Sub

    Private Sub Button4_Click(sender As System.Object, e As System.EventArgs) Handles Button4.Click
        'View Student Time table on clicking this button
        Globals.viewChildForm(childformpanel, StudentTimeTable)
    End Sub

    Private Sub Button5_Click(sender As System.Object, e As System.EventArgs) Handles Button5.Click
        'View Student Examination on clicking this button
        Globals.viewChildForm(childformpanel, StudentExamSchedule)
    End Sub
End Class