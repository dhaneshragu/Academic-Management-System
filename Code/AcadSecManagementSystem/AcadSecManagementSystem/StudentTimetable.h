#pragma once
#include "Constants.h"
#include <map>
#include <vector>
#include <set>
#include <tuple>
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
	/// Summary for StudentTimetable
	/// </summary>
	public ref class StudentTimetable : public System::Windows::Forms::Form
	{
	
	public:
		property String ^roll_no;
		StudentTimetable(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		StudentTimetable(String ^rollno)
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
		~StudentTimetable()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:











	internal: System::Windows::Forms::DataGridView^  DataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	internal:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	internal: System::Windows::Forms::Label^  label3;
	private:








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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentTimetable::typeid));
			this->DataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
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
			this->DataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::Honeydew;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::Honeydew;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridView1->DefaultCellStyle = dataGridViewCellStyle6;
			this->DataGridView1->GridColor = System::Drawing::Color::DimGray;
			this->DataGridView1->Location = System::Drawing::Point(98, 178);
			this->DataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->DataGridView1->Name = L"DataGridView1";
			this->DataGridView1->ReadOnly = true;
			this->DataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->DataGridView1->RowHeadersVisible = false;
			this->DataGridView1->RowHeadersWidth = 10;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::Honeydew;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::Honeydew;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::Black;
			this->DataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle7;
			this->DataGridView1->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::Honeydew;
			this->DataGridView1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DataGridView1->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			this->DataGridView1->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::Honeydew;
			this->DataGridView1->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->DataGridView1->RowTemplate->DividerHeight = 1;
			this->DataGridView1->RowTemplate->Height = 30;
			this->DataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DataGridView1->Size = System::Drawing::Size(839, 341);
			this->DataGridView1->TabIndex = 3;
			this->DataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StudentTimetable::DataGridView1_CellContentClick);
			// 
			// Column1
			// 
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::DarkCyan;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Verdana", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::DarkCyan;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			this->Column1->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column1->HeaderText = L"Time";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::DarkCyan;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Verdana", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::DarkCyan;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			this->Column2->DefaultCellStyle = dataGridViewCellStyle3;
			this->Column2->FillWeight = 70;
			this->Column2->HeaderText = L"Course Code";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::DarkCyan;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Verdana", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::DarkCyan;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			this->Column3->DefaultCellStyle = dataGridViewCellStyle4;
			this->Column3->FillWeight = 200;
			this->Column3->HeaderText = L"Course Name";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::DarkCyan;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Verdana", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::DarkCyan;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			this->Column4->DefaultCellStyle = dataGridViewCellStyle5;
			this->Column4->HeaderText = L"Venue";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Monday", L"Tuesday", L"Wednesday", L"Thursday",
					L"Friday"
			});
			this->comboBox1->Location = System::Drawing::Point(316, 92);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(540, 31);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->Text = L"Monday";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentTimetable::comboBox1_SelectedIndexChanged);
			this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &StudentTimetable::comboBox1_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(161, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 27);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Select Day";
			this->label2->Click += gcnew System::EventHandler(this, &StudentTimetable::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkCyan;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Location = System::Drawing::Point(310, 16);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(0, 0, 0, 6);
			this->label3->Size = System::Drawing::Size(413, 42);
			this->label3->TabIndex = 8;
			this->label3->Text = L"     View Your Timetable";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// StudentTimetable
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1016, 557);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->DataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"StudentTimetable";
			this->Text = L"StudentTimetable";
			this->Load += gcnew System::EventHandler(this, &StudentTimetable::StudentTimetable_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Geting std::string from String^
	void MarshalString(String ^ s, string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	// Getting String^ from std::string
	String^ ConvertToSystemString(const std::string& str) {
		return gcnew String(str.c_str());
	}

	// Chronological sort
	static bool chronoSort(tuple<string, string, string, string>&a, tuple<string, string, string, string>&b){
		string time1 = get<0>(a);
		string time2 = get<0>(b);
		int sizeTime1 = time1.size();
		int sizeTime2 = time2.size();
		if (time1[sizeTime1 - 2] != time2[sizeTime2 - 2]) return time1[sizeTime1 - 2] < time2[sizeTime2 - 2];
		if (time1[sizeTime1 - 2] == 'A') return time1 < time2;
		if (time1[0] == '1' && time1[1] == '2') return true;
		if (time2[0] == '1' && time2[1] == '2') return false;
		return time1 < time2;
	}

	// Remove the automatic sort through header click.
	void RemoveAutoSorting(DataGridView^ dataGridView) {
		for each (DataGridViewColumn^ column in dataGridView->Columns) 
		{
			column->SortMode = DataGridViewColumnSortMode::NotSortable;
		}
	}

	// First Load of the inner panel
	private: System::Void StudentTimetable_Load(System::Object^  sender, System::EventArgs^  e) {

		// Default sorting is lexicographic, we want chronological order, so remove the automatic sort rule.
		RemoveAutoSorting(DataGridView1);

		// Try testing the connection to Database here itself.For the first time, Monday time table will be shown.
		// Day wise slot to Timings map (Here for Monday only).
		map<string, map<string, string>> DayWiseSlotToTime;
		DayWiseSlotToTime["Monday"]["A"] = "07:55 - 08:50 AM";
		DayWiseSlotToTime["Monday"]["B"] = "09:00 - 09:55 AM";
		DayWiseSlotToTime["Monday"]["C"] = "10:00 - 10:55 AM";
		DayWiseSlotToTime["Monday"]["D"] = "11:00 - 11:55 AM";
		DayWiseSlotToTime["Monday"]["F"] = "12:00 - 12:55 PM";
		DayWiseSlotToTime["Monday"]["F1"] = "01:00 - 01:55 PM";
		DayWiseSlotToTime["Monday"]["D1"] = "02:00 - 02:55 PM";
		DayWiseSlotToTime["Monday"]["C1"] = "03:00 - 03:55 PM";
		DayWiseSlotToTime["Monday"]["B1"] = "04:00 - 04:55 PM";
		DayWiseSlotToTime["Monday"]["A1"] = "05:00 - 05:55 PM";
		DayWiseSlotToTime["Monday"]["ML1"] = "09:00 - 11:55 AM";
		DayWiseSlotToTime["Monday"]["AL1"] = "02:00 - 04:55 PM";
		try
		{
			// Usual connection management.
			String^ connString = Constants::getdbConnString();
			SqlConnection^ con = gcnew SqlConnection (connString);
			con->Open();

			// Room Info
			map<string, string> idToName;

			// Query for retrieving Room info
			String^ queryForRoom = "SELECT room_ID,name,location FROM [Room];";

			SqlCommand^ commandForRoom = gcnew SqlCommand(queryForRoom, con);
			SqlDataReader^ readerForRoom = commandForRoom->ExecuteReader();

			// Map ID to name
			while (readerForRoom->Read())
			{
				String^ room_ID = readerForRoom["room_ID"]->ToString();
				String^ roomName = readerForRoom["name"]->ToString();
				String^ roomLocation = readerForRoom["location"]->ToString();
				roomName = roomName + ", " + roomLocation;
				string room_IDcppstr, roomNamecppstr;
				MarshalString(room_ID, room_IDcppstr);
				MarshalString(roomName, roomNamecppstr);
				idToName[room_IDcppstr] = roomNamecppstr;
			}

			// Closing reader
			readerForRoom->Close();
			// Query to retrieve Time table information.
			String^ query = "SELECT course_ID,course_name,slot,room_ID FROM [Courses] WHERE course_ID IN (SELECT course_ID FROM [Courses Taken] WHERE roll_no = '" + roll_no + "');";

			// Monday's (Default) Map.
			map <string, string> TodaySlotToTime = DayWiseSlotToTime["Monday"];
			
			// Reading line by line the data from the result of the query.
			SqlCommand^ command = gcnew SqlCommand(query, con);
			SqlDataReader^ reader = command->ExecuteReader();
			vector<tuple<string, string, string, string> > dailyScheduleList;
			
			// Mapping Slot to time, and room number (id) to name.
			while (reader->Read())
			{
				String^ courseID = reader["course_ID"]->ToString();
				String^ course_name = reader["course_name"]->ToString();
				String^ slot = reader["slot"]->ToString();
				String^ roomID = reader["room_ID"]->ToString();
				if (roomID->Length == 0) roomID = " ";
				string slotcppstr, course_IDcppstr, course_namecppstr, roomIDcppstr;
				MarshalString(slot, slotcppstr);
				MarshalString(courseID, course_IDcppstr);
				MarshalString(course_name, course_namecppstr);
				MarshalString(roomID, roomIDcppstr);
				// If the slot is not at all present in the day, it is not added to selected schedule.
				if (TodaySlotToTime.find(slotcppstr) == TodaySlotToTime.end()) continue;
				dailyScheduleList.push_back(make_tuple(TodaySlotToTime[slotcppstr], course_IDcppstr, course_namecppstr, idToName[roomIDcppstr]));
			}

			// Closing the reader
			reader->Close();

			// Chronologically sorting the schedule.
			sort(dailyScheduleList.begin(), dailyScheduleList.end(), chronoSort);

			// Updating the view.
			for (auto i : dailyScheduleList)
			{
				array<String^>^ row = { ConvertToSystemString(get<0>(i)), ConvertToSystemString(get<1>(i)), ConvertToSystemString(get<2>(i)), ConvertToSystemString(get<3>(i)) };
				DataGridView1->Rows->Add(row);
			}
			
			// Usual connection management.
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	// Remove all rows of Data grid.
	void ClearDataGridView(DataGridView^ dataGridView) {
		if (dataGridView->RowCount > 0) 
		{
			for (int i = dataGridView->RowCount - 1; i >= 0; i--) 
			{
				dataGridView->Rows->RemoveAt(i);
			}
		}
	}

	// Update the screen with selected day's timetable.
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		// Day wise slot to Timings map.
		map<string, map<string, string>> DayWiseSlotToTime;
		DayWiseSlotToTime["Monday"]["A"]   = "07:55 - 08:50 AM";
		DayWiseSlotToTime["Monday"]["B"]   = "09:00 - 09:55 AM";
		DayWiseSlotToTime["Monday"]["C"]   = "10:00 - 10:55 AM";
		DayWiseSlotToTime["Monday"]["D"]   = "11:00 - 11:55 AM";
		DayWiseSlotToTime["Monday"]["F"]   = "12:00 - 12:55 PM";
		DayWiseSlotToTime["Monday"]["F1"]  = "01:00 - 01:55 PM";
		DayWiseSlotToTime["Monday"]["D1"]  = "02:00 - 02:55 PM";
		DayWiseSlotToTime["Monday"]["C1"]  = "03:00 - 03:55 PM";
		DayWiseSlotToTime["Monday"]["B1"]  = "04:00 - 04:55 PM";
		DayWiseSlotToTime["Monday"]["A1"]  = "05:00 - 05:55 PM";
		DayWiseSlotToTime["Monday"]["ML1"] = "09:00 - 11:55 AM";
		DayWiseSlotToTime["Monday"]["AL1"] = "02:00 - 04:55 PM";

		DayWiseSlotToTime["Tuesday"]["E"] = "07:55 - 08:50 AM";
		DayWiseSlotToTime["Tuesday"]["A"] = "09:00 - 09:55 AM";
		DayWiseSlotToTime["Tuesday"]["B"] = "10:00 - 10:55 AM";
		DayWiseSlotToTime["Tuesday"]["C"] = "11:00 - 11:55 AM";
		DayWiseSlotToTime["Tuesday"]["F"] = "12:00 - 12:55 PM";
		DayWiseSlotToTime["Tuesday"]["F1"] = "01:00 - 01:55 PM";
		DayWiseSlotToTime["Tuesday"]["C1"] = "02:00 - 02:55 PM";
		DayWiseSlotToTime["Tuesday"]["B1"] = "03:00 - 03:55 PM";
		DayWiseSlotToTime["Tuesday"]["A1"] = "04:00 - 04:55 PM";
		DayWiseSlotToTime["Tuesday"]["E1"] = "05:00 - 05:55 PM";
		DayWiseSlotToTime["Tuesday"]["ML2"] = "09:00 - 11:55 AM";
		DayWiseSlotToTime["Tuesday"]["AL2"] = "02:00 - 04:55 PM";

		DayWiseSlotToTime["Wednesday"]["D"] = "07:55 - 08:50 AM";
		DayWiseSlotToTime["Wednesday"]["E"] = "09:00 - 09:55 AM";
		DayWiseSlotToTime["Wednesday"]["A"] = "10:00 - 10:55 AM";
		DayWiseSlotToTime["Wednesday"]["B"] = "11:00 - 11:55 AM";
		DayWiseSlotToTime["Wednesday"]["G"] = "12:00 - 12:55 PM";
		DayWiseSlotToTime["Wednesday"]["G1"] = "01:00 - 01:55 PM";
		DayWiseSlotToTime["Wednesday"]["B1"] = "02:00 - 02:55 PM";
		DayWiseSlotToTime["Wednesday"]["A1"] = "03:00 - 03:55 PM";
		DayWiseSlotToTime["Wednesday"]["E1"] = "04:00 - 04:55 PM";
		DayWiseSlotToTime["Wednesday"]["D1"] = "05:00 - 05:55 PM";
		DayWiseSlotToTime["Wednesday"]["ML3"] = "09:00 - 11:55 AM";
		DayWiseSlotToTime["Wednesday"]["AL3"] = "02:00 - 04:55 PM";

		DayWiseSlotToTime["Thursday"]["C"] = "07:55 - 08:50 AM";
		DayWiseSlotToTime["Thursday"]["D"] = "09:00 - 09:55 AM";
		DayWiseSlotToTime["Thursday"]["E"] = "10:00 - 10:55 AM";
		DayWiseSlotToTime["Thursday"]["A"] = "11:00 - 11:55 AM";
		DayWiseSlotToTime["Thursday"]["G"] = "12:00 - 12:55 PM";
		DayWiseSlotToTime["Thursday"]["G1"] = "01:00 - 01:55 PM";
		DayWiseSlotToTime["Thursday"]["A1"] = "02:00 - 02:55 PM";
		DayWiseSlotToTime["Thursday"]["E1"] = "03:00 - 03:55 PM";
		DayWiseSlotToTime["Thursday"]["D1"] = "04:00 - 04:55 PM";
		DayWiseSlotToTime["Thursday"]["C1"] = "05:00 - 05:55 PM";
		DayWiseSlotToTime["Thursday"]["ML4"] = "09:00 - 11:55 AM";
		DayWiseSlotToTime["Thursday"]["AL4"] = "02:00 - 04:55 PM";

		DayWiseSlotToTime["Friday"]["B"] = "07:55 - 08:50 AM";
		DayWiseSlotToTime["Friday"]["C"] = "09:00 - 09:55 AM";
		DayWiseSlotToTime["Friday"]["D"] = "10:00 - 10:55 AM";
		DayWiseSlotToTime["Friday"]["F"] = "11:00 - 11:55 AM";
		DayWiseSlotToTime["Friday"]["G"] = "12:00 - 12:55 PM";
		DayWiseSlotToTime["Friday"]["G1"] = "01:00 - 01:55 PM";
		DayWiseSlotToTime["Friday"]["F1"] = "02:00 - 02:55 PM";
		DayWiseSlotToTime["Friday"]["D1"] = "03:00 - 03:55 PM";
		DayWiseSlotToTime["Friday"]["C1"] = "04:00 - 04:55 PM";
		DayWiseSlotToTime["Friday"]["B1"] = "05:00 - 05:55 PM";
		DayWiseSlotToTime["Friday"]["ML5"] = "09:00 - 11:55 AM";
		DayWiseSlotToTime["Friday"]["AL5"] = "02:00 - 04:55 PM";
		try
		{
			// Extracting the selected value from the dropdown list.
			ComboBox^ combobox = dynamic_cast<ComboBox^>(sender);
			String^ selectedValue = safe_cast<String^>(combobox->SelectedItem);
			combobox->SelectionLength = 0;
			string selectedVal;
			MarshalString(selectedValue, selectedVal);

			// The corresponding map for the selected day.
			map <string, string> TodaySlotToTime = DayWiseSlotToTime[selectedVal];
			
			// Usual connection management.
			String^ connString = Constants::getdbConnString();
			SqlConnection^ con = gcnew SqlConnection (connString);
			con->Open();
			
			// Room Info
			map<string, string> idToName;

			// Query for retrieving Room info
			String^ queryForRoom = "SELECT room_ID,name,location FROM [Room];";

			SqlCommand^ commandForRoom = gcnew SqlCommand(queryForRoom, con);
			SqlDataReader^ readerForRoom = commandForRoom->ExecuteReader();

			// Map ID to name
			while (readerForRoom->Read())
			{
				String^ room_ID = readerForRoom["room_ID"]->ToString();
				String^ roomName = readerForRoom["name"]->ToString();
				String^ roomLocation = readerForRoom["location"]->ToString();
				roomName = roomName + ", " + roomLocation;
				string room_IDcppstr, roomNamecppstr;
				MarshalString(room_ID, room_IDcppstr);
				MarshalString(roomName, roomNamecppstr);
				idToName[room_IDcppstr] = roomNamecppstr;
			}

			// Closing reader
			readerForRoom->Close();

			// Query to retrieve Time table information.
			String^ query = "SELECT course_ID,course_name,slot,room_ID FROM [Courses] WHERE course_ID IN (SELECT course_ID FROM [Courses Taken] WHERE roll_no = '" + roll_no+ "');";
			
			// Reading line by line the data from the result of the query.
			SqlCommand^ command = gcnew SqlCommand(query, con);
			SqlDataReader^ reader = command->ExecuteReader();
			vector<tuple<string, string, string, string> > dailyScheduleList;
			
			// Mapping Slot to time, and room number (id) to name.
			while (reader->Read())
			{
				String^ courseID = reader["course_ID"]->ToString();
				String^ course_name = reader["course_name"]->ToString();
				String^ slot = reader["slot"]->ToString();
				String^ roomID = reader["room_ID"]->ToString();
				if (roomID->Length == 0) roomID = " ";
				string slotcppstr, course_IDcppstr, course_namecppstr,roomIDcppstr;
				MarshalString(slot, slotcppstr);
				MarshalString(courseID, course_IDcppstr);
				MarshalString(course_name, course_namecppstr);
				MarshalString(roomID, roomIDcppstr);
				// If the slot is not at all present in the day, it is not added to selected schedule.
				if (TodaySlotToTime.find(slotcppstr) == TodaySlotToTime.end()) continue;
				dailyScheduleList.push_back(make_tuple(TodaySlotToTime[slotcppstr],course_IDcppstr,course_namecppstr,idToName[roomIDcppstr]));
			}
			
			// Closing the reader
			reader->Close();

			// Chronologically sorting the schedule.
			sort(dailyScheduleList.begin(), dailyScheduleList.end(), chronoSort);
			
			// Clearing the view.
			ClearDataGridView(DataGridView1);
			
			// Updating the view.
			for (auto i : dailyScheduleList)
			{
				array<String^>^ row = { ConvertToSystemString(get<0>(i)), ConvertToSystemString(get<1>(i)), ConvertToSystemString(get<2>(i)), ConvertToSystemString(get<3>(i)) };
				DataGridView1->Rows->Add(row);
			}
			
			// Usual connection management.
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	
	// Disabling typing in the dropdown field.
	private: System::Void comboBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e){
		e->Handled = true;
	}

	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void DataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
};
}
