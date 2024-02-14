<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class ProfDashboard
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.Label23 = New System.Windows.Forms.Label()
        Me.Panel6 = New System.Windows.Forms.Panel()
        Me.Label36 = New System.Windows.Forms.Label()
        Me.Panel7 = New System.Windows.Forms.Panel()
        Me.Label39 = New System.Windows.Forms.Label()
        Me.Label38 = New System.Windows.Forms.Label()
        Me.Label37 = New System.Windows.Forms.Label()
        Me.childformpanel = New System.Windows.Forms.Panel()
        Me.PictureBox5 = New System.Windows.Forms.PictureBox()
        Me.Button6 = New System.Windows.Forms.Button()
        Me.Button5 = New System.Windows.Forms.Button()
        Me.Button4 = New System.Windows.Forms.Button()
        Me.Button3 = New System.Windows.Forms.Button()
        Me.Panel6.SuspendLayout()
        Me.Panel7.SuspendLayout()
        CType(Me.PictureBox5, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'Label23
        '
        Me.Label23.Anchor = CType((((System.Windows.Forms.AnchorStyles.Top Or System.Windows.Forms.AnchorStyles.Bottom) _
            Or System.Windows.Forms.AnchorStyles.Left) _
            Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        Me.Label23.AutoSize = True
        Me.Label23.Location = New System.Drawing.Point(209, 231)
        Me.Label23.Name = "Label23"
        Me.Label23.Size = New System.Drawing.Size(16, 17)
        Me.Label23.TabIndex = 5
        Me.Label23.Text = "4"
        Me.Label23.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'Panel6
        '
        Me.Panel6.BackColor = System.Drawing.Color.PowderBlue
        Me.Panel6.Controls.Add(Me.Label36)
        Me.Panel6.Controls.Add(Me.PictureBox5)
        Me.Panel6.Controls.Add(Me.Button6)
        Me.Panel6.Controls.Add(Me.Button5)
        Me.Panel6.Controls.Add(Me.Button4)
        Me.Panel6.Controls.Add(Me.Button3)
        Me.Panel6.Font = New System.Drawing.Font("Tahoma", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Panel6.ForeColor = System.Drawing.Color.Navy
        Me.Panel6.Location = New System.Drawing.Point(0, 26)
        Me.Panel6.Name = "Panel6"
        Me.Panel6.Size = New System.Drawing.Size(264, 577)
        Me.Panel6.TabIndex = 6
        '
        'Label36
        '
        Me.Label36.AutoSize = True
        Me.Label36.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.Label36.Font = New System.Drawing.Font("Verdana", 16.2!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label36.Location = New System.Drawing.Point(37, 143)
        Me.Label36.Name = "Label36"
        Me.Label36.Size = New System.Drawing.Size(186, 68)
        Me.Label36.TabIndex = 5
        Me.Label36.Text = "Student" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "Dashboard"
        Me.Label36.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'Panel7
        '
        Me.Panel7.BackColor = System.Drawing.Color.SteelBlue
        Me.Panel7.Controls.Add(Me.Label39)
        Me.Panel7.Controls.Add(Me.Label38)
        Me.Panel7.Controls.Add(Me.Label37)
        Me.Panel7.Font = New System.Drawing.Font("Tahoma", 10.2!, System.Drawing.FontStyle.Italic, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Panel7.ForeColor = System.Drawing.Color.LightCyan
        Me.Panel7.Location = New System.Drawing.Point(0, 0)
        Me.Panel7.Name = "Panel7"
        Me.Panel7.Size = New System.Drawing.Size(1289, 35)
        Me.Panel7.TabIndex = 7
        '
        'Label39
        '
        Me.Label39.AutoSize = True
        Me.Label39.Font = New System.Drawing.Font("Tahoma", 10.2!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label39.ForeColor = System.Drawing.Color.LightCyan
        Me.Label39.Location = New System.Drawing.Point(6, 7)
        Me.Label39.Name = "Label39"
        Me.Label39.Size = New System.Drawing.Size(151, 21)
        Me.Label39.TabIndex = 2
        Me.Label39.Text = "Semester-{semno}"
        '
        'Label38
        '
        Me.Label38.AutoSize = True
        Me.Label38.Font = New System.Drawing.Font("Tahoma", 10.2!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label38.ForeColor = System.Drawing.Color.LightCyan
        Me.Label38.Location = New System.Drawing.Point(1157, 7)
        Me.Label38.Name = "Label38"
        Me.Label38.Size = New System.Drawing.Size(117, 21)
        Me.Label38.TabIndex = 1
        Me.Label38.Text = "{Roll Number}"
        '
        'Label37
        '
        Me.Label37.AutoSize = True
        Me.Label37.Font = New System.Drawing.Font("Tahoma", 10.2!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label37.ForeColor = System.Drawing.Color.LightCyan
        Me.Label37.Location = New System.Drawing.Point(1019, 7)
        Me.Label37.Name = "Label37"
        Me.Label37.Size = New System.Drawing.Size(131, 21)
        Me.Label37.TabIndex = 0
        Me.Label37.Text = "{Student Name}"
        '
        'childformpanel
        '
        Me.childformpanel.Location = New System.Drawing.Point(267, 39)
        Me.childformpanel.Name = "childformpanel"
        Me.childformpanel.Size = New System.Drawing.Size(1017, 558)
        Me.childformpanel.TabIndex = 8
        '
        'PictureBox5
        '
        Me.PictureBox5.Image = Global.AcadSecMgmtSystem.My.Resources.Resources.iitg_logo_black_text
        Me.PictureBox5.Location = New System.Drawing.Point(3, 13)
        Me.PictureBox5.Name = "PictureBox5"
        Me.PictureBox5.Size = New System.Drawing.Size(258, 125)
        Me.PictureBox5.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom
        Me.PictureBox5.TabIndex = 4
        Me.PictureBox5.TabStop = False
        '
        'Button6
        '
        Me.Button6.BackColor = System.Drawing.Color.Transparent
        Me.Button6.FlatAppearance.BorderSize = 0
        Me.Button6.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.Button6.ForeColor = System.Drawing.Color.Black
        Me.Button6.Image = Global.AcadSecMgmtSystem.My.Resources.Resources.icons8_logout_50
        Me.Button6.ImageAlign = System.Drawing.ContentAlignment.MiddleLeft
        Me.Button6.Location = New System.Drawing.Point(0, 476)
        Me.Button6.Name = "Button6"
        Me.Button6.Padding = New System.Windows.Forms.Padding(15, 0, 35, 0)
        Me.Button6.Size = New System.Drawing.Size(264, 67)
        Me.Button6.TabIndex = 3
        Me.Button6.Text = "Logout"
        Me.Button6.UseVisualStyleBackColor = False
        '
        'Button5
        '
        Me.Button5.BackColor = System.Drawing.Color.Transparent
        Me.Button5.FlatAppearance.BorderSize = 0
        Me.Button5.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.Button5.ForeColor = System.Drawing.Color.Black
        Me.Button5.Image = Global.AcadSecMgmtSystem.My.Resources.Resources.icons8_exam_50
        Me.Button5.ImageAlign = System.Drawing.ContentAlignment.MiddleLeft
        Me.Button5.Location = New System.Drawing.Point(0, 392)
        Me.Button5.Name = "Button5"
        Me.Button5.Padding = New System.Windows.Forms.Padding(10, 0, 0, 0)
        Me.Button5.Size = New System.Drawing.Size(308, 67)
        Me.Button5.TabIndex = 2
        Me.Button5.Text = "Exam Schedule"
        Me.Button5.UseVisualStyleBackColor = False
        '
        'Button4
        '
        Me.Button4.BackColor = System.Drawing.Color.Transparent
        Me.Button4.FlatAppearance.BorderSize = 0
        Me.Button4.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.Button4.ForeColor = System.Drawing.Color.Black
        Me.Button4.Image = Global.AcadSecMgmtSystem.My.Resources.Resources.icons8_timetable_50
        Me.Button4.ImageAlign = System.Drawing.ContentAlignment.MiddleLeft
        Me.Button4.Location = New System.Drawing.Point(0, 308)
        Me.Button4.Name = "Button4"
        Me.Button4.Padding = New System.Windows.Forms.Padding(10, 0, 0, 0)
        Me.Button4.Size = New System.Drawing.Size(264, 67)
        Me.Button4.TabIndex = 1
        Me.Button4.Text = "Time table"
        Me.Button4.UseVisualStyleBackColor = False
        '
        'Button3
        '
        Me.Button3.BackColor = System.Drawing.Color.Transparent
        Me.Button3.FlatAppearance.BorderSize = 0
        Me.Button3.FlatAppearance.MouseDownBackColor = System.Drawing.Color.White
        Me.Button3.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.Button3.ForeColor = System.Drawing.Color.Black
        Me.Button3.Image = Global.AcadSecMgmtSystem.My.Resources.Resources.icons8_home_50
        Me.Button3.ImageAlign = System.Drawing.ContentAlignment.MiddleLeft
        Me.Button3.Location = New System.Drawing.Point(0, 224)
        Me.Button3.Name = "Button3"
        Me.Button3.Padding = New System.Windows.Forms.Padding(10, 0, 0, 0)
        Me.Button3.Size = New System.Drawing.Size(267, 67)
        Me.Button3.TabIndex = 0
        Me.Button3.Text = "Home Page"
        Me.Button3.UseVisualStyleBackColor = False
        '
        'ProfDashboard
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(8.0!, 16.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.Color.AliceBlue
        Me.ClientSize = New System.Drawing.Size(1285, 598)
        Me.Controls.Add(Me.childformpanel)
        Me.Controls.Add(Me.Panel7)
        Me.Controls.Add(Me.Panel6)
        Me.Controls.Add(Me.Label23)
        Me.MaximizeBox = False
        Me.MinimizeBox = False
        Me.Name = "ProfDashboard"
        Me.Text = "Student Dashboard"
        Me.Panel6.ResumeLayout(False)
        Me.Panel6.PerformLayout()
        Me.Panel7.ResumeLayout(False)
        Me.Panel7.PerformLayout()
        CType(Me.PictureBox5, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents Label23 As System.Windows.Forms.Label
    Friend WithEvents Panel6 As System.Windows.Forms.Panel
    Friend WithEvents Button3 As System.Windows.Forms.Button
    Friend WithEvents PictureBox5 As System.Windows.Forms.PictureBox
    Friend WithEvents Button6 As System.Windows.Forms.Button
    Friend WithEvents Button5 As System.Windows.Forms.Button
    Friend WithEvents Button4 As System.Windows.Forms.Button
    Friend WithEvents Label36 As System.Windows.Forms.Label
    Friend WithEvents Panel7 As System.Windows.Forms.Panel
    Friend WithEvents Label37 As System.Windows.Forms.Label
    Friend WithEvents Label39 As System.Windows.Forms.Label
    Friend WithEvents Label38 As System.Windows.Forms.Label
    Friend WithEvents childformpanel As System.Windows.Forms.Panel
End Class
