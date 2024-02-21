#pragma once
#include "Constants.h"
#include "updateform.h"
#include <string>
using namespace std;
static map<string, string> MidSemExamSlotToDay;
static map<string, string> EndSemExamSlotToDay;
static map<string, string> MidSemSlotToTime;
static map<string, string> EndSemSlotToTime;
static map<string, string>courseIDtoSlot;
static string MidSemStartDate = "";
static string EndSemStartDate = "";
namespace AcadSecManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentExamSchedule
	/// </summary>
	public ref class StudentExamSchedule : public System::Windows::Forms::Form
	{
	public:
		property String ^roll_no;
		StudentExamSchedule(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		StudentExamSchedule(String ^rollno)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			roll_no = rollno;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentExamSchedule()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:











	internal: System::Windows::Forms::DataGridView^  DataGridView1;

	internal:













	internal: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	internal:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;

	internal:

	private:

	private:

	internal:











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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentExamSchedule::typeid));
			this->DataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// DataGridView1
			// 
			this->DataGridView1->AllowUserToAddRows = false;
			this->DataGridView1->AllowUserToDeleteRows = false;
			this->DataGridView1->AllowUserToResizeColumns = false;
			this->DataGridView1->AllowUserToResizeRows = false;
			this->DataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->DataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->DataGridView1->BackgroundColor = System::Drawing::Color::AliceBlue;
			this->DataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->DataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::RaisedHorizontal;
			this->DataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::DarkSlateBlue;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::DarkSlateBlue;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->DataGridView1->ColumnHeadersHeight = 55;
			this->DataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Honeydew;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::Honeydew;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->DataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->DataGridView1->GridColor = System::Drawing::Color::DimGray;
			this->DataGridView1->Location = System::Drawing::Point(13, 144);
			this->DataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->DataGridView1->Name = L"DataGridView1";
			this->DataGridView1->ReadOnly = true;
			this->DataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->DataGridView1->RowHeadersVisible = false;
			this->DataGridView1->RowHeadersWidth = 20;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::Honeydew;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::Honeydew;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			this->DataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->DataGridView1->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::Honeydew;
			this->DataGridView1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DataGridView1->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			this->DataGridView1->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::Honeydew;
			this->DataGridView1->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->DataGridView1->RowTemplate->DividerHeight = 1;
			this->DataGridView1->RowTemplate->Height = 30;
			this->DataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DataGridView1->Size = System::Drawing::Size(990, 400);
			this->DataGridView1->TabIndex = 3;
			this->DataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StudentExamSchedule::DataGridView1_CellContentClick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkCyan;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Location = System::Drawing::Point(289, 44);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(0, 0, 0, 6);
			this->label3->Size = System::Drawing::Size(409, 42);
			this->label3->TabIndex = 10;
			this->label3->Text = L"     Your Exam Schedule";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Course ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Course Name";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Venue";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"MidsemDate";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"MidsemTime";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"EndsemDate";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"EndsemTime";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// StudentExamSchedule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1016, 557);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->DataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"StudentExamSchedule";
			this->Text = L"StudentExamSchedule";
			this->Load += gcnew System::EventHandler(this, &StudentExamSchedule::StudentExamSchedule_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StudentExamSchedule_Load(System::Object^  sender, System::EventArgs^  e) {
				 
				 // extract midsem-endsem date
				 try
				 {
					 
					 String^ connString = Constants::getdbConnString();
					 SqlConnection^ con = gcnew SqlConnection(connString);
					 con->Open();
					 String^ query = "SELECT midsem_start_date,endsem_start_date from [Admin]";
					 SqlCommand^ command = gcnew SqlCommand(query, con);
					 SqlDataReader^ reader = command->ExecuteReader();
					 if (reader->Read()) {

						 for (int i = 0; i < reader->FieldCount; ++i) {

								 String^ columnName = reader->GetName(i);
								 int columnIndex = reader->GetOrdinal(columnName);
								 Object^ columnValue = reader->GetSqlValue(columnIndex);
								 String^ columnValueStr = columnValue->ToString();
								 //Convert String^ to String (remove the ^)
								 string columnValueStrNative;
								 MarshalString(columnValueStr, columnValueStrNative);
								 if (columnName == "midsem_start_date")
								 {
									 MidSemStartDate = splitStringAndReturnFirstPart(columnValueStrNative);
								 }
								 
								 if (columnName == "endsem_start_date")
									 EndSemStartDate = splitStringAndReturnFirstPart(columnValueStrNative);
								 // Insert into std::map
						 }
					 }

					 reader->Close();
					 con->Close();
				 }
				 
				 catch (Exception^ ex)
				 {
					 MessageBox::Show(ex->Message); 

				 }
				 if (MidSemStartDate.length())
				 {
					 MidSemExamSlotToDay["A"] = getNextDate(MidSemStartDate, 0);
					 MidSemExamSlotToDay["A1"] = getNextDate(MidSemStartDate, 0);
					 MidSemExamSlotToDay["B"] = getNextDate(MidSemStartDate, 1);
					 MidSemExamSlotToDay["B1"] = getNextDate(MidSemStartDate, 1);
					 MidSemExamSlotToDay["C"] = getNextDate(MidSemStartDate, 2);
					 MidSemExamSlotToDay["C1"] = getNextDate(MidSemStartDate, 2);
					 MidSemExamSlotToDay["D"] = getNextDate(MidSemStartDate, 3);
					 MidSemExamSlotToDay["D1"] = getNextDate(MidSemStartDate, 3);
					 MidSemExamSlotToDay["E"] = getNextDate(MidSemStartDate, 4);
					 MidSemExamSlotToDay["E1"] = getNextDate(MidSemStartDate, 4);
					 MidSemExamSlotToDay["F"] = getNextDate(MidSemStartDate, 5);
					 MidSemExamSlotToDay["F1"] = getNextDate(MidSemStartDate, 5);
					 MidSemExamSlotToDay["G"] = getNextDate(MidSemStartDate, 6);
					 MidSemExamSlotToDay["G1"] = getNextDate(MidSemStartDate, 6);
					 MidSemSlotToTime["A"] = "9 am - 11 am";
					 MidSemSlotToTime["A1"] = "2 pm - 4 pm";
					 MidSemSlotToTime["B"] = "9 am - 11 am";
					 MidSemSlotToTime["B1"] = "2 pm - 4 pm";
					 MidSemSlotToTime["C"] = "9 am - 11 am";
					 MidSemSlotToTime["C1"] = "2 pm - 4 pm";
					 MidSemSlotToTime["D"] = "9 am - 11 am";
					 MidSemSlotToTime["D1"] = "2 pm - 4 pm";
					 MidSemSlotToTime["E"] = "9 am - 11 am";
					 MidSemSlotToTime["E1"] = "2 pm - 4 pm";
					 MidSemSlotToTime["F"] = "9 am - 11 am";
					 MidSemSlotToTime["F1"] = "2 pm - 4 pm";
					 MidSemSlotToTime["G"] = "9 am - 11 am";
					 MidSemSlotToTime["G1"] = "2 pm - 4 pm";
				 }
				 
				 if (EndSemStartDate.length())
				 {
					 EndSemExamSlotToDay["A"] = getNextDate(EndSemStartDate, 0);
					 EndSemExamSlotToDay["A1"] = getNextDate(EndSemStartDate, 0);
					 EndSemExamSlotToDay["B"] = getNextDate(EndSemStartDate, 1);
					 EndSemExamSlotToDay["B1"] = getNextDate(EndSemStartDate, 1);
					 EndSemExamSlotToDay["C"] = getNextDate(EndSemStartDate, 2);
					 EndSemExamSlotToDay["C1"] = getNextDate(EndSemStartDate, 2);
					 EndSemExamSlotToDay["D"] = getNextDate(EndSemStartDate, 3);
					 EndSemExamSlotToDay["D1"] = getNextDate(EndSemStartDate, 3);
					 EndSemExamSlotToDay["E"] = getNextDate(EndSemStartDate, 4);
					 EndSemExamSlotToDay["E1"] = getNextDate(EndSemStartDate, 4);
					 EndSemExamSlotToDay["F"] = getNextDate(EndSemStartDate, 5);
					 EndSemExamSlotToDay["F1"] = getNextDate(EndSemStartDate, 5);
					 EndSemExamSlotToDay["G"] = getNextDate(EndSemStartDate, 6);
					 EndSemExamSlotToDay["G1"] = getNextDate(EndSemStartDate, 6);
					 EndSemSlotToTime["A"] = "9 am - 12 pm";
					 EndSemSlotToTime["A1"] = "2 pm - 5 pm";
					 EndSemSlotToTime["B"] = "9 am - 12 pm";
					 EndSemSlotToTime["B1"] = "2 pm - 5 pm";
					 EndSemSlotToTime["C"] = "9 am - 12 pm";
					 EndSemSlotToTime["C1"] = "2 pm - 5 pm";
					 EndSemSlotToTime["D"] = "9 am - 12 pm";
					 EndSemSlotToTime["D1"] = "2 pm - 5 pm";
					 EndSemSlotToTime["E"] = "9 am - 12 pm";
					 EndSemSlotToTime["E1"] = "2 pm - 5 pm";
					 EndSemSlotToTime["F"] = "9 am - 12 pm";
					 EndSemSlotToTime["F1"] = "2 pm - 5 pm";
					 EndSemSlotToTime["G"] = "9 am - 12 pm";
					 EndSemSlotToTime["G1"] = "2 pm - 5 pm";
				 }

				 


				 
		
				try
				{
					String^ connString = Constants::getdbConnString();
					SqlConnection^ con = gcnew SqlConnection(connString);
					con->Open();
					String^ query = "SELECT [Courses].course_ID, slot FROM [Courses] JOIN [Courses Taken] ON [Courses].course_ID = [Courses Taken].course_ID JOIN [Room] ON [Room].room_ID = [Courses Taken].examination_venue where roll_no = '" + roll_no + "' AND is_lab = 'FALSE'";
					SqlCommand^ command = gcnew SqlCommand(query, con);
					SqlDataReader^ reader = command->ExecuteReader();

					// Assuming that course_ID is stored in the first column (index 0) and slot in the second column (index 1
					while (reader->Read()) {
						
						String^ courseId = reader->GetString(0);
						String^ courseSlot = reader->GetString(1);

						string courseID_str;
						string courseSlot_str;
						MarshalString(courseId, courseID_str);
						MarshalString(courseSlot, courseSlot_str);
						// Store course slot information in the CourseIdtoSlot map
						courseIDtoSlot[courseID_str] = courseSlot_str;
					}

					reader->Close();
					con->Close();
				}
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->Message);
				}

				DataTable^ dataTable = gcnew DataTable();
				DataGridView1->Columns[0]->DataPropertyName = "Course ID";
				DataGridView1->Columns[1]->DataPropertyName = "Course Name";
				DataGridView1->Columns[2]->DataPropertyName = "Venue";
				DataGridView1->Columns[3]->DataPropertyName = "MidsemDate";
				DataGridView1->Columns[4]->DataPropertyName = "MidsemTime";
				DataGridView1->Columns[5]->DataPropertyName = "EndsemDate";
				DataGridView1->Columns[6]->DataPropertyName = "EndsemTime";
				dataTable->Columns->Add("Course ID", String::typeid);
				dataTable->Columns->Add("Course Name", String::typeid);
				dataTable->Columns->Add("Venue", String::typeid);
				dataTable->Columns->Add("MidsemDate", String::typeid);
				dataTable->Columns->Add("MidsemTime", String::typeid);
				dataTable->Columns->Add("EndsemDate", String::typeid);
				dataTable->Columns->Add("EndsemTime", String::typeid);
				try
				{
					String^ connString = Constants::getdbConnString();
					SqlConnection^ con = gcnew SqlConnection(connString);
					con->Open();
					String^ query = "SELECT [Courses].course_ID as CID, course_name, slot, [Room].name as venue FROM [Courses] JOIN [Courses Taken] ON [Courses].course_ID = [Courses Taken].course_ID JOIN [Room] ON [Room].room_ID = [Courses Taken].examination_venue WHERE roll_no = '" + roll_no + "' AND is_lab = 'FALSE'";
					SqlCommand^ command = gcnew SqlCommand(query, con);
					SqlDataReader^ reader = command->ExecuteReader();

					// Assuming that course_ID is stored in the first column (index 0) and slot in the second column (index 1
					while (reader->Read()) {
						String^ courseId = reader->GetString(0);
						String^ coursename = reader->GetString(1);
						String^ slot = reader->GetString(2);
						String^ venue = reader->GetString(3);
						string courseIdstr;
						MarshalString(courseId, courseIdstr);
						String^ courseSloT = ConvertStdStringToSystemString(courseIDtoSlot[courseIdstr]);
						string courseSlot;
						MarshalString(courseSloT, courseSlot);
						// Assuming that your maps contain the necessary information for the given course slot
						String^ midSemDate = ConvertStdStringToSystemString(MidSemExamSlotToDay[courseSlot]);
						String^ midSemTime = ConvertStdStringToSystemString(MidSemSlotToTime[courseSlot]);
						String^ endSemDate = ConvertStdStringToSystemString(EndSemExamSlotToDay[courseSlot]);
						String^ endSemTime = ConvertStdStringToSystemString(EndSemSlotToTime[courseSlot]);

						// Create a DataTable with the same structure as the existing columns
						
						DataRow^ row = dataTable->NewRow();
						row["Course ID"] = courseId;
						row["Course Name"] = coursename;
						row["Venue"] = "    "+venue;
						row["MidsemDate"] = "  "+midSemDate;
						row["MidsemTime"] = midSemTime;
						row["EndsemDate"] = "  "+endSemDate;
						row["EndsemTime"] = endSemTime;
						dataTable->Rows->Add(row);
						
					}
					con->Close();
				}
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->Message);
				}
				DataGridView1->DataSource = dataTable;
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void DataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
};
}
