#pragma once
#include "Constants.h"
#include "StudentHome.h"
#include "StudentTimetable.h"
#include "StudentExamSchedule.h"
#include "DetailsUpdateForm.h"
namespace AcadSecManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentDashboard
	/// </summary>
	public ref class StudentDashboard : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		property System::String^ UserName;
		property System::String^ RollNumber;
		int year;

		StudentDashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		StudentDashboard(Form ^obj1)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			obj = obj1;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	internal: System::Windows::Forms::Button^  Button6;
	private: 
	internal: System::Windows::Forms::Button^  Button5;
	internal: System::Windows::Forms::Button^  Button4;
	internal: System::Windows::Forms::Button^  Button3;
	internal: System::Windows::Forms::Label^  Label36;
	internal: System::Windows::Forms::Panel^  childformpanel;
	internal: System::Windows::Forms::Button^  button1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentDashboard::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Button6 = (gcnew System::Windows::Forms::Button());
			this->Button5 = (gcnew System::Windows::Forms::Button());
			this->Button4 = (gcnew System::Windows::Forms::Button());
			this->Button3 = (gcnew System::Windows::Forms::Button());
			this->Label36 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->childformpanel = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SteelBlue;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->ForeColor = System::Drawing::Color::LightCyan;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1289, 35);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentDashboard::panel1_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1138, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"{Roll Number}";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(581, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"{Stusent Name}";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label2->Click += gcnew System::EventHandler(this, &StudentDashboard::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"{Semester - X}";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::PowderBlue;
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->Button6);
			this->panel2->Controls->Add(this->Button5);
			this->panel2->Controls->Add(this->Button4);
			this->panel2->Controls->Add(this->Button3);
			this->panel2->Controls->Add(this->Label36);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->ForeColor = System::Drawing::Color::Navy;
			this->panel2->Location = System::Drawing::Point(0, 26);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(264, 572);
			this->panel2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(-1, 431);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(267, 53);
			this->button1->TabIndex = 10;
			this->button1->Text = L"       Update Details";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &StudentDashboard::button1_Click);
			// 
			// Button6
			// 
			this->Button6->BackColor = System::Drawing::Color::Transparent;
			this->Button6->FlatAppearance->BorderSize = 0;
			this->Button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button6->ForeColor = System::Drawing::Color::Black;
			this->Button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button6.Image")));
			this->Button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Button6->Location = System::Drawing::Point(0, 501);
			this->Button6->Name = L"Button6";
			this->Button6->Padding = System::Windows::Forms::Padding(15, 0, 35, 0);
			this->Button6->Size = System::Drawing::Size(264, 55);
			this->Button6->TabIndex = 9;
			this->Button6->Text = L"Logout";
			this->Button6->UseVisualStyleBackColor = false;
			this->Button6->Click += gcnew System::EventHandler(this, &StudentDashboard::Button6_Click);
			// 
			// Button5
			// 
			this->Button5->BackColor = System::Drawing::Color::Transparent;
			this->Button5->FlatAppearance->BorderSize = 0;
			this->Button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button5->ForeColor = System::Drawing::Color::Black;
			this->Button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button5.Image")));
			this->Button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Button5->Location = System::Drawing::Point(0, 362);
			this->Button5->Name = L"Button5";
			this->Button5->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Button5->Size = System::Drawing::Size(308, 60);
			this->Button5->TabIndex = 8;
			this->Button5->Text = L"Exam Schedule";
			this->Button5->UseVisualStyleBackColor = false;
			this->Button5->Click += gcnew System::EventHandler(this, &StudentDashboard::Button5_Click);
			// 
			// Button4
			// 
			this->Button4->BackColor = System::Drawing::Color::Transparent;
			this->Button4->FlatAppearance->BorderSize = 0;
			this->Button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button4->ForeColor = System::Drawing::Color::Black;
			this->Button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button4.Image")));
			this->Button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Button4->Location = System::Drawing::Point(0, 295);
			this->Button4->Name = L"Button4";
			this->Button4->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Button4->Size = System::Drawing::Size(264, 53);
			this->Button4->TabIndex = 2;
			this->Button4->Text = L"Time table";
			this->Button4->UseVisualStyleBackColor = false;
			this->Button4->Click += gcnew System::EventHandler(this, &StudentDashboard::Button4_Click);
			// 
			// Button3
			// 
			this->Button3->BackColor = System::Drawing::Color::Transparent;
			this->Button3->FlatAppearance->BorderSize = 0;
			this->Button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->Button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button3->ForeColor = System::Drawing::Color::Black;
			this->Button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button3.Image")));
			this->Button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Button3->Location = System::Drawing::Point(0, 228);
			this->Button3->Name = L"Button3";
			this->Button3->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Button3->Size = System::Drawing::Size(267, 53);
			this->Button3->TabIndex = 7;
			this->Button3->Text = L"Home Page";
			this->Button3->UseVisualStyleBackColor = false;
			this->Button3->Click += gcnew System::EventHandler(this, &StudentDashboard::Button3_Click);
			// 
			// Label36
			// 
			this->Label36->AutoSize = true;
			this->Label36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Label36->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label36->Location = System::Drawing::Point(37, 143);
			this->Label36->Name = L"Label36";
			this->Label36->Size = System::Drawing::Size(186, 68);
			this->Label36->TabIndex = 6;
			this->Label36->Text = L"Student\r\nDashboard";
			this->Label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(258, 125);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// childformpanel
			// 
			this->childformpanel->Location = System::Drawing::Point(267, 39);
			this->childformpanel->Name = L"childformpanel";
			this->childformpanel->Size = System::Drawing::Size(1017, 558);
			this->childformpanel->TabIndex = 9;
			this->childformpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentDashboard::childformpanel_Paint);
			// 
			// StudentDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1285, 598);
			this->Controls->Add(this->childformpanel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"StudentDashboard";
			this->Text = L"Student Dashboard";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &StudentDashboard::YourForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &StudentDashboard::StudentDashboard_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void childformpanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
{
}
private:  System::Void StudentDashboard_Load(System::Object^  sender, System::EventArgs^  e) 
{
			label2->Text = UserName;
			label3->Text = RollNumber;
			int Year = year;
			int sem = (*yearTosem.find(Year)).second;
			label1->Text = "Semester - "+ Convert::ToString(sem);
			StudentHome ^ InnerForm = gcnew StudentHome(UserName, RollNumber, this->childformpanel, Convert::ToString(sem));
			Constants::subViewChildForm(childformpanel, InnerForm);

}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) 
{
}
private: System::Void Button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 // To render the StudentHome() form, replace according to the Inner form that you want to render inside
			 int Year = year;
			 int sem = (*yearTosem.find(Year)).second;
			 StudentHome ^ InnerForm = gcnew StudentHome(UserName, RollNumber, this->childformpanel, Convert::ToString(sem));
			 Constants::subViewChildForm(childformpanel, InnerForm);
}
private: System::Void Button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (getisViewTimeTable() && getisFeesPaid())
			 {
				 StudentTimetable ^ InnerForm = gcnew StudentTimetable(RollNumber);
				 Constants::subViewChildForm(childformpanel, InnerForm);
			 }
			 else if (!getisFeesPaid())
			 {
				 MessageBox::Show("Fees not paid");
			 }
			 else
			 {
				 MessageBox::Show("Time Table not generated");
			 }
}
private: System::Void Button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (getisMidEndDateSet() && getisFeesPaid())
			 {
				 StudentExamSchedule^ InnerForm = gcnew StudentExamSchedule(RollNumber);
				 Constants::subViewChildForm(childformpanel, InnerForm);
			 }
			 else if (!getisFeesPaid())
			 {
				 MessageBox::Show("Fees not paid");
			 }
			 else
			 {
				 MessageBox::Show("Midsem Endsem date not set yet");
			 }
			 
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 String ^ Role = "Student";
			DetailsUpdateForm^ InnerForm = gcnew DetailsUpdateForm(RollNumber,Role);
			Constants::subViewChildForm(childformpanel, InnerForm);
}
private: System::Void YourForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
			 Application::Exit();
			 
}
private: System::Void Button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 obj->Show();
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: bool getisViewTimeTable()
{
			 bool isViewTimeTable = false;
			 String^ queryString = "SELECT view_timetable FROM Admin";
			 String^ connString = Constants::getdbConnString();
			 SqlConnection^ con = gcnew SqlConnection(connString);
			 SqlCommand^ command = gcnew SqlCommand(queryString, con);

			 try
			 {
				 con->Open();

				 SqlDataReader^ reader = command->ExecuteReader();
				 if (reader->Read())
				 {
					 isViewTimeTable = reader->GetBoolean(0);
					 return isViewTimeTable;
				 }
			 }
			 catch (Exception^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
			 finally
			 {
				 con->Close();
			 }
			 return isViewTimeTable;
}

private: bool getisMidEndDateSet()
{
			 bool isMidEndDateSet = false;
			 String^ queryString = "SELECT CASE WHEN midsem_start_date IS NOT NULL AND endsem_start_date IS NOT NULL THEN 1 else 0 END AS Result From [Admin]";
			 String^ connString = Constants::getdbConnString();
			 SqlConnection^ con = gcnew SqlConnection(connString);
			 SqlCommand^ command = gcnew SqlCommand(queryString, con);

			 try
			 {
				 con->Open();
				 SqlDataReader^ reader = command->ExecuteReader();
				 if (reader->Read())
				 {
					 isMidEndDateSet = System::Convert::ToBoolean(reader["Result"]);
				 }
			 }
			 catch (Exception^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
			 finally
			 {
				 con->Close();
			 }
			 return isMidEndDateSet;
}

private: bool getisFeesPaid()
{
				bool isFeesPaid = false;
				String^ queryString = "SELECT fees_paid FROM [Student Database] where roll_no = " + RollNumber;
				String^ connString = Constants::getdbConnString();
				SqlConnection^ con = gcnew SqlConnection(connString);
				SqlCommand^ command = gcnew SqlCommand(queryString, con);

				try
				{
					con->Open();

					SqlDataReader^ reader = command->ExecuteReader();
					if (reader->Read())
					{
						isFeesPaid = reader->GetBoolean(0);
						return isFeesPaid;
					}
				}
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->Message);
				}
				finally
				{
					con->Close();
				}
				return isFeesPaid;
}
};
}

