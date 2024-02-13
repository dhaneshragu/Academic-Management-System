Public Class LoginInnerScreen
    Public Property Role As String

    Private Sub LoginInnerScreen_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        ' Display the Role value in the Label5 control
        Label3.Text = Role
    End Sub


    Private Sub Button3_Click_1(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button3.Click

        Dim mainForm As LoginDashboard = TryCast(Me.ParentForm, LoginDashboard)
        If Role = "Admin" Then
            ' Open AdminDashboard.vd
            Dim adminDashboard As New AdminDashboard()
            adminDashboard.Show()
        ElseIf Role = "Professor" Then
            ' Open ProfDashboard.vd
            Dim profDashboard As New ProfDashboard()
            profDashboard.Show()
        ElseIf Role = "Student" Then
            ' Open StudentDashboard.vd
            Dim studentDashboard As New StudentDashboard()
            studentDashboard.Show()
        End If
    End Sub

    Private Sub Button3_MouseEnter(ByVal sender As Object, ByVal e As EventArgs) Handles Button3.MouseEnter
        ' Change the background color when the mouse enters the button
        Button3.BackColor = Color.RoyalBlue ' Replace with the desired hover color
    End Sub

    Private Sub Button3_MouseLeave(ByVal sender As Object, ByVal e As EventArgs) Handles Button3.MouseLeave
        ' Revert the background color to the original color when the mouse leaves the button
        Button3.BackColor = Color.LightBlue

    End Sub

    Private Sub PictureBox1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs)

    End Sub
End Class
