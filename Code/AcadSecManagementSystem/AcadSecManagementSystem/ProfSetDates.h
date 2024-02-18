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
using namespace std;


namespace AcadSecManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ProfSetDates
	/// </summary>
	public ref class ProfSetDates : public System::Windows::Forms::Form
	{
	public:
		ProfSetDates(void)
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
		~ProfSetDates()
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ProfSetDates::typeid));
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
			this->YesGradeCollection->Location = System::Drawing::Point(509, 103);
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
			this->NoGradeCollection->Location = System::Drawing::Point(674, 103);
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
			this->NoViewGrades->Location = System::Drawing::Point(674, 146);
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
			this->YesViewGrades->Location = System::Drawing::Point(509, 146);
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
			this->NoCourseEnr->Location = System::Drawing::Point(674, 190);
			this->NoCourseEnr->Name = L"NoCourseEnr";
			this->NoCourseEnr->Size = System::Drawing::Size(55, 28);
			this->NoCourseEnr->TabIndex = 13;
			this->NoCourseEnr->TabStop = true;
			this->NoCourseEnr->Text = L"No";
			this->NoCourseEnr->UseVisualStyleBackColor = true;
			// 
			// YesCourseEnr
			// 
			this->YesCourseEnr->AutoSize = true;
			this->YesCourseEnr->Location = System::Drawing::Point(509, 190);
			this->YesCourseEnr->Name = L"YesCourseEnr";
			this->YesCourseEnr->Size = System::Drawing::Size(61, 28);
			this->YesCourseEnr->TabIndex = 12;
			this->YesCourseEnr->TabStop = true;
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
			this->buttonTT->Click += gcnew System::EventHandler(this, &ProfSetDates::buttonTT_Click);
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
			// 
			// NoFeePayment
			// 
			this->NoFeePayment->AutoSize = true;
			this->NoFeePayment->Location = System::Drawing::Point(674, 231);
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
			this->YesFeePayment->Location = System::Drawing::Point(509, 231);
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
			this->label9->Click += gcnew System::EventHandler(this, &ProfSetDates::label9_Click);
			// 
			// buttonSave
			// 
			this->buttonSave->BackColor = System::Drawing::Color::GreenYellow;
			this->buttonSave->Location = System::Drawing::Point(344, 480);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(138, 47);
			this->buttonSave->TabIndex = 23;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = false;
			// 
			// buttonReset
			// 
			this->buttonReset->BackColor = System::Drawing::Color::Tomato;
			this->buttonReset->Location = System::Drawing::Point(509, 480);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(138, 47);
			this->buttonReset->TabIndex = 24;
			this->buttonReset->Text = L"Reset";
			this->buttonReset->UseVisualStyleBackColor = false;
			// 
			// ProfSetDates
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1016, 557);
			this->Controls->Add(this->buttonReset);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->NoFeePayment);
			this->Controls->Add(this->YesFeePayment);
			this->Controls->Add(this->buttonExamTT);
			this->Controls->Add(this->buttonTT);
			this->Controls->Add(this->dateEndsem);
			this->Controls->Add(this->dateMidsem);
			this->Controls->Add(this->NoCourseEnr);
			this->Controls->Add(this->YesCourseEnr);
			this->Controls->Add(this->NoViewGrades);
			this->Controls->Add(this->YesViewGrades);
			this->Controls->Add(this->NoGradeCollection);
			this->Controls->Add(this->YesGradeCollection);
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
			this->Name = L"ProfSetDates";
			this->Text = L"ProfSetDates";
			this->Load += gcnew System::EventHandler(this, &ProfSetDates::ProfSetDates_Load);
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
private: System::Void buttonTT_Click(System::Object^  sender, System::EventArgs^  e) 
{
				 
				 try
				 {
					 String^ connString = Constants::getdbConnString();
					//  SqlConnection con(connString);
					//  con.Open();
					 String^ query = "SELECT * FROM Courses";

					 SqlConnection^ cn = gcnew SqlConnection();
					//  DataSet *CustomersDataSet = new DataSet();
					 SqlDataAdapter^ da;
					 SqlCommand^ DAUpdateCmd;

					 cn->ConnectionString = connString;
					 cn->Open();

					 da = gcnew SqlDataAdapter(query, cn);

					 // Create a SqlCommand
					//  SqlCommand cmd(query, %con);

					//  cmdBuilder = gcnew SqlCommandBuilder(da);

					 // Create a DataTable
					 DataTable^ dataTable = gcnew DataTable();

					 // Create a SqlDataAdapter and fill the DataTable
					//  SqlDataAdapter^ adapter = gcnew SqlDataAdapter(%cmd);
					//  adapter->Fill(dataTable);

					 String^ updatequery = "UPDATE Courses SET slot = @slot WHERE course_ID = @CourseCode";
					 DAUpdateCmd = gcnew SqlCommand(updatequery, da->SelectCommand->Connection);
					 DAUpdateCmd->Parameters->Add("@slot", SqlDbType::VarChar, 50, "slot");
					 DAUpdateCmd->Parameters->Add("@CourseCode", SqlDbType::VarChar, 50, "course_ID");
					 

					 da->UpdateCommand = DAUpdateCmd;

					 da->Fill(dataTable);

					 int n = dataTable->Rows->Count;
					 
					 DataRow^ row = dataTable->Rows[n-1];
					 map<string,set<string>> courseAllotmentLeft;
					 map<string, set<string>> labAllotmentLeft;
					 map<string, set<string>> proffessorsAlloted;
					 set<string> morning;
					 set<string> evening;
					 set<string> morninglab;
					 set<string> eveninglab;
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
					 
					 courseAllotmentLeft.insert({ "2", morning });
					 courseAllotmentLeft.insert({ "4", evening });
					 courseAllotmentLeft.insert({ "6", morning });
					 courseAllotmentLeft.insert({ "8", evening });

					 labAllotmentLeft.insert({ "2", eveninglab });
					 labAllotmentLeft.insert({ "4", morninglab });
					 labAllotmentLeft.insert({ "6", eveninglab });
					 labAllotmentLeft.insert({ "8", morninglab });

					//  For compulsoory courses

					 for (int i = 0; i < n; i++)
					 {
						 DataRow^ row = dataTable->Rows[i];
						//  MessageBox::Show("Course: " + row["course_ID"]->ToString() + " : " + row["is_compulsory"]->ToString() + " : " + row["is_lab"]->ToString());
						 if (row["is_compulsory"]->ToString() == "True" && row["is_lab"]->ToString() == "False")
						 {
							//  MessageBox::Show("Course: " + row["course_ID"]->ToString());
							 string semOffered;
							 string ProfId;
							 MarshalString(row["sem_offered"]->ToString(), semOffered);
							 MarshalString(row["prof_ID"]->ToString(), ProfId);
							 if (proffessorsAlloted.find(ProfId) == proffessorsAlloted.end())
							 {
								//  MessageBox::Show("Inserting For Prof");
								 set<string> st;
								 proffessorsAlloted.insert({ ProfId, st });
							 }
							 if (courseAllotmentLeft.find(semOffered) == courseAllotmentLeft.end())
							 {
								 MessageBox::Show("No allotment Found");
								 String^ str2 = gcnew String(semOffered.c_str());
								 MessageBox::Show(str2);
							 }
							 auto slot = (*courseAllotmentLeft.find(semOffered)).second.begin();
							 while (slot != (*courseAllotmentLeft.find(semOffered)).second.end())
							 {
								 if (proffessorsAlloted.find(ProfId) == proffessorsAlloted.end())
								 {
									 MessageBox::Show("prof_ID Not Found");
								 }
								 if ((*proffessorsAlloted.find(ProfId)).second.find(*slot) == (*proffessorsAlloted.find(ProfId)).second.end())
								 {
									(*proffessorsAlloted.find(ProfId)).second.insert(*slot);
									//  row->BeginEdit();
									 String^ tempslot = gcnew String((*slot).c_str());
									 row["slot"] = tempslot;
									//  row->EndEdit();
									//  row->AcceptChanges();
									 courseAllotmentLeft.find(semOffered)->second.erase(slot);
									//  MessageBox::Show(row["course_ID"]->ToString() + " : " + row["slot"]->ToString());
									 break;
								 }
								 slot++;
							 }

						 }

						 else if (row["is_compulsory"]->ToString() == "True" && row["is_lab"]->ToString() == "True")
						 {
							//  MessageBox::Show("Lab: "+ row["course_ID"]->ToString());
							 string semOffered;
							 string ProfId;
							 MarshalString(row["sem_offered"]->ToString(), semOffered);
							 MarshalString(row["prof_ID"]->ToString(), ProfId);
							 if (proffessorsAlloted.find(ProfId) == proffessorsAlloted.end())
							 {
								//  MessageBox::Show("Inserting For Prof");
								 set<string> st;
								 proffessorsAlloted.insert({ ProfId, st });
							 }
							 if (labAllotmentLeft.find(semOffered) == labAllotmentLeft.end())
							 {
								 MessageBox::Show("No allotment Found");
								 String^ str2 = gcnew String(semOffered.c_str());
								 MessageBox::Show(str2);
							 }
							//  find the last slot available for the prof
							 auto slot = (*labAllotmentLeft.find(semOffered)).second.begin();
							 while (slot != (*labAllotmentLeft.find(semOffered)).second.end())
							 {
								 if (proffessorsAlloted.find(ProfId) == proffessorsAlloted.end())
								 {
									 MessageBox::Show("prof_ID Not Found");
								 }
								 if ((*proffessorsAlloted.find(ProfId)).second.find(*slot) == (*proffessorsAlloted.find(ProfId)).second.end())
								 {
									 (*proffessorsAlloted.find(ProfId)).second.insert(*slot);
									 //  row->BeginEdit();
									 String^ tempslot = gcnew String((*slot).c_str());
									 row["slot"] = tempslot;
									 //  row->EndEdit();
									 //  row->AcceptChanges();
									 labAllotmentLeft.find(semOffered)->second.erase(slot);
									 //  MessageBox::Show(row["course_ID"]->ToString() + " : " + row["slot"]->ToString());
									 break;
								 }
								 slot++;
							 }
						 }

					 }

					//  For elective courses

					 for (int i = 0; i < n; i++)
					 {
						 DataRow^ row = dataTable->Rows[i];
						//  MessageBox::Show("Course: " + row["course_ID"]->ToString() + " : " + row["is_compulsory"]->ToString() + " : " + row["is_lab"]->ToString());
						 if (row["is_compulsory"]->ToString() == "False" && row["is_lab"]->ToString() == "False") 
						 {
							 //  MessageBox::Show("Course: " + row["course_ID"]->ToString());
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
								// MessageBox::Show("No allotment Found for sem: " + gcnew String(sem.c_str()));
								// MessageBox::Show("Trying for sem: " + gcnew String(semOffered.c_str()));
								sem = semOffered;
								sem = sem.substr(0, 1);
							}
							
							//  MessageBox::Show("Sem: " + gcnew String(sem.c_str()) + " Course: " + row["course_ID"]->ToString());
							if (proffessorsAlloted.find(ProfId) == proffessorsAlloted.end())
							{
								// MessageBox::Show("Inserting For Prof");
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
									//  row->BeginEdit();
									String^ tempslot = gcnew String((*slot).c_str());
									// MessageBox::Show("Inserting Slot " + tempslot + " for " + row["course_ID"]->ToString());
									row["slot"] = tempslot;
									//  row->EndEdit();
									//  row->AcceptChanges();
									courseAllotmentLeft.find(sem)->second.erase(courseAllotmentLeft.find(sem)->second.find(*slot));
									//  MessageBox::Show(row["course_ID"]->ToString() + " : " + row["slot"]->ToString());
									break;
								}
								slot++;
							}
						 }

						 else if (row["is_compulsory"]->ToString() == "False" && row["is_lab"]->ToString() == "True")
						 {
							//   MessageBox::Show("Lab: "+ row["course_ID"]->ToString());
							 string semOffered;
							 string ProfId;
							 MarshalString(row["sem_offered"]->ToString(), semOffered);
							 MarshalString(row["prof_ID"]->ToString(), ProfId);
							 string sem = semOffered;
							 sem = sem.substr(sem.length() - 1, 1);
							 //  check if slot is available for the sem
							 if ((*labAllotmentLeft.find(sem)).second.size() == 0)
							 {
								 sem = semOffered;
								 sem = sem.substr(0, 1);
							 }

							//  MessageBox::Show("Sem: " + gcnew String(sem.c_str()));
							 if (proffessorsAlloted.find(ProfId) == proffessorsAlloted.end())
							 {
								 // MessageBox::Show("Inserting For Prof");
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
							 auto slot = (*labAllotmentLeft.find(sem)).second.rbegin();
							 while (slot != (*labAllotmentLeft.find(sem)).second.rend())
							 {
								 if (proffessorsAlloted.find(ProfId) == proffessorsAlloted.end())
								 {
									 MessageBox::Show("prof_ID Not Found");
								 }
								 if ((*proffessorsAlloted.find(ProfId)).second.find(*slot) == (*proffessorsAlloted.find(ProfId)).second.end())
								 {
									 (*proffessorsAlloted.find(ProfId)).second.insert(*slot);
									 //  row->BeginEdit();
									 String^ tempslot = gcnew String((*slot).c_str());
									//  MessageBox::Show("Inserting Slot " + tempslot + " for " + row["course_ID"]->ToString());
									 row["slot"] = tempslot;
									 //  row->EndEdit();
									 //  row->AcceptChanges();
									 labAllotmentLeft.find(sem)->second.erase(labAllotmentLeft.find(sem)->second.find(*slot));
									//   MessageBox::Show(row["course_ID"]->ToString() + " : " + row["slot"]->ToString());
									 break;
								 }
								 slot++;
							 }
						 } 
					 }
					//  dataTable->AcceptChanges();
					//  print the updated data
					//  for (int i = 0; i < n; i++)
					//  {
					// 	 DataRow^ row = dataTable->Rows[i];
					// 	 MessageBox::Show(row["course_ID"]->ToString() + " : " + row["slot"]->ToString());
					//  }

					// Update the sql database with dataTable
					 da->Update(dataTable);
					 cn->Close();
					 MessageBox::Show("Updating Database Complete");



					 //cout << (row.Item["course_ID"].ToString()) << endl;
					 //cout << row["course_ID"]->ToString() << endl;
					 //printf("%s\n", row["course_ID"]->ToString());
					 //OutputDebugString(L"My output string.");
					 //Console::WriteLine("In console %s\n", row["course_ID"]->ToString());
					 //buttonTT->Text = row["course_ID"]->ToString();

				 }
				 catch (Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
}
private: System::Void ProfSetDates_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
