#pragma once
#include "Constants.h"
#include <map>
#include <vector>
#include <set>
#include <algorithm>
#include <string.h>
#include <sstream>
#include <string>
#include <stdlib.h>
#include <cstring> 
#include "updateform.h"
using namespace std;
static map<string, string>detailsAd;
namespace AcadSecManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminSetDates
	/// </summary>
	public ref class AdminSetDates : public System::Windows::Forms::Form
	{
	public:
		AdminSetDates(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminSetDates()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::RadioButton^  YesGradeCollection;
	private: System::Windows::Forms::RadioButton^  NoGradeCollection;
	private: System::Windows::Forms::RadioButton^  NoViewGrades;
	private: System::Windows::Forms::RadioButton^  YesViewGrades;
	private: System::Windows::Forms::RadioButton^  NoCourseEnr;
	private: System::Windows::Forms::RadioButton^  YesCourseEnr;
	private: System::Windows::Forms::DateTimePicker^  dateMidsem;
	private: System::Windows::Forms::DateTimePicker^  dateEndsem;
	private: System::Windows::Forms::Button^  buttonTT;
	private: System::Windows::Forms::Button^  buttonExamTT;
	private: System::Windows::Forms::RadioButton^  NoFeePayment;
	private: System::Windows::Forms::RadioButton^  YesFeePayment;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  buttonSave;
	private: System::Windows::Forms::Button^  buttonReset;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::CheckBox^  checkBox1;


	private: System::Windows::Forms::CheckBox^  checkBox2;



	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminSetDates::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->YesGradeCollection = (gcnew System::Windows::Forms::RadioButton());
			this->NoGradeCollection = (gcnew System::Windows::Forms::RadioButton());
			this->NoViewGrades = (gcnew System::Windows::Forms::RadioButton());
			this->YesViewGrades = (gcnew System::Windows::Forms::RadioButton());
			this->NoCourseEnr = (gcnew System::Windows::Forms::RadioButton());
			this->YesCourseEnr = (gcnew System::Windows::Forms::RadioButton());
			this->dateMidsem = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateEndsem = (gcnew System::Windows::Forms::DateTimePicker());
			this->buttonTT = (gcnew System::Windows::Forms::Button());
			this->buttonExamTT = (gcnew System::Windows::Forms::Button());
			this->NoFeePayment = (gcnew System::Windows::Forms::RadioButton());
			this->YesFeePayment = (gcnew System::Windows::Forms::RadioButton());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(245, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Start Grade Collection :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(334, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"View Grades :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Blue;
			this->label3->Location = System::Drawing::Point(220, 193);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(248, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Start Course Registration :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Blue;
			this->label4->Location = System::Drawing::Point(282, 273);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(186, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Midsem Start Date :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Blue;
			this->label5->Location = System::Drawing::Point(280, 321);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(188, 24);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Endsem Start Date :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Blue;
			this->label6->Location = System::Drawing::Point(301, 410);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(167, 24);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Exam Timetable :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Blue;
			this->label7->Location = System::Drawing::Point(288, 367);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(180, 24);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Course Timetable :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Blue;
			this->label8->Location = System::Drawing::Point(281, 231);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(187, 24);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Start Fee Payment :";
			// 
			// YesGradeCollection
			// 
			this->YesGradeCollection->AutoSize = true;
			this->YesGradeCollection->Location = System::Drawing::Point(24, 13);
			this->YesGradeCollection->Name = L"YesGradeCollection";
			this->YesGradeCollection->Size = System::Drawing::Size(61, 28);
			this->YesGradeCollection->TabIndex = 8;
			this->YesGradeCollection->TabStop = true;
			this->YesGradeCollection->Text = L"Yes";
			this->YesGradeCollection->UseVisualStyleBackColor = true;
			// 
			// NoGradeCollection
			// 
			this->NoGradeCollection->AutoSize = true;
			this->NoGradeCollection->Location = System::Drawing::Point(189, 13);
			this->NoGradeCollection->Name = L"NoGradeCollection";
			this->NoGradeCollection->Size = System::Drawing::Size(55, 28);
			this->NoGradeCollection->TabIndex = 9;
			this->NoGradeCollection->TabStop = true;
			this->NoGradeCollection->Text = L"No";
			this->NoGradeCollection->UseVisualStyleBackColor = true;
			// 
			// NoViewGrades
			// 
			this->NoViewGrades->AutoSize = true;
			this->NoViewGrades->Location = System::Drawing::Point(189, 18);
			this->NoViewGrades->Name = L"NoViewGrades";
			this->NoViewGrades->Size = System::Drawing::Size(55, 28);
			this->NoViewGrades->TabIndex = 11;
			this->NoViewGrades->TabStop = true;
			this->NoViewGrades->Text = L"No";
			this->NoViewGrades->UseVisualStyleBackColor = true;
			// 
			// YesViewGrades
			// 
			this->YesViewGrades->AutoSize = true;
			this->YesViewGrades->Location = System::Drawing::Point(24, 18);
			this->YesViewGrades->Name = L"YesViewGrades";
			this->YesViewGrades->Size = System::Drawing::Size(61, 28);
			this->YesViewGrades->TabIndex = 10;
			this->YesViewGrades->TabStop = true;
			this->YesViewGrades->Text = L"Yes";
			this->YesViewGrades->UseVisualStyleBackColor = true;
			// 
			// NoCourseEnr
			// 
			this->NoCourseEnr->AutoSize = true;
			this->NoCourseEnr->Location = System::Drawing::Point(189, 16);
			this->NoCourseEnr->Name = L"NoCourseEnr";
			this->NoCourseEnr->Size = System::Drawing::Size(55, 28);
			this->NoCourseEnr->TabIndex = 13;
			this->NoCourseEnr->Text = L"No";
			this->NoCourseEnr->UseVisualStyleBackColor = true;
			// 
			// YesCourseEnr
			// 
			this->YesCourseEnr->AutoSize = true;
			this->YesCourseEnr->Location = System::Drawing::Point(24, 15);
			this->YesCourseEnr->Name = L"YesCourseEnr";
			this->YesCourseEnr->Size = System::Drawing::Size(61, 28);
			this->YesCourseEnr->TabIndex = 12;
			this->YesCourseEnr->Text = L"Yes";
			this->YesCourseEnr->UseVisualStyleBackColor = true;
			// 
			// dateMidsem
			// 
			this->dateMidsem->Location = System::Drawing::Point(514, 273);
			this->dateMidsem->Name = L"dateMidsem";
			this->dateMidsem->Size = System::Drawing::Size(200, 28);
			this->dateMidsem->TabIndex = 14;
			// 
			// dateEndsem
			// 
			this->dateEndsem->Location = System::Drawing::Point(515, 317);
			this->dateEndsem->Name = L"dateEndsem";
			this->dateEndsem->Size = System::Drawing::Size(200, 28);
			this->dateEndsem->TabIndex = 15;
			// 
			// buttonTT
			// 
			this->buttonTT->BackColor = System::Drawing::Color::Lime;
			this->buttonTT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonTT->Location = System::Drawing::Point(515, 361);
			this->buttonTT->Name = L"buttonTT";
			this->buttonTT->Size = System::Drawing::Size(124, 34);
			this->buttonTT->TabIndex = 16;
			this->buttonTT->Text = L"Generate";
			this->buttonTT->UseVisualStyleBackColor = false;
			this->buttonTT->Click += gcnew System::EventHandler(this, &AdminSetDates::buttonTT_Click);
			// 
			// buttonExamTT
			// 
			this->buttonExamTT->BackColor = System::Drawing::Color::Lime;
			this->buttonExamTT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonExamTT->Location = System::Drawing::Point(515, 404);
			this->buttonExamTT->Name = L"buttonExamTT";
			this->buttonExamTT->Size = System::Drawing::Size(124, 34);
			this->buttonExamTT->TabIndex = 19;
			this->buttonExamTT->Text = L"Generate";
			this->buttonExamTT->UseVisualStyleBackColor = false;
			this->buttonExamTT->Click += gcnew System::EventHandler(this, &AdminSetDates::buttonExamTT_Click);
			// 
			// NoFeePayment
			// 
			this->NoFeePayment->AutoSize = true;
			this->NoFeePayment->Location = System::Drawing::Point(189, 19);
			this->NoFeePayment->Name = L"NoFeePayment";
			this->NoFeePayment->Size = System::Drawing::Size(55, 28);
			this->NoFeePayment->TabIndex = 21;
			this->NoFeePayment->TabStop = true;
			this->NoFeePayment->Text = L"No";
			this->NoFeePayment->UseVisualStyleBackColor = true;
			// 
			// YesFeePayment
			// 
			this->YesFeePayment->AutoSize = true;
			this->YesFeePayment->Location = System::Drawing::Point(24, 19);
			this->YesFeePayment->Name = L"YesFeePayment";
			this->YesFeePayment->Size = System::Drawing::Size(61, 28);
			this->YesFeePayment->TabIndex = 20;
			this->YesFeePayment->TabStop = true;
			this->YesFeePayment->Text = L"Yes";
			this->YesFeePayment->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::DarkCyan;
			this->label9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label9.Image")));
			this->label9->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label9->Location = System::Drawing::Point(388, 31);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(247, 36);
			this->label9->TabIndex = 22;
			this->label9->Text = L"       Set Dates";
			this->label9->Click += gcnew System::EventHandler(this, &AdminSetDates::label9_Click);
			// 
			// buttonSave
			// 
			this->buttonSave->BackColor = System::Drawing::Color::GreenYellow;
			this->buttonSave->Location = System::Drawing::Point(369, 480);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(138, 47);
			this->buttonSave->TabIndex = 23;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = false;
			this->buttonSave->Click += gcnew System::EventHandler(this, &AdminSetDates::buttonSave_Click);
			// 
			// buttonReset
			// 
			this->buttonReset->BackColor = System::Drawing::Color::Tomato;
			this->buttonReset->Location = System::Drawing::Point(515, 480);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(138, 47);
			this->buttonReset->TabIndex = 24;
			this->buttonReset->Text = L"Reset";
			this->buttonReset->UseVisualStyleBackColor = false;
			this->buttonReset->Click += gcnew System::EventHandler(this, &AdminSetDates::buttonReset_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->NoGradeCollection);
			this->groupBox1->Controls->Add(this->YesGradeCollection);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(485, 87);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(279, 53);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->YesViewGrades);
			this->groupBox4->Controls->Add(this->NoViewGrades);
			this->groupBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox4->Location = System::Drawing::Point(485, 129);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(279, 53);
			this->groupBox4->TabIndex = 27;
			this->groupBox4->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->YesCourseEnr);
			this->groupBox2->Controls->Add(this->NoCourseEnr);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox2->Location = System::Drawing::Point(485, 174);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(279, 53);
			this->groupBox2->TabIndex = 28;
			this->groupBox2->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->YesFeePayment);
			this->groupBox3->Controls->Add(this->NoFeePayment);
			this->groupBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox3->Location = System::Drawing::Point(485, 214);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(279, 53);
			this->groupBox3->TabIndex = 29;
			this->groupBox3->TabStop = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(740, 273);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(61, 28);
			this->checkBox1->TabIndex = 30;
			this->checkBox1->Text = L"Set";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(740, 317);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(61, 28);
			this->checkBox2->TabIndex = 31;
			this->checkBox2->Text = L"Set";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// AdminSetDates
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1016, 557);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->buttonReset);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->buttonExamTT);
			this->Controls->Add(this->buttonTT);
			this->Controls->Add(this->dateEndsem);
			this->Controls->Add(this->dateMidsem);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"AdminSetDates";
			this->Text = L"AdminSetDates";
			this->Load += gcnew System::EventHandler(this, &AdminSetDates::ProfSetDates_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
		 void MarshalString(String ^ s, string& os) {
			 using namespace Runtime::InteropServices;
			 const char* chars =
				 (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			 os = chars;
			 Marshal::FreeHGlobal(IntPtr((void*)chars));
		 }
private: System::Void buttonTT_Click(System::Object^  sender, System::EventArgs^  e) //Time Table Generation
{
			 // This TimeTable generation function is triggered when the admin clicks on button.
			 // This is a Heuristic based Timetable generator which aims to reduce conflicts between compulsory courses and elective courses.
			 // Here the problem reduces to alloting each course a slot as we assume timetable follows the same pattern as existing timetable with slots.
			 // This function ensures that no 2 compulsory courses for same batch are given same slot 
			 // This function ensures that no 2 courses for same proffessor are given same slot
			 // The heuristic in play here is that compulsory courses are alloted starting from A to then G slot.
			 // However electives are alloted starting from G to then A slot. Hence minimising the conflicts 
			 // The 1st and 3rd years have classes in morning and labs in afternoon whereas 2nd and 4th year have classes in afternoon and labs in morning.
			 // The same heuristic is followed for lab scheduling. 
				 try
				 {
					 //Connection string for SQL database
					 String^ connString = Constants::getdbConnString();

					 //Query for data from courses and admin
					 String^ query = "SELECT * FROM Courses";
					 String^ query2 = "SELECT * FROM Admin";

					 //Usefull variables for sql
					 SqlConnection^ cn = gcnew SqlConnection();
					 SqlDataAdapter^ da;
					 SqlDataAdapter^ da2;
					 SqlCommand^ DAUpdateCmd;
					 SqlCommand^ DAUpdateCmd2;

					 //Opening up the Connection
					 cn->ConnectionString = connString;
					 cn->Open();

					 //Creating SQLDataAdapter
					 da = gcnew SqlDataAdapter(query, cn);
					 da2 = gcnew SqlDataAdapter(query2, cn);

					 // Creating datatable
					 DataTable^ dataTable = gcnew DataTable();
					 DataTable^ dataTable2 = gcnew DataTable();

					 //Update Query for both databases
					 String^ updatequery = "UPDATE Courses SET slot = @slot, room_ID=@room_ID WHERE course_ID = @CourseCode";
					 String^ updatequery2 = "UPDATE Admin SET view_timetable = 'True'";

					 //Setting update Query
					 DAUpdateCmd = gcnew SqlCommand(updatequery, da->SelectCommand->Connection);
					 DAUpdateCmd2 = gcnew SqlCommand(updatequery2, da2->SelectCommand->Connection);

					 //Adding parameters to be updated i.e. Slot CourseCode and RoomID
					 DAUpdateCmd->Parameters->Add("@slot", SqlDbType::VarChar, 50, "slot");
					 DAUpdateCmd->Parameters->Add("@CourseCode", SqlDbType::VarChar, 50, "course_ID");
					 DAUpdateCmd->Parameters->Add("@room_ID", SqlDbType::VarChar, 50, "room_ID");
					 
					 //Setting update Command
					 da->UpdateCommand = DAUpdateCmd;
					 da2->UpdateCommand = DAUpdateCmd2;

					 //Recieving Data
					 da->Fill(dataTable);
					 da2->Fill(dataTable2);

					 //Number of Rows
					 int n = dataTable->Rows->Count;
					 
					 //Maps to store mapping

					 //Maps each semester to it's courseAllotmentLeft
					 map<string,set<string>> courseAllotmentLeft;
					 //Maps each year to it's labAllotmentLeft
					 map<string, set<string>> labAllotmentLeft;
					 //Maps each proffessor to all it's Alloted slots
					 map<string, set<string>> proffessorsAlloted;
					 //Maps each Slot to it room mapping
					 map<string, vector<int>> slotToRoomMapping;

					 //Initial sets to contain all slots name
					 set<string> morning;
					 set<string> evening;
					 set<string> morninglab;
					 set<string> eveninglab;

					 //Populating Sets with slot names
					 morning.insert("A");
					 morning.insert("B");
					 morning.insert("C");
					 morning.insert("D");
					 morning.insert("F");
					 morning.insert("G");

					 evening.insert("A1");
					 evening.insert("B1");
					 evening.insert("C1");
					 evening.insert("D1");
					 evening.insert("F1");
					 evening.insert("G1");

					 morninglab.insert("ML1");
					 morninglab.insert("ML2");
					 morninglab.insert("ML3");
					 morninglab.insert("ML4");
					 morninglab.insert("ML5");

					 eveninglab.insert("AL1");
					 eveninglab.insert("AL2");
					 eveninglab.insert("AL3");
					 eveninglab.insert("AL4");
					 eveninglab.insert("AL5");
					 
					 //Initialising courseAllotmentLeft with full sets as all slots are left and can be used
					 courseAllotmentLeft.insert({ "2", morning });
					 courseAllotmentLeft.insert({ "4", evening });
					 courseAllotmentLeft.insert({ "6", morning });
					 courseAllotmentLeft.insert({ "8", evening });

					 //Initialising labAllotmentLeft with full sets as all slots are left and can be used
					 labAllotmentLeft.insert({ "2", eveninglab });
					 labAllotmentLeft.insert({ "4", morninglab });
					 labAllotmentLeft.insert({ "6", eveninglab });
					 labAllotmentLeft.insert({ "8", morninglab });

					 //Mapping slots to vector of RoomIDs. Each batch's room is index of this vector.
					 //For example for vector { 1, 1,2,2 }, 1st year's roomID will be 1 whereas 4th year's roomID will be 2.
					 slotToRoomMapping.insert({ "A", { 1, 1,2,2 } });
					 slotToRoomMapping.insert({ "A1", { 1, 1,2,2 } });
					 slotToRoomMapping.insert({ "B", { 1, 1, 2, 2 } });
					 slotToRoomMapping.insert({ "B1", { 1, 1, 2, 2 } });
					 slotToRoomMapping.insert({ "C", { 1, 1, 2, 2 } });
					 slotToRoomMapping.insert({ "C1", { 1, 1, 2, 2 } });
					 slotToRoomMapping.insert({ "D", { 8, 8, 9, 9 } });
					 slotToRoomMapping.insert({ "D1", { 8, 8, 9, 9 } });
					 slotToRoomMapping.insert({ "F", { 8, 8, 9, 9 } });
					 slotToRoomMapping.insert({ "F1", { 8, 8, 9, 9 } });
					 slotToRoomMapping.insert({ "G", { 8, 8, 9, 9 } });
					 slotToRoomMapping.insert({ "G1", { 8, 8, 9, 9 } });


					//  For compulsoory courses

					 for (int i = 0; i < n; i++)
					 {
						 //ith row of Data
						 DataRow^ row = dataTable->Rows[i];

						 //Variables to store semester and prof taking that course
						 string semOffered;
						 string ProfId;

						 //Helper function to convert the row data to normal string in c++
						 MarshalString(row["sem_offered"]->ToString(), semOffered);
						 MarshalString(row["prof_ID"]->ToString(), ProfId);

						 //If the proffessor doesnt exist in mapping insert prof id with an empty set
						 if (proffessorsAlloted.find(ProfId) == proffessorsAlloted.end())
						 {
							 set<string> st;
							 proffessorsAlloted.insert({ ProfId, st });
						 }

						 //Checking if this is a compulsory course and not a lab course
						 if (row["is_compulsory"]->ToString() == "True" && row["is_lab"]->ToString() == "False")
						 {
							 
							 //If the semester has used all it's available show a error 
							 if (courseAllotmentLeft.find(semOffered) == courseAllotmentLeft.end())
							 {
								 MessageBox::Show("No allotment Found");
								 String^ str2 = gcnew String(semOffered.c_str());
								 MessageBox::Show(str2);
							 }

							 //Find the first available slot in increasing order of available slots as in in order A-G
							 auto slot = (*courseAllotmentLeft.find(semOffered)).second.begin();

							 //Loop till all available slots
							 while (slot != (*courseAllotmentLeft.find(semOffered)).second.end())
							 {
								 //Check if the proffessor is free in this slot and if he is free assign this slot to this course
								 if ((*proffessorsAlloted.find(ProfId)).second.find(*slot) == (*proffessorsAlloted.find(ProfId)).second.end())
								 {
									 //Insert this slot in proffessor's map
									(*proffessorsAlloted.find(ProfId)).second.insert(*slot);
									
									 // Update the roomID and slot for course
									 String^ tempslot = gcnew String((*slot).c_str());
									 int roomid = slotToRoomMapping.find(*slot)->second[stoi(semOffered) / 2 - 1];
									 row["room_ID"] = roomid;
									 row["slot"] = tempslot;
									
									 //Remove this slot from available slot
									 courseAllotmentLeft.find(semOffered)->second.erase(slot);
									 //Break out of loop
									 break;
								 }
								 //If proffessor was not free move onto next slot
								 slot++;
							 }

						 }

						 else if (row["is_compulsory"]->ToString() == "True" && row["is_lab"]->ToString() == "True")
						 {
							 //Same room i.e CSE Lab for all lab courses
							 row["room_ID"] = 10;


							 //If the semester has used all it's available lab slots show a error 
							 if (labAllotmentLeft.find(semOffered) == labAllotmentLeft.end())
							 {
								 MessageBox::Show("No allotment Found");
								 String^ str2 = gcnew String(semOffered.c_str());
								 MessageBox::Show(str2);
							 }
							 //Find the first available slot in increasing order of available slots as in in order A-G
							 auto slot = (*labAllotmentLeft.find(semOffered)).second.begin();

							 //Loop till all available slots
							 while (slot != (*labAllotmentLeft.find(semOffered)).second.end())
							 {
								 //Check if the proffessor is free in this slot and if he is free assign this slot to this course
								 if ((*proffessorsAlloted.find(ProfId)).second.find(*slot) == (*proffessorsAlloted.find(ProfId)).second.end())
								 {
									 //Insert this slot in proffessor's map
									 (*proffessorsAlloted.find(ProfId)).second.insert(*slot);
									 
									 // Update the slot for course
									 String^ tempslot = gcnew String((*slot).c_str());
									 row["slot"] = tempslot;
									 
									 //Remove this slot from available slot
									 labAllotmentLeft.find(semOffered)->second.erase(slot);
									 //Break out of loop
									 break;
								 }
								 //If proffessor was not free move onto next slot
								 slot++;
							 }
						 }

					 }

					//  For elective courses

					 for (int i = 0; i < n; i++)
					 {
						 //ith row of Data
						 DataRow^ row = dataTable->Rows[i];
						 
						 //Checking if this is a elective course and not a lab course
						 if (row["is_compulsory"]->ToString() == "False" && row["is_lab"]->ToString() == "False") 
						 {
							
							 string semOffered;
							 string ProfId;
							 MarshalString(row["sem_offered"]->ToString(), semOffered);
							 MarshalString(row["prof_ID"]->ToString(), ProfId);
							//  create a new string with the last character of sem_offered
							 string sem = semOffered;
							 sem = sem.substr(sem.length() - 1, 1);
							//  check if slot is available for the sem
							if ((*courseAllotmentLeft.find(sem)).second.size() == 0)
							{
								
								sem = semOffered;
								sem = sem.substr(0, 1);
							}
							
							
							if (proffessorsAlloted.find(ProfId) == proffessorsAlloted.end())
							{
								
								set<string> st;
								proffessorsAlloted.insert({ ProfId, st });
							}
							if (courseAllotmentLeft.find(sem) == courseAllotmentLeft.end())
							{
								MessageBox::Show("No allotment Found");
								String^ str2 = gcnew String((sem).c_str());
								MessageBox::Show(str2);
							}
							auto slot = (*courseAllotmentLeft.find(sem)).second.rbegin();
							while (slot != (*courseAllotmentLeft.find(sem)).second.rend())
							{
								if (proffessorsAlloted.find(ProfId) == proffessorsAlloted.end())
								{
									MessageBox::Show("prof_ID Not Found");
								}
								if ((*proffessorsAlloted.find(ProfId)).second.find(*slot) == (*proffessorsAlloted.find(ProfId)).second.end())
								{
									(*proffessorsAlloted.find(ProfId)).second.insert(*slot);
									
									String^ tempslot = gcnew String((*slot).c_str());
									int roomid = slotToRoomMapping.find(*slot)->second[stoi(sem) / 2 - 1];
									row["room_ID"] = roomid;
									
									row["slot"] = tempslot;
									
									courseAllotmentLeft.find(sem)->second.erase(courseAllotmentLeft.find(sem)->second.find(*slot));
									
									break;
								}
								slot++;
							}
						 }

						 else if (row["is_compulsory"]->ToString() == "False" && row["is_lab"]->ToString() == "True")
						 {
							
							 row["room_ID"] = 10;
							 string semOffered;
							 string ProfId;
							 MarshalString(row["sem_offered"]->ToString(), semOffered);
							 MarshalString(row["prof_ID"]->ToString(), ProfId);
							 string sem = semOffered;
							 sem = sem.substr(0, 1);
							 //  check if slot is available for the sem
							 if ((*labAllotmentLeft.find(sem)).second.size() == 0)
							 {
								 sem = semOffered;
								 sem = sem.substr(sem.length() - 1, 1);
							 }

							
							 if (proffessorsAlloted.find(ProfId) == proffessorsAlloted.end())
							 {
								 
								 set<string> st;
								 proffessorsAlloted.insert({ ProfId, st });
							 }
							 if (labAllotmentLeft.find(sem) == labAllotmentLeft.end())
							 {
								 MessageBox::Show("No allotment Found");
								 String^ str2 = gcnew String((sem).c_str());
								 MessageBox::Show(str2);
							 }
							 //  find the last slot available for the prof
							 auto slot = (*labAllotmentLeft.find(sem)).second.begin();
							 while (slot != (*labAllotmentLeft.find(sem)).second.end())
							 {
								 if (proffessorsAlloted.find(ProfId) == proffessorsAlloted.end())
								 {
									 MessageBox::Show("prof_ID Not Found");
								 }
								 if ((*proffessorsAlloted.find(ProfId)).second.find(*slot) == (*proffessorsAlloted.find(ProfId)).second.end())
								 {
									 (*proffessorsAlloted.find(ProfId)).second.insert(*slot);
									 
									 String^ tempslot = gcnew String((*slot).c_str());
									
									 row["slot"] = tempslot;
									 
									 break;
								 }
								 slot++;
							 }
						 } 
					 }
					

					// Update the sql database with dataTable
					 da->Update(dataTable);
					 da2->Update(dataTable2);
					
					 cn->Close();
					 MessageBox::Show("Updating Database Complete");



				 }
				 catch (Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
}
private: System::Void ProfSetDates_Load(System::Object^  sender, System::EventArgs^  e) {
			 
			 // Load details from the Admin table
			 detailsAd = getDetails();

			 // Set the value of dateMidsem based on midsem_start_date from detailsAd
			 if (detailsAd["midsem_start_date"].length())
				 dateMidsem->Value = ParseDateString(detailsAd["midsem_start_date"]);
			 else
				 MarshalString(dateMidsem->Value.ToString(), detailsAd["midsem_start_date"]);

			 // Set the value of dateEndsem based on endsem_start_date from detailsAd
			 if (detailsAd["endsem_start_date"].length())
				 dateEndsem->Value = ParseDateString(detailsAd["endsem_start_date"]);
			 else
				 MarshalString(dateEndsem->Value.ToString(), detailsAd["endsem_start_date"]);

			 // Check the appropriate radio button for grade submission based on is_grade_submission from detailsAd
			 if (detailsAd["is_grade_submission"] == "True")
			 {
				 YesGradeCollection->Checked = true;
			 }
			 else
			 {
				 NoGradeCollection->Checked = true;
			 }

			 // Check the appropriate radio button for grade view based on view_grades from detailsAd
			 if (detailsAd["view_grades"] == "True")
			 {
				 YesViewGrades->Checked = true;
			 }
			 else
			 {
				 NoViewGrades->Checked = true;
			 }

			 // Check the appropriate radio button for course registration based on is_course_registration from detailsAd
			 if (detailsAd["is_course_registration"] == "True")
			 {
				 YesCourseEnr->Checked = true;
			 }
			 else
			 {
				 NoCourseEnr->Checked = true;
			 }

			 // Check the appropriate radio button for fee payment based on start_fee_payment from detailsAd
			 if (detailsAd["start_fee_payment"] == "True")
			 {
				 YesFeePayment->Checked = true;
			 }
			 else
			 {
				 NoFeePayment->Checked = true;
			 }
			 

}
	
private: std::map<std::string, std::string> getDetails()
{
			 // SQL query to retrieve all columns from the Admin table
			 String^ queryString = "SELECT * FROM Admin";

			 // Get the database connection string
			 String^ connString = Constants::getdbConnString();

			 // Create a SqlConnection using the connection string
			 SqlConnection^ con = gcnew SqlConnection(connString);

			 // Create a SqlCommand with the query and connection
			 SqlCommand^ command = gcnew SqlCommand(queryString, con);

			 // Create a std::map to store details from the database
			 std::map<std::string, std::string> details;

			 try
			 {
				 // Open the database connection
				 con->Open();

				 // Execute the SQL query and retrieve the results
				 SqlDataReader^ reader = command->ExecuteReader();

				 // Check if there are rows in the result set
				 if (reader->Read())
				 {
					 // Loop through each column in the result set
					 for (int i = 0; i < reader->FieldCount; ++i)
					 {
						 // Get the name and value of the current column
						 String^ columnName = reader->GetName(i);
						 int columnIndex = reader->GetOrdinal(columnName);
						 Object^ columnValue = reader->GetSqlValue(columnIndex);
						 String^ columnValueStr = columnValue->ToString();

						 // Convert String^ to native std::string
						 string columnNameStr;
						 string columnValueStrNative;
						 MarshalString(columnName, columnNameStr);
						 MarshalString(columnValueStr, columnValueStrNative);

						 // Insert the column name and value into the std::map
						 details.insert({ columnNameStr, columnValueStrNative });
					 }
				 }
			 }
			 catch (Exception^ ex)
			 {
				 // Display a message box with the exception message if an error occurs
				 MessageBox::Show(ex->Message);
			 }
			 finally
			 {
				 // Close the database connection in the finally block to ensure it happens regardless of exceptions
				 con->Close();
			 }

			 // Return the std::map containing details from the database
			 return details;
}

private: System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {
			 // Initialize flag to indicate whether to proceed with the update
			 bool flag = 1;

			 // Show a confirmation message box and get the user's response
			 System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to make these changes?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			 // Check if the user clicked No, set flag to 0 to prevent the update
			 if (result == System::Windows::Forms::DialogResult::No) {
				 flag = 0;
			 }

			 // Check if the update should proceed
			 if (flag) {
				 // Initialize variables to default values
				 String^ gradeCollection = "False";
				 String^ courseReg = "False";
				 String^ feePayment = "False";
				 String^ gradeView = "False";
				 String^ midSemDate = "NULL";
				 String^ endSemDate = "NULL";

				 // Update variables based on the state of checkboxes and date pickers
				 if (YesGradeCollection->Checked)
					 gradeCollection = "True";
				 if (YesFeePayment->Checked)
					 feePayment = "True";
				 if (YesCourseEnr->Checked)
					 courseReg = "True";
				 if (YesViewGrades->Checked)
					 gradeView = "True";
				 if (checkBox1->Checked)
					 midSemDate = dateMidsem->Value.ToString("yyyy-MM-dd");
				 if (checkBox2->Checked)
					 endSemDate = dateEndsem->Value.ToString("yyyy-MM-dd");

				 // Call the updateAdminDetails function with the updated values
				 updateAdminDetails(gradeCollection, courseReg, feePayment, gradeView, midSemDate, endSemDate);
			 }

			 // Retrieve updated details from the database
			 detailsAd = getDetails();

			 // Update UI elements based on the retrieved details
			 if (detailsAd["midsem_start_date"].length())
				 dateMidsem->Value = ParseDateString(detailsAd["midsem_start_date"]);
			 else
				 MarshalString(dateMidsem->Value.ToString(), detailsAd["midsem_start_date"]);

			 if (detailsAd["endsem_start_date"].length())
				 dateEndsem->Value = ParseDateString(detailsAd["endsem_start_date"]);
			 else
				 MarshalString(dateEndsem->Value.ToString(), detailsAd["endsem_start_date"]);

			 if (detailsAd["is_grade_submission"] == "True")
				 YesGradeCollection->Checked = true;
			 else
				 NoGradeCollection->Checked = true;

			 if (detailsAd["view_grades"] == "True")
				 YesViewGrades->Checked = true;
			 else
				 NoViewGrades->Checked = true;

			 if (detailsAd["is_course_registration"] == "True")
				 YesCourseEnr->Checked = true;
			 else
				 NoCourseEnr->Checked = true;

			 if (detailsAd["start_fee_payment"] == "True")
				 YesFeePayment->Checked = true;
			 else
				 NoFeePayment->Checked = true;
}

private: void updateAdminDetails(String^ gradeCollection, String^ courseReg, String^ feePayment, String^ gradeView, String^ midSemDate, String^ endSemDate)
{
			 // SQL query for updating Admin details based on the provided parameters
			 String^ queryString = "UPDATE [Admin] SET is_course_registration = @courseReg, is_grade_submission = @gradeCollection, view_grades = @gradeView, start_fee_payment = @feePayment";

			 // Check if midSemDate is not "NULL" and append it to the query
			 if (midSemDate != "NULL")
				 queryString += ", midsem_start_date = @midSemDate";

			 // Check if endSemDate is not "NULL" and append it to the query
			 if (endSemDate != "NULL")
				 queryString += ", endsem_start_date = @endSemDate";

			 // Get the database connection string
			 String^ connString = Constants::getdbConnString();
			 SqlConnection^ con = gcnew SqlConnection(connString);

			 // Create a SQL command with the query and connection
			 SqlCommand^ command = gcnew SqlCommand(queryString, con);

			 // Add parameters to the command for each variable
			 command->Parameters->AddWithValue("@gradeCollection", gradeCollection);
			 command->Parameters->AddWithValue("@courseReg", courseReg);
			 command->Parameters->AddWithValue("@feePayment", feePayment);
			 command->Parameters->AddWithValue("@gradeView", gradeView);
			 command->Parameters->AddWithValue("@midSemDate", midSemDate);
			 command->Parameters->AddWithValue("@endSemDate", endSemDate);

			 try {
				 // Open the database connection
				 con->Open();

				 // Execute the SQL command to update the Admin details
				 command->ExecuteNonQuery();

				 // Display a success message in the console
				 Console::WriteLine("User details updated successfully.");
			 }
			 catch (Exception^ ex) {
				 // Display an error message in the console
				 Console::WriteLine("Error: " + ex->Message);

				 // Show a confirmation message box with the error message
				 System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to make these changes? " + ex->Message, "Confirmation", MessageBoxButtons::OK, MessageBoxIcon::Question);
			 }

			 // Close the database connection
			 con->Close();
}

private: System::Void buttonReset_Click(System::Object^ sender, System::EventArgs^ e) {
			 // Check if midsem_start_date is available in the detailsAd map and update the dateMidsem accordingly
			 if (detailsAd["midsem_start_date"].length())
				 dateMidsem->Value = ParseDateString(detailsAd["midsem_start_date"]);

			 // Check if endsem_start_date is available in the detailsAd map and update the dateEndsem accordingly
			 if (detailsAd["endsem_start_date"].length())
				 dateEndsem->Value = ParseDateString(detailsAd["endsem_start_date"]);

			 // Check if is_grade_submission is "True" in the detailsAd map and update the appropriate RadioButton
			 if (detailsAd["is_grade_submission"] == "True") {
				 YesGradeCollection->Checked = true;
			 }
			 else {
				 NoGradeCollection->Checked = true;
			 }

			 // Check if view_grades is "True" in the detailsAd map and update the appropriate RadioButton
			 if (detailsAd["view_grades"] == "True") {
				 YesViewGrades->Checked = true;
			 }
			 else {
				 NoViewGrades->Checked = true;
			 }

			 // Check if is_course_registration is "True" in the detailsAd map and update the appropriate RadioButton
			 if (detailsAd["is_course_registration"] == "True") {
				 YesCourseEnr->Checked = true;
			 }
			 else {
				 NoCourseEnr->Checked = true;
			 }

			 // Check if start_fee_payment is "True" in the detailsAd map and update the appropriate RadioButton
			 if (detailsAd["start_fee_payment"] == "True") {
				 YesFeePayment->Checked = true;
			 }
			 else {
				 NoFeePayment->Checked = true;
			 }
}
	// Exam room allocation generation
	private: System::Void buttonExamTT_Click(System::Object^  sender, System::EventArgs^  e) {
		try 
		{
			// Usual connection setup/management process.
			String^ connString = Constants::getdbConnString();
			SqlConnection con(connString);
			con.Open();
					 
			// Loading the Available Room information with the respective capacities.
			String^ query = "SELECT room_ID,capacity FROM [Room] ORDER BY capacity;";

			// Executing the query and filling up the local Data Table
			SqlCommand cmd(query, %con);
			DataTable^ roomIDCapacityTable = gcnew DataTable();
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(%cmd);
			adapter->Fill(roomIDCapacityTable);

			// Now we assume that no more than 4 rooms will ever be required for exam 
			// (derived from the assumptions we have made till now)
			// and no more than 2 courses are in the same slot. (By observing the data)

			// A course can (will) have multiple rooms alloted to it for exam as students need to be distributed.
			// The distribution also has to take care of the physical capacities of the room.
			// Since we have two courses, we are taking half of any room to be empty. (In Actual Exams we have much empty spaces...)
			// In the rest half space, since max to max only 2 courses per slot are there, It has been divided into two (so, quarter of total)
			// and then start allocating from first student to first room onwards. If a student is not fitted into current room,
			// with the current constraint, switch to next room.

			// Course to Room ID with alloted capacities mapping.
			map<string, vector<pair<int, int>>> courseToAvailRoomCapMap;

			// Filling up a local map from the DB Table. 
			// Contains the room ID - capacity info.
			vector<pair<int, int>> roomIDCapacityMap;
			for (int i = 0; i < roomIDCapacityTable->Rows->Count; ++i)
			{
				DataRow^ row = roomIDCapacityTable->Rows[i];
				int resRoomID = Convert::ToInt32(row->ItemArray->GetValue(0));
				int resCapacity = Convert::ToInt32(row->ItemArray->GetValue(1));
				roomIDCapacityMap.push_back(make_pair( resRoomID, resCapacity / 4 ));
			}

			// Table of students with their respective courses.
			// Allot directly to a student instead of a course the room where they will give exam.
			// Usual filling up of tables.
			String^ query2 = "SELECT * FROM [Courses Taken];";
			SqlCommand cmd2(query2, %con);
			DataTable^ coursesTakenTable = gcnew DataTable();
			SqlDataAdapter^ adapter2 = gcnew SqlDataAdapter(%cmd2);
			adapter2->Fill(coursesTakenTable);

			// Allocation process
			for (int i = 0; i < coursesTakenTable->Rows->Count; ++i)
			{
				DataRow^ row = coursesTakenTable->Rows[i];
				String^ courseIDstr = safe_cast<String^>(row->ItemArray->GetValue(1));
				string courseIDcppstr;
				MarshalString(courseIDstr, courseIDcppstr);

				// If the course was not seen till now, it means there were no allotments to it untill this point,
				// So for this course we will have fresh allotments starting, with all capacities for this course full.
				if (courseToAvailRoomCapMap.find(courseIDcppstr) == courseToAvailRoomCapMap.end()) 
				{
					courseToAvailRoomCapMap[courseIDcppstr] = roomIDCapacityMap;
				}
				int roomIDAlloc = 0;

				// For this particular student, find the first available room where their exam can be scheduled.
				for (auto& pair : courseToAvailRoomCapMap[courseIDcppstr])
				{
					if (pair.second > 0) 
					{
						roomIDAlloc = pair.first;
						pair.second--;
						break;
					}
				}

				// The current allocation policy fails, when even after giving quarter capacity of all available rooms, 
				// not all students were allocated a room.
				if (roomIDAlloc == 0) 
				{
					MessageBox::Show("Exam room allocation can not be done under current constraints of maximum of room capacity / 4 people in one room for one course.");
				}
				else
				{
					// Else just set the venue to this room. (i.e. scheduled)
					row["examination_venue"] = roomIDAlloc;
				}
			}

			// Updating the database after allocations.
			SqlCommandBuilder^ builder = gcnew SqlCommandBuilder(adapter2);
			try 
			{
				adapter2->Update(coursesTakenTable);
				MessageBox::Show("Exam Schedule Generated");
			}
			catch (SqlException^ e) 
			{
			MessageBox::Show("Update failed: {0}", e->Message);
			}
		
			// Usual connection closing/management process.
			con.Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
};
}
