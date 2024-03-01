#pragma once
#include "Constants.h"
#include <map>
#include<set>
#include <vector>
namespace AcadSecManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace std;

	/// <summary>
	/// Summary for FourthYearCourseReg
	/// </summary>
	public ref class FourthYearCourseReg : public System::Windows::Forms::Form
	{
	public:
		Dictionary<String^, bool>^ chosenElectiveSlots = gcnew Dictionary<String^, bool>();
		int RollNo = 200101001;

	public:
		String^ Sem = "8";
		FourthYearCourseReg(int RollNumber)
		{
			InitializeComponent();
			RollNo = RollNumber;
			//
			//TODO: Add the constructor code here
			//
		}
		FourthYearCourseReg(void)
		{
			InitializeComponent();
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FourthYearCourseReg()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:




	internal: System::Windows::Forms::Label^  Label1;

	internal:







	internal:












	private: System::Windows::Forms::Panel^  fourthyearpanel;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::ComboBox^  comboBox4;

	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::ComboBox^  comboBox3;


	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::ComboBox^  comboBox2;


	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::ComboBox^  comboBox1;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;




	internal:












	internal:






	internal:






	internal:





	private:



	internal:




	internal:




	internal:




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FourthYearCourseReg::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->Label1 = (gcnew System::Windows::Forms::Label());
			this->fourthyearpanel = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->fourthyearpanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(255, 217);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 38);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Add";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FourthYearCourseReg::CommonButtonClickHandler);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Navy;
			this->label10->Location = System::Drawing::Point(91, 166);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(246, 24);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Departmental Elective - III";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Navy;
			this->label11->Location = System::Drawing::Point(91, 26);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(236, 24);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Departmental Elective - I";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(255, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 38);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FourthYearCourseReg::CommonButtonClickHandler);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(30, 87);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(206, 31);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &FourthYearCourseReg::comboBox1_SelectedIndexChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(26, 26);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(64, 24);
			this->label12->TabIndex = 13;
			this->label12->Text = L"DE-1 :";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::Navy;
			this->label16->Location = System::Drawing::Point(581, 168);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(248, 24);
			this->label16->TabIndex = 23;
			this->label16->Text = L"Departmental Elective - IV";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Navy;
			this->label9->Location = System::Drawing::Point(581, 29);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(241, 24);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Departmental Elective - II";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(96, 55);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 21);
			this->label21->TabIndex = 25;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(93, 194);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(0, 21);
			this->label22->TabIndex = 26;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(584, 57);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(0, 21);
			this->label23->TabIndex = 27;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(584, 196);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(0, 21);
			this->label24->TabIndex = 28;
			// 
			// Label1
			// 
			this->Label1->AutoSize = true;
			this->Label1->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label1->ForeColor = System::Drawing::Color::DarkCyan;
			this->Label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Label1.Image")));
			this->Label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Label1->Location = System::Drawing::Point(310, 22);
			this->Label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label1->Name = L"Label1";
			this->Label1->Padding = System::Windows::Forms::Padding(0, 0, 0, 6);
			this->Label1->Size = System::Drawing::Size(391, 42);
			this->Label1->TabIndex = 4;
			this->Label1->Text = L"     Course registration";
			this->Label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// fourthyearpanel
			// 
			this->fourthyearpanel->BackColor = System::Drawing::Color::Azure;
			this->fourthyearpanel->Controls->Add(this->label9);
			this->fourthyearpanel->Controls->Add(this->label15);
			this->fourthyearpanel->Controls->Add(this->label24);
			this->fourthyearpanel->Controls->Add(this->comboBox2);
			this->fourthyearpanel->Controls->Add(this->label23);
			this->fourthyearpanel->Controls->Add(this->label16);
			this->fourthyearpanel->Controls->Add(this->button2);
			this->fourthyearpanel->Controls->Add(this->label22);
			this->fourthyearpanel->Controls->Add(this->button4);
			this->fourthyearpanel->Controls->Add(this->label21);
			this->fourthyearpanel->Controls->Add(this->label13);
			this->fourthyearpanel->Controls->Add(this->label11);
			this->fourthyearpanel->Controls->Add(this->comboBox4);
			this->fourthyearpanel->Controls->Add(this->button1);
			this->fourthyearpanel->Controls->Add(this->comboBox3);
			this->fourthyearpanel->Controls->Add(this->label10);
			this->fourthyearpanel->Controls->Add(this->label17);
			this->fourthyearpanel->Controls->Add(this->comboBox1);
			this->fourthyearpanel->Controls->Add(this->label12);
			this->fourthyearpanel->Controls->Add(this->button3);
			this->fourthyearpanel->Location = System::Drawing::Point(41, 141);
			this->fourthyearpanel->Name = L"fourthyearpanel";
			this->fourthyearpanel->Size = System::Drawing::Size(950, 303);
			this->fourthyearpanel->TabIndex = 20;
			this->fourthyearpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FourthYearCourseReg::fourthyearpanel_Paint);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(516, 30);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(64, 24);
			this->label15->TabIndex = 4;
			this->label15->Text = L"DE-2 :";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(520, 87);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(206, 31);
			this->comboBox2->TabIndex = 5;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &FourthYearCourseReg::comboBox2_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(745, 82);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 39);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FourthYearCourseReg::CommonButtonClickHandler);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(745, 219);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 39);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Add";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FourthYearCourseReg::CommonButtonClickHandler);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(26, 166);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(64, 24);
			this->label13->TabIndex = 10;
			this->label13->Text = L"DE-3 :";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(520, 224);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(206, 31);
			this->comboBox4->TabIndex = 21;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &FourthYearCourseReg::comboBox4_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(30, 222);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(206, 31);
			this->comboBox3->TabIndex = 11;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &FourthYearCourseReg::comboBox3_SelectedIndexChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(516, 168);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(64, 24);
			this->label17->TabIndex = 20;
			this->label17->Text = L"DE-4 :";
			// 
			// FourthYearCourseReg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1016, 557);
			this->Controls->Add(this->fourthyearpanel);
			this->Controls->Add(this->Label1);
			this->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FourthYearCourseReg";
			this->Text = L"FourthYearCourseReg";
			this->Load += gcnew System::EventHandler(this, &FourthYearCourseReg::FourthYearCourseReg_Load);
			this->fourthyearpanel->ResumeLayout(false);
			this->fourthyearpanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void ClearDB(int RollNo)
	{
				 String^ connString = Constants::getdbConnString();
				 SqlConnection^ con = gcnew SqlConnection(connString);
				 String^ query = "DELETE FROM [Courses Taken] WHERE roll_no = @RollNo";

				 try {
					 con->Open();

					 SqlCommand^ command = gcnew SqlCommand(query, con);
					 command->Parameters->AddWithValue("@RollNo", RollNo);

					 command->ExecuteNonQuery();

				 }
				 catch (Exception^ ex) {
					 MessageBox::Show(ex->Message);
				 }
				 finally
				 {
					 con->Close();
				 }

	}

	private: bool doesRecordExist(int roll_number, String ^ course_code)
	{
				 String^ query = "SELECT COUNT(*) FROM [Courses Taken] WHERE roll_no = @RollNumber AND course_ID = @CourseID";
				 String^ connString = Constants::getdbConnString();
				 SqlConnection^ con = gcnew SqlConnection(connString);
				 try
				 {
					 con->Open();
					 SqlCommand^ command = gcnew SqlCommand(query, con);
					 command->Parameters->AddWithValue("@RollNumber", roll_number);
					 command->Parameters->AddWithValue("@CourseID", course_code);
					 bool val = safe_cast<bool>(command->ExecuteScalar());
					 return bool(val);
				 }
				 catch (Exception ^ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				 finally
				 {
					 con->Close();
				 }
				 return false;
	}

	private: bool checkCompatibility(String ^ course, String ^ Slot)
	{
				 // Define the Conflicts for Labs - the courses we can't take if a lab of this kind is chosen or vice versa
				 map<string, vector<string>>LabConflicts;
				 LabConflicts["AL1"] = { "B1", "C1", "D1" };
				 LabConflicts["AL2"] = { "C1", "B1", "A1" };
				 LabConflicts["AL3"] = { "E1", "B1", "A1" };
				 LabConflicts["AL4"] = { "A1", "E1", "D1" };
				 LabConflicts["AL5"] = { "F1", "C1", "D1" };
				 LabConflicts["ML1"] = { "B", "C", "D" };
				 LabConflicts["ML2"] = { "C", "B", "A" };
				 LabConflicts["ML3"] = { "E", "B", "A" };
				 LabConflicts["ML4"] = { "A", "E", "D" };
				 LabConflicts["ML5"] = { "F", "C", "D" };
				 LabConflicts["A1"] = { "AL2", "AL3", "AL4" };
				 LabConflicts["B1"] = { "AL1", "AL2", "AL3" };
				 LabConflicts["C1"] = { "AL1", "AL2", "AL5" };
				 LabConflicts["D1"] = { "AL1", "AL4", "AL5" };
				 LabConflicts["E1"] = { "AL3", "AL4" };
				 LabConflicts["F1"] = { "AL5" };
				 LabConflicts["A"] = { "ML2", "ML3", "ML4" };
				 LabConflicts["B"] = { "ML2", "ML3", "ML1" };
				 LabConflicts["C"] = { "ML2", "ML1", "ML5" };
				 LabConflicts["D"] = { "ML1", "ML5", "ML4" };
				 LabConflicts["E"] = { "ML3", "ML4" };
				 LabConflicts["F"] = { "ML5" };

				 string cid = Constants::StrCnvstr(course);
				 string slot = Constants::StrCnvstr(Slot);
				 bool is_ok = true;

				 for (const string x : LabConflicts[slot])
				 {
					 // Conflicting slot is chosen - dont choose that slot
					 if (chosenElectiveSlots->ContainsKey(Constants::strCnvStr(x)))
					 {
						 MessageBox::Show("Slot " + Constants::strCnvStr(slot) + " conflicts with already chosen/compulsory course");
						 is_ok = false;
						 return is_ok;
					 }
				 }

				 // Check if same slot is present somewhere in ChosenElectiveSlot

				 if (chosenElectiveSlots->ContainsKey(Constants::strCnvStr(slot)))
				 {
					 MessageBox::Show("Slot " + Constants::strCnvStr(slot) + " conflicts with already chosen/compulsory course");
					 is_ok = false;
					 return is_ok;
				 }

				 // Add to chosenElectiveslot
				 chosenElectiveSlots->Add(Constants::strCnvStr(slot), true);
				 return is_ok;
	}

	private: void InsertIntoDB(int RollNo, String ^ cid)
	{
				 String^ query = "INSERT INTO [Courses Taken] (roll_no, Course_ID, grades) VALUES (@RollNo, @CID, '--')";
				 String^ connString = Constants::getdbConnString();
				 SqlConnection^ con = gcnew SqlConnection(connString);

				 try
				 {
					 con->Open();
					 SqlCommand^ command = gcnew SqlCommand(query, con);
					 command->Parameters->AddWithValue("@RollNo", RollNo);
					 command->Parameters->AddWithValue("@CID", cid);
					 command->ExecuteNonQuery();
					 MessageBox::Show("Registerd for Course " + cid);
				 }
				 catch (Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				 finally
				 {
					 con->Close();
				 }

	}

	private: void DeleteFromDB(int RollNo, String^ cid)
	{
				 String^ connString = Constants::getdbConnString();
				 SqlConnection^ con = gcnew SqlConnection(connString);
				 String^ query = "DELETE FROM [Courses Taken] WHERE roll_no = @RollNo AND Course_ID = @CID";

				 try {
					 con->Open();

					 SqlCommand^ command = gcnew SqlCommand(query, con);
					 command->Parameters->AddWithValue("@RollNo", RollNo);
					 command->Parameters->AddWithValue("@CID", cid);

					 command->ExecuteNonQuery();
					 MessageBox::Show("De-registered from " + cid);
				 }
				 catch (Exception^ ex) {
					 MessageBox::Show(ex->Message);
				 }
				 finally
				 {
					 con->Close();
				 }
	}
	private: System::Void FourthYearCourseReg_Load(System::Object^  sender, System::EventArgs^  e)
	{
				 // Start Afresh whenever page loads
				 ClearDB(RollNo);
				 handleElectives();
	}

	private: void handleElectives()
	{
				 // To store theory electives - only theory electives for 4th year
				 List<String^>^ TheoryElectives = gcnew List<String^>();

				 // Get the elective lab courses offered for that sem
				 String^ query = "SELECT Courses.[course_ID], Courses.[course_name], Faculty.[name] as prof_name, Courses.[LTPC], Courses.slot FROM Courses " +
					 "INNER JOIN Faculty ON Faculty.faculty_ID = Courses.[prof_ID] " +
					 "WHERE Courses.[sem_offered] LIKE '%" + "8" + "%' AND Courses.[is_compulsory] = 0";
				 String^ connString = Constants::getdbConnString();
				 SqlConnection^ con = gcnew SqlConnection(connString);

				 try
				 {
					 con->Open();
					 SqlCommand^ command = gcnew SqlCommand(query, con);

					 // Execute the query using SqlDataReader
					 SqlDataReader^ reader = command->ExecuteReader();

					 while (reader->Read())
					 {

						 // Get all the required columns from the table and set the datagrid view
						 //MessageBox::Show(reader["Course Name"]->ToString());
						 String ^ CourseName = reader["course_name"]->ToString();
						 String ^ Instructor = reader["prof_name"]->ToString();
						 String^ CourseCode = reader["course_ID"]->ToString();
						 String^ Credits = reader["LTPC"]->ToString();
						 String^ Slot = reader["slot"]->ToString();
						 if (Slot->Length == 0) Slot == "--";

						 // Insert into appropriate list for future reference
						 TheoryElectives->Add(CourseCode);
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
				 this->comboBox2->Items->AddRange(TheoryElectives->ToArray());
				 this->comboBox2->SelectedIndex = -1;

				 this->comboBox1->Items->AddRange(TheoryElectives->ToArray());
				 this->comboBox1->SelectedIndex = -1;

				 this->comboBox3->Items->AddRange(TheoryElectives->ToArray());
				 this->comboBox3->SelectedIndex = -1;

				 this->comboBox4->Items->AddRange(TheoryElectives->ToArray());
				 this->comboBox4->SelectedIndex = -1;
	}
	private: String^ getColValue(String^ colReqd, String^ colOrig, String^ colVal){
				 String^ query = "SELECT Courses.[" + colReqd + "] FROM Courses WHERE Courses.[" + colOrig + "] = '" + colVal + "'";
				 String^ connString = Constants::getdbConnString();
				 SqlConnection^ con = gcnew SqlConnection(connString);

				 try
				 {
					 con->Open();
					 SqlCommand^ command = gcnew SqlCommand(query, con);

					 // Execute the query using SqlDataReader
					 SqlDataReader^ reader = command->ExecuteReader();

					 if (reader->Read()) {
						 String^ result = reader->GetString(0);
						 return result;
					 }
					 else {
						 return " "; // When no data is found
					 }

				 }
				 catch (Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				 finally
				 {
					 con->Close();
				 }
				 return "";
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 // To handle the changes
				 if (comboBox1->SelectedItem != nullptr) {
					 String^ selectedItem = comboBox1->SelectedItem->ToString();
					 string Item = Constants::StrCnvstr(selectedItem);
					 this->label11->Text = getColValue("course_name", "course_ID", selectedItem);
					 this->label21->Text = "Prof_id: " + getColValue("prof_ID", "course_ID", selectedItem) + " Slot: " + getColValue("slot", "course_ID", selectedItem);
				 }
	}

	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 // To handle the changes
				 if (comboBox2->SelectedItem != nullptr) {
					 String^ selectedItem = comboBox2->SelectedItem->ToString();
					 string Item = Constants::StrCnvstr(selectedItem);
					 this->label9->Text = getColValue("course_name", "course_ID", selectedItem);
					 this->label23->Text = "Prof_id: " + getColValue("prof_ID", "course_ID", selectedItem) + " Slot: " + getColValue("slot", "course_ID", selectedItem);
				 }
	}
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 // To handle the changes
				 if (comboBox3->SelectedItem != nullptr) {
					 String^ selectedItem = comboBox3->SelectedItem->ToString();
					 string Item = Constants::StrCnvstr(selectedItem);
					 this->label10->Text = getColValue("course_name", "course_ID", selectedItem);
					 this->label22->Text = "Prof_id: " + getColValue("prof_ID", "course_ID", selectedItem) + " Slot: " + getColValue("slot", "course_ID", selectedItem);
				 }
	}
	private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 // To handle the changes
				 if (comboBox4->SelectedItem != nullptr) {
					 String^ selectedItem = comboBox4->SelectedItem->ToString();
					 string Item = Constants::StrCnvstr(selectedItem);
					 this->label16->Text = getColValue("course_name", "course_ID", selectedItem);
					 this->label24->Text = "Prof_id: " + getColValue("prof_ID", "course_ID", selectedItem) + " Slot: " + getColValue("slot", "course_ID", selectedItem);
				 }
	}

	private: System::Void CommonButtonClickHandler(System::Object^ sender, System::EventArgs^ e)
	{
				 Button^ clickedButton = dynamic_cast<Button^>(sender);
				 String ^ name = clickedButton->Name;
				 String^ text = clickedButton->Text;
				 if (name == "button1")
				 {
					 if (comboBox1->SelectedItem != nullptr)
					 {
						 String^ slot = getColValue("slot", "course_ID", comboBox1->SelectedItem->ToString());
						 if (text == "Add")
						 {
							 if (checkCompatibility(comboBox1->SelectedItem->ToString(), slot))
							 {
								 // Add to Database
								 InsertIntoDB(RollNo, comboBox1->SelectedItem->ToString());
							 }
							 else
							 {
								 comboBox1->SelectedIndex = -1;
								 if (chosenElectiveSlots->ContainsKey(slot))
								 {
									 chosenElectiveSlots->Remove(slot);
								 }
								 this->label11->Text = "Departmental Elective - I";
								 this->label21->Text = "";
								 clickedButton->Text = "Drop";
							 }
						 }
						 else
						 {
							 //Check if the record to be dropped exists
							 if (doesRecordExist(RollNo, comboBox1->SelectedItem->ToString()))
							 {
								 // Drop from the database
								 DeleteFromDB(RollNo, comboBox1->SelectedItem->ToString());
								 comboBox1->SelectedIndex = -1;
								 if (chosenElectiveSlots->ContainsKey(slot))
								 {
									 chosenElectiveSlots->Remove(slot);
								 }
								 this->label11->Text = "Departmental Elective - I";
								 this->label21->Text = "";
								 clickedButton->Text = "Drop";
							 }
							 else
							 {
								 // Show error
								 MessageBox::Show("You haven't registered for " + comboBox1->SelectedItem->ToString() + " to drop!");
								 comboBox1->SelectedIndex = -1;
								 if (chosenElectiveSlots->ContainsKey(slot))
								 {
									 chosenElectiveSlots->Remove(slot);
								 }
								 this->label11->Text = "Departmental Elective - I";
								 this->label21->Text = "";
								 clickedButton->Text = "Drop";

							 }
						 }
					 }

				 }
				 else if (name == "button2")
				 {
					 if (comboBox2->SelectedItem != nullptr)
					 {
						 String^ slot = getColValue("slot", "course_ID", comboBox2->SelectedItem->ToString());
						 if (text == "Add")
						 {
							 if (checkCompatibility(comboBox2->SelectedItem->ToString(), slot))
							 {
								 // Add to Database
								 InsertIntoDB(RollNo, comboBox2->SelectedItem->ToString());
							 }
							 else
							 {
								 comboBox2->SelectedIndex = -1;
								 if (chosenElectiveSlots->ContainsKey(slot))
								 {
									 chosenElectiveSlots->Remove(slot);
								 }
								 this->label9->Text = "Departmental Elective - II";
								 this->label23->Text = "";
								 clickedButton->Text = "Drop";
							 }
						 }
						 else
						 {
							 //Check if the record to be dropped exists
							 if (doesRecordExist(RollNo, comboBox2->SelectedItem->ToString()))
							 {
								 // Drop from the database
								 DeleteFromDB(RollNo, comboBox2->SelectedItem->ToString());
								 comboBox2->SelectedIndex = -1;
								 if (chosenElectiveSlots->ContainsKey(slot))
								 {
									 chosenElectiveSlots->Remove(slot);
								 }
								 this->label9->Text = "Departmental Elective - II";
								 this->label23->Text = "";
								 clickedButton->Text = "Drop";
							 }
							 else
							 {
								 // Show error
								 MessageBox::Show("You haven't registered for " + comboBox2->SelectedItem->ToString() + " to drop!");
								 comboBox2->SelectedIndex = -1;
								 if (chosenElectiveSlots->ContainsKey(slot))
								 {
									 chosenElectiveSlots->Remove(slot);
								 }
								 this->label9->Text = "Departmental Elective - II";
								 this->label23->Text = "";
								 clickedButton->Text = "Drop";

							 }
						 }
					 }
				 }
				 else if (name == "button3")
				 {
					 if (comboBox3->SelectedItem != nullptr)
					 {
						 String^ slot = getColValue("slot", "course_ID", comboBox3->SelectedItem->ToString());
						 if (text == "Add")
						 {
							 if (checkCompatibility(comboBox3->SelectedItem->ToString(), slot))
							 {
								 // Add to Database
								 InsertIntoDB(RollNo, comboBox3->SelectedItem->ToString());
							 }
							 else{
								 comboBox3->SelectedIndex = -1;
								 if (chosenElectiveSlots->ContainsKey(slot))
								 {
									 chosenElectiveSlots->Remove(slot);
								 }
								 this->label10->Text = "Departmental Elective - III";
								 this->label22->Text = "";
								 clickedButton->Text = "Drop";
							 }
						 }
						 else
						 {
							 //Check if the record to be dropped exists
							 if (doesRecordExist(RollNo, comboBox3->SelectedItem->ToString()))
							 {
								 // Drop from the database
								 DeleteFromDB(RollNo, comboBox3->SelectedItem->ToString());
								 comboBox3->SelectedIndex = -1;
								 if (chosenElectiveSlots->ContainsKey(slot))
								 {
									 chosenElectiveSlots->Remove(slot);
								 }
								 this->label10->Text = "Departmental Elective - III";
								 this->label22->Text = "";
								 clickedButton->Text = "Drop";
							 }
							 else
							 {
								 // Show error
								 MessageBox::Show("You haven't registered for " + comboBox3->SelectedItem->ToString() + " to drop!");
								 comboBox3->SelectedIndex = -1;
								 if (chosenElectiveSlots->ContainsKey(slot))
								 {
									 chosenElectiveSlots->Remove(slot);
								 }
								 this->label10->Text = "Departmental Elective - III";
								 this->label22->Text = "";
								 clickedButton->Text = "Drop";

							 }
						 }
					 }
				 }
				 else
				 {
					 if (comboBox4->SelectedItem != nullptr)
					 {
						 String^ slot = getColValue("slot", "course_ID", comboBox4->SelectedItem->ToString());
						 if (text == "Add")
						 {
							 if (checkCompatibility(comboBox4->SelectedItem->ToString(), slot))
							 {
								 // Add to Database
								 InsertIntoDB(RollNo, comboBox4->SelectedItem->ToString());
							 }
							 else
							 {
								 comboBox3->SelectedIndex = -1;
								 if (chosenElectiveSlots->ContainsKey(slot))
								 {
									 chosenElectiveSlots->Remove(slot);
								 }
								 this->label16->Text = "Departmental Elective - IV";
								 this->label24->Text = "";
								 clickedButton->Text = "Drop";
							 }
						 }
						 else
						 {
							 //Check if the record to be dropped exists
							 if (doesRecordExist(RollNo, comboBox4->SelectedItem->ToString()))
							 {
								 // Drop from the database
								 DeleteFromDB(RollNo, comboBox4->SelectedItem->ToString());
								 comboBox3->SelectedIndex = -1;
								 if (chosenElectiveSlots->ContainsKey(slot))
								 {
									 chosenElectiveSlots->Remove(slot);
								 }
								 this->label16->Text = "Departmental Elective - IV";
								 this->label24->Text = "";
								 clickedButton->Text = "Drop";
							 }
							 else
							 {
								 // Show error
								 MessageBox::Show("You haven't registered for " + comboBox3->SelectedItem->ToString() + " to drop!");
								 comboBox4->SelectedIndex = -1;
								 if (chosenElectiveSlots->ContainsKey(slot))
								 {
									 chosenElectiveSlots->Remove(slot);
								 }
								 this->label16->Text = "Departmental Elective - IV";
								 this->label24->Text = "";
								 clickedButton->Text = "Drop";

							 }
						 }
					 }

				 }
				 // Changing the button text
				 if (clickedButton->Text == "Add") clickedButton->Text = "Drop";
				 else if (clickedButton->Text == "Drop") clickedButton->Text = "Add";
	}


private: System::Void fourthyearpanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}

};
}
