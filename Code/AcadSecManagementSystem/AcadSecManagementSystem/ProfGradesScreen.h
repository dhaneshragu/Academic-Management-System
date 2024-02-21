#pragma once
#include "Constants.h"
#include "fstream"
#include "iomanip"
#include <vector>
#include <sstream>

namespace AcadSecManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for ProfGradesScreen
	/// </summary>
	public ref class ProfGradesScreen : public System::Windows::Forms::Form
	{
	public:

		String^ Faculty_ID;
		ProfGradesScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ProfGradesScreen(String^ Faculty_ID)
		{
			InitializeComponent();
			this->Faculty_ID = Faculty_ID;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ProfGradesScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  grades_stats;
	private: System::Windows::Forms::Button^  LoadChartButtion;






	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Label^  label4;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ProfGradesScreen::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->grades_stats = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->LoadChartButtion = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grades_stats))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(427, 77);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(386, 31);
			this->comboBox1->TabIndex = 19;
			// 
			// grades_stats
			// 
			this->grades_stats->BackColor = System::Drawing::Color::Azure;
			this->grades_stats->BackSecondaryColor = System::Drawing::SystemColors::Control;
			chartArea1->Name = L"ChartArea1";
			this->grades_stats->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->grades_stats->Legends->Add(legend1);
			this->grades_stats->Location = System::Drawing::Point(313, 4);
			this->grades_stats->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->grades_stats->Name = L"grades_stats";
			series1->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::LeftRight;
			series1->BackImageTransparentColor = System::Drawing::Color::SeaGreen;
			series1->BackSecondaryColor = System::Drawing::Color::SkyBlue;
			series1->BorderColor = System::Drawing::Color::Silver;
			series1->ChartArea = L"ChartArea1";
			series1->Color = System::Drawing::Color::SeaGreen;
			series1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series1->Legend = L"Legend1";
			series1->Name = L"# of Grades";
			this->grades_stats->Series->Add(series1);
			this->grades_stats->Size = System::Drawing::Size(647, 352);
			this->grades_stats->TabIndex = 20;
			this->grades_stats->Text = L"chart1";
			// 
			// LoadChartButtion
			// 
			this->LoadChartButtion->BackColor = System::Drawing::Color::LightPink;
			this->LoadChartButtion->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->LoadChartButtion->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoadChartButtion->Location = System::Drawing::Point(83, 245);
			this->LoadChartButtion->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->LoadChartButtion->Name = L"LoadChartButtion";
			this->LoadChartButtion->Size = System::Drawing::Size(162, 42);
			this->LoadChartButtion->TabIndex = 21;
			this->LoadChartButtion->Text = L"Load stats";
			this->LoadChartButtion->UseVisualStyleBackColor = false;
			this->LoadChartButtion->Click += gcnew System::EventHandler(this, &ProfGradesScreen::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightPink;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(133, 128);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 45);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Download Grades";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ProfGradesScreen::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(232, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 29);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Select Course";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkCyan;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Location = System::Drawing::Point(30, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(273, 29);
			this->label3->TabIndex = 32;
			this->label3->Text = L"      Grade Statistics";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Azure;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->grades_stats);
			this->panel1->Controls->Add(this->LoadChartButtion);
			this->panel1->Location = System::Drawing::Point(22, 186);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(971, 354);
			this->panel1->TabIndex = 34;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Navy;
			this->label4->Location = System::Drawing::Point(51, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(167, 23);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Average Grade :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(220, 129);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 24);
			this->label7->TabIndex = 36;
			this->label7->Text = L"{Num}";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(223, 175);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 24);
			this->label5->TabIndex = 34;
			this->label5->Text = L"{Num}";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Navy;
			this->label2->Location = System::Drawing::Point(51, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 23);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Total Students :";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::AliceBlue;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(1028, 216);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(153, 23);
			this->textBox1->TabIndex = 36;
			this->textBox1->Text = L"grade.csv";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::DarkCyan;
			this->label9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label9.Image")));
			this->label9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label9->Location = System::Drawing::Point(328, 14);
			this->label9->Name = L"label9";
			this->label9->Padding = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->label9->Size = System::Drawing::Size(347, 42);
			this->label9->TabIndex = 37;
			this->label9->Text = L"     Students Grades";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightPink;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(757, 128);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(169, 45);
			this->button3->TabIndex = 38;
			this->button3->Text = L"Upload Grades";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &ProfGradesScreen::button3_Click);
			// 
			// ProfGradesScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1016, 557);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"ProfGradesScreen";
			this->Text = L"ProfGradesScreen";
			this->Load += gcnew System::EventHandler(this, &ProfGradesScreen::ProfGradesScreen_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grades_stats))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: int getGrades(String^ grade){
				 if (grade == "AS") return 10;
				 if (grade == "AA") return 10;
				 if (grade == "AB") return 9;
				 if (grade == "BB") return 8;
				 if (grade == "BC") return 7;
				 if (grade == "CC") return 6;
				 if (grade == "CD") return 5;
				 if (grade == "DD") return 4;
				 if (grade == "F") return 0;
				 return -1;

	}

	private: void setTakenCourses(String^ prof_id){
				 String^ query = "SELECT * FROM Courses WHERE prof_id = @Prof_ID";
				 try{
					 String^ connString = Constants::getdbConnString();
					 SqlConnection^ con = gcnew SqlConnection(connString);
					 con->Open();

					 SqlCommand^ command = gcnew SqlCommand(query, con);
					 command->Parameters->Add(gcnew SqlParameter("@Prof_ID", prof_id));
					 SqlDataReader^ reader = command->ExecuteReader();
					 while (reader->Read()){
						 this->comboBox1->Items->Add(reader["course_ID"]);
					 }
					 con->Close();
				 }
				 catch (Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
	}

	String^ doubleToStringWithPrecision(double value, int precision) {
		std::ostringstream stream;
		stream << std::fixed << std::setprecision(precision) << value;
		return Constants::strCnvStr(stream.str());
	}
	private: void setChart(String^ course_id){
				 String^ query = "SELECT [grades],COUNT(*) AS count FROM [Courses Taken] WHERE course_ID =@Course_ID GROUP BY [grades]";
				 try{
					 String^ connString = Constants::getdbConnString();
					 SqlConnection^ con = gcnew SqlConnection(connString);
					 con->Open();

					 SqlCommand^ command = gcnew SqlCommand(query, con);
					 command->Parameters->Add(gcnew SqlParameter("@Course_ID", course_id));
					 SqlDataReader^ reader = command->ExecuteReader();
					 this->grades_stats->Series["# of Grades"]->Points->Clear();
					 int total_students = 0;
					 double total_grade = 0;
					 int count_not_graded = 0;
					 while (reader->Read()){
						 total_students += safe_cast<int>(reader["count"]);
						 total_grade += getGrades((reader["grades"])->ToString())*safe_cast<int>(reader["count"]);
						 if (reader["grades"]->ToString() == "--"){
							 count_not_graded = safe_cast<int>(reader["count"]);
						 }
						 else{
							 this->grades_stats->Series["# of Grades"]->Points->AddXY(reader["grades"], reader["count"]);
						 }
					 }
					 this->grades_stats->Series["# of Grades"]->Points->AddXY("Not graded", count_not_graded);
					 this->label7->Text = total_students.ToString();
					 total_grade = total_grade / total_students;
					 this->label5->Text = doubleToStringWithPrecision(total_grade,3);
					 con->Close();
				 }
				 catch (Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
	}

	bool fileExists(const std::string& filename) {
		std::ifstream file(filename);
		return file.good();
	}
	
	private: void downloadCSV(String^ course_id){
				 String^ query = "SELECT * FROM [Courses Taken] WHERE course_ID =@Course_ID";
				 std::string filename = Constants::StrCnvstr(course_id) + ".csv";
				 std::string newData = "Roll No,Grade";


				 try{
					 String^ connString = Constants::getdbConnString();
					 SqlConnection^ con = gcnew SqlConnection(connString);
					 con->Open();

					 SqlCommand^ command = gcnew SqlCommand(query, con);
					 command->Parameters->Add(gcnew SqlParameter("@Course_ID", course_id));
					 SqlDataReader^ reader = command->ExecuteReader();


					 if (!fileExists(filename)) {
						 // If the file doesn't exist, create it
						 std::ofstream createFile(filename);
						 if (!createFile.is_open()) {
							 MessageBox::Show("Error: Failed to create CSV file.");
							 return;
						 }
						 createFile.close();
					 }

					 std::ofstream file(filename, std::ios::trunc);
					 if (!file.is_open()) {
						 MessageBox::Show("Error: Failed to open CSV file for writing.");
						 return;
					 }


					 file << newData << std::endl;
					 while (reader->Read()){
						 newData = Constants::StrCnvstr(reader["roll_no"] + "," + reader["grades"]);
						 file << newData << std::endl;
					 }

					 con->Close();
					 file.close();
					 MessageBox::Show("Grades CSV Downloaded");
				 }
				 catch (Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
	}


	private: System::Void ProfGradesScreen_Load(System::Object^  sender, System::EventArgs^  e) {
				 setTakenCourses(Faculty_ID);
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (comboBox1->SelectedItem != nullptr) {
					 setChart(this->comboBox1->SelectedItem->ToString());
				 }
				 else{
					 MessageBox::Show("Please select a course from list.");
				 }
	}



	private: std::vector<std::string> splitString(const std::string& s, char delimiter) {
		std::vector<std::string> tokens;
		std::istringstream tokenStream(s);
		std::string token;
		while (std::getline(tokenStream, token, delimiter)) {
			tokens.push_back(token);
		}
		return tokens;
	}

	private: std::vector<std::vector<std::string>> readCSV(const std::string& filename) {
		std::vector<std::vector<std::string>> data;

		std::ifstream file(filename);
		if (!file.is_open()) {
			return data;
		}

		std::string line;
		while (std::getline(file, line)) {
			std::vector<std::string> tokens = splitString(line, ',');

			data.push_back(tokens);
		}

		file.close();

		return data;
	}

	private: void updateGrades(std::vector<std::vector<std::string>> csvData,String^ course_ID){
				 String^ query = "UPDATE [Courses Taken] SET grades=@Grades WHERE roll_no=@Roll_No AND course_ID='"+course_ID+"'";
				 try{
					 String^ connString = Constants::getdbConnString();
					 SqlConnection^ con = gcnew SqlConnection(connString);
					 con->Open();

					 for (int i = 1; i < csvData.size(); i++){
						 SqlCommand^ command = gcnew SqlCommand(query, con);
						 command->Parameters->Add(gcnew SqlParameter("@Grades", Constants::strCnvStr(csvData[i][1])));
						 command->Parameters->Add(gcnew SqlParameter("@Roll_No", Constants::strCnvStr(csvData[i][0])));
						 command->ExecuteNonQuery();
					 }
					 con->Close();
				 }
				 catch (Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }
	}

	private: bool checkCSVContent(std::vector<std::vector<std::string>> csvData){
				 if (csvData.size() <= 0) {
					 MessageBox::Show("file is empty");
					 return 0;
				 }
				 for (int i = 0; i < csvData.size(); i++){
					 if (csvData[i].size() != 2){
						MessageBox::Show("file is different no of columns");
						return 0;
					}
				 }
				 if (csvData[0][0] != "Roll No" || csvData[0][1]!="Grade"){
					 MessageBox::Show("Wrong column name in file");
					 return 0;
				 }
				 for (int i = 1; i < csvData.size(); i++){
					 if (getGrades(Constants::strCnvStr(csvData[i][1])) == -1){
						 MessageBox::Show("Wrong data in file");
						 return 0;
					 }
					 if (csvData[i][0].size() != 9){
						 MessageBox::Show("Wrong data in file");
						 return 0;
					 }
					 for (int j = 0; j < 9; j++){
						 if (csvData[i][0][j]>'9' || csvData[i][0][j] < '0'){
							 MessageBox::Show("Wrong data in file");
							 return 0;
						 }
					 }
				 }
				 return 1;
	}

	bool isGradesSubmission(){
		String^ query = "SELECT * FROM [Admin]";
		try{
			String^ connString = Constants::getdbConnString();
			SqlConnection^ con = gcnew SqlConnection(connString);
			con->Open();

			SqlCommand^ command = gcnew SqlCommand(query, con);
			SqlDataReader^ reader = command->ExecuteReader();
			reader->Read();
			if (reader["is_grade_submission"] == NULL){
				con->Close();
				return false;
			}
			else {
				if (reader["is_grade_submission"]->Equals(true)){
					MessageBox::Show(reader["is_grade_submission"]->ToString());
					con->Close();
					return true;
				}
				else{
					con->Close();
					return false;
				}
			}

		}
		catch (Exception^ ex){
			MessageBox::Show(ex->Message);
		}
	}


	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (comboBox1->SelectedItem != nullptr) {
					 if (isGradesSubmission()==true){

						OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

						openFileDialog1->InitialDirectory = "c:\\";
						openFileDialog1->Filter = "CSV files (*.csv)|*.csv";
						openFileDialog1->FilterIndex = 2;
						openFileDialog1->RestoreDirectory = true;

						if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
							try{
								std::vector<std::vector<std::string>> csvData = readCSV(Constants::StrCnvstr(openFileDialog1->FileName->ToString()));
								if (checkCSVContent(csvData)){
									updateGrades(csvData, this->comboBox1->SelectedItem->ToString());
									MessageBox::Show("Grades CSV Uploaded");
								}
							}
							catch (Exception^ ex){
								MessageBox::Show("Error reading file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
							}
						}
					}
					else{
						MessageBox::Show("Course grades submission is not allowed now.");
					}
				 }
				 else{
					 MessageBox::Show("Please select a course from list.");
				 }
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (comboBox1->SelectedItem != nullptr) {
					 downloadCSV(this->comboBox1->SelectedItem->ToString());
				 }
				 else{
					 MessageBox::Show("Please select a course from list.");
				 }
	}
};
}

