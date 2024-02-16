#pragma once

namespace AcadSecManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for ProfGradesScreen
	/// </summary>
	public ref class ProfGradesScreen : public System::Windows::Forms::Form
	{
	public:
		ProfGradesScreen(void)
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
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
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"CS 101", L"CS 110", L"CS 224", L"CS 577", L"CS 245" });
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
			chartArea2->Name = L"ChartArea1";
			this->grades_stats->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->grades_stats->Legends->Add(legend2);
			this->grades_stats->Location = System::Drawing::Point(313, 4);
			this->grades_stats->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->grades_stats->Name = L"grades_stats";
			series2->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::LeftRight;
			series2->BackImageTransparentColor = System::Drawing::Color::SeaGreen;
			series2->BackSecondaryColor = System::Drawing::Color::SkyBlue;
			series2->BorderColor = System::Drawing::Color::Silver;
			series2->ChartArea = L"ChartArea1";
			series2->Color = System::Drawing::Color::SeaGreen;
			series2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series2->Legend = L"Legend1";
			series2->Name = L"# of Grades";
			this->grades_stats->Series->Add(series2);
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
			this->label7->Click += gcnew System::EventHandler(this, &ProfGradesScreen::label7_Click);
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
	private: System::Void ProfGradesScreen_Load(System::Object^  sender, System::EventArgs^  e) {
				 
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->grades_stats->Series["# of Grades"]->Points->AddXY("AS",12);
				 this->grades_stats->Series["# of Grades"]->Points->AddXY("AA", 32);
				 this->grades_stats->Series["# of Grades"]->Points->AddXY("AB", 21);
				 this->grades_stats->Series["# of Grades"]->Points->AddXY("BB", 54);
				 this->grades_stats->Series["# of Grades"]->Points->AddXY("BC", 2);
				 this->grades_stats->Series["# of Grades"]->Points->AddXY("CD", 2);
				 this->grades_stats->Series["# of Grades"]->Points->AddXY("DD", 1);
				 this->grades_stats->Series["# of Grades"]->Points->AddXY("F", 0);

	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 Stream^ myStream;
				 OpenFileDialog^ openFileDialog1=gcnew OpenFileDialog;

				 openFileDialog1->InitialDirectory = "c:\\";
				 openFileDialog1->Filter = "CSV files (*.csv)|*.csv";
				 openFileDialog1->FilterIndex = 2;
				 openFileDialog1->RestoreDirectory = true;

				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
					 if ((myStream = openFileDialog1->OpenFile()) != nullptr){
						 myStream->Close();
					 }
				 }


	}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
