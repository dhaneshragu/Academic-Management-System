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
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;


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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->grades_stats = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->LoadChartButtion = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grades_stats))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"CS 101", L"CS 110", L"CS 224", L"CS 577", L"CS 245" });
			this->comboBox1->Location = System::Drawing::Point(355, 87);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(310, 24);
			this->comboBox1->TabIndex = 19;
			// 
			// grades_stats
			// 
			this->grades_stats->BackColor = System::Drawing::Color::AliceBlue;
			this->grades_stats->BackSecondaryColor = System::Drawing::SystemColors::Control;
			chartArea1->Name = L"ChartArea1";
			this->grades_stats->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->grades_stats->Legends->Add(legend1);
			this->grades_stats->Location = System::Drawing::Point(385, 3);
			this->grades_stats->Name = L"grades_stats";
			series1->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::LeftRight;
			series1->BackImageTransparentColor = System::Drawing::Color::SeaGreen;
			series1->BackSecondaryColor = System::Drawing::Color::SkyBlue;
			series1->BorderColor = System::Drawing::Color::Silver;
			series1->ChartArea = L"ChartArea1";
			series1->Color = System::Drawing::Color::SeaGreen;
			series1->Legend = L"Legend1";
			series1->Name = L"Grade";
			this->grades_stats->Series->Add(series1);
			this->grades_stats->Size = System::Drawing::Size(523, 307);
			this->grades_stats->TabIndex = 20;
			this->grades_stats->Text = L"chart1";
			// 
			// LoadChartButtion
			// 
			this->LoadChartButtion->BackColor = System::Drawing::Color::LightPink;
			this->LoadChartButtion->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->LoadChartButtion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoadChartButtion->Location = System::Drawing::Point(44, 225);
			this->LoadChartButtion->Name = L"LoadChartButtion";
			this->LoadChartButtion->Size = System::Drawing::Size(142, 31);
			this->LoadChartButtion->TabIndex = 21;
			this->LoadChartButtion->Text = L"Load stats";
			this->LoadChartButtion->UseVisualStyleBackColor = false;
			this->LoadChartButtion->Click += gcnew System::EventHandler(this, &ProfGradesScreen::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightPink;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(112, 144);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(201, 33);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Download Grades";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(148, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 29);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Select Course";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkCyan;
			this->label3->Location = System::Drawing::Point(46, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(208, 29);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Grade Statistics";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkCyan;
			this->label4->Location = System::Drawing::Point(337, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(286, 39);
			this->label4->TabIndex = 33;
			this->label4->Text = L"Students Grades";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->grades_stats);
			this->panel1->Controls->Add(this->LoadChartButtion);
			this->panel1->Location = System::Drawing::Point(35, 195);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(936, 314);
			this->panel1->TabIndex = 34;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(154, 126);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 17);
			this->label7->TabIndex = 36;
			this->label7->Text = L"199";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(48, 161);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 20);
			this->label6->TabIndex = 35;
			this->label6->Text = L"Average Grade";
			this->label6->UseCompatibleTextRendering = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(154, 161);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 17);
			this->label5->TabIndex = 34;
			this->label5->Text = L"8";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 17);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Total Students";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightPink;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(601, 144);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(201, 33);
			this->button3->TabIndex = 35;
			this->button3->Text = L"Upload Grades";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &ProfGradesScreen::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::AliceBlue;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(822, 150);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(123, 23);
			this->textBox1->TabIndex = 36;
			this->textBox1->Text = L"grade.csv";
			// 
			// ProfGradesScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1016, 557);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
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
				 this->grades_stats->Series["Grade"]->Points->AddXY("AS",12);
				 this->grades_stats->Series["Grade"]->Points->AddXY("AA", 32);
				 this->grades_stats->Series["Grade"]->Points->AddXY("AB", 21);
				 this->grades_stats->Series["Grade"]->Points->AddXY("BB", 54);
				 this->grades_stats->Series["Grade"]->Points->AddXY("BC", 2);

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
};
}
