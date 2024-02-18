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
	/// Summary for StudentCourseReg
	/// </summary>
	public ref class StudentCourseReg : public System::Windows::Forms::Form
	{
	public:
		// To store the electives taken
		Dictionary<String^, bool>^ chosenElectiveSlots = gcnew Dictionary<String^, bool>();

		// To store roll number and Semester - default is 6th sem and 210101117 roll number

		String^ Sem = "6";
		int RollNo = 210101117; 

		StudentCourseReg(void)
		{
			InitializeComponent();
		}

		StudentCourseReg(int RollNumber, String^ Semester)
		{
			InitializeComponent();
			Sem = Semester;
			RollNo = RollNumber;
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentCourseReg()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:




	internal: System::Windows::Forms::Label^  Label1;

	internal:





	internal: System::Windows::Forms::DataGridView^  DataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	internal:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Instructor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Slot;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column4;
	private: System::Windows::Forms::Panel^  thirdyearpanel;




	private: System::Windows::Forms::Label^  label5;














	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  de1label;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox1;


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
			System::Windows::Forms::Button^  button2;
			System::Windows::Forms::Label^  label3;
			System::Windows::Forms::Button^  button1;
			System::Windows::Forms::Label^  label6;
			System::Windows::Forms::Button^  button3;
			System::Windows::Forms::Label^  label9;
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentCourseReg::typeid));
			this->DataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Instructor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Slot = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Label1 = (gcnew System::Windows::Forms::Label());
			this->thirdyearpanel = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->de1label = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			button2 = (gcnew System::Windows::Forms::Button());
			label3 = (gcnew System::Windows::Forms::Label());
			button1 = (gcnew System::Windows::Forms::Button());
			label6 = (gcnew System::Windows::Forms::Label());
			button3 = (gcnew System::Windows::Forms::Button());
			label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView1))->BeginInit();
			this->thirdyearpanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			button2->Location = System::Drawing::Point(246, 138);
			button2->Name = L"button2";
			button2->Size = System::Drawing::Size(75, 38);
			button2->TabIndex = 15;
			button2->Text = L"Add";
			button2->UseVisualStyleBackColor = true;
			button2->Click += gcnew System::EventHandler(this, &StudentCourseReg::CommonButtonClickHandler);
			// 
			// label3
			// 
			label3->AutoSize = true;
			label3->Location = System::Drawing::Point(17, 79);
			label3->Name = L"label3";
			label3->Size = System::Drawing::Size(64, 24);
			label3->TabIndex = 13;
			label3->Text = L"DE-1 :";
			// 
			// button1
			// 
			button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			button1->Location = System::Drawing::Point(248, 256);
			button1->Name = L"button1";
			button1->Size = System::Drawing::Size(75, 38);
			button1->TabIndex = 27;
			button1->Text = L"Add";
			button1->UseVisualStyleBackColor = true;
			button1->Click += gcnew System::EventHandler(this, &StudentCourseReg::CommonButtonClickHandler);
			// 
			// label6
			// 
			label6->AutoSize = true;
			label6->Location = System::Drawing::Point(19, 197);
			label6->Name = L"label6";
			label6->Size = System::Drawing::Size(64, 24);
			label6->TabIndex = 26;
			label6->Text = L"DE-2 :";
			// 
			// button3
			// 
			button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			button3->Location = System::Drawing::Point(249, 385);
			button3->Name = L"button3";
			button3->Size = System::Drawing::Size(75, 38);
			button3->TabIndex = 32;
			button3->Text = L"Add";
			button3->UseVisualStyleBackColor = true;
			button3->Click += gcnew System::EventHandler(this, &StudentCourseReg::CommonButtonClickHandler);
			// 
			// label9
			// 
			label9->AutoSize = true;
			label9->Location = System::Drawing::Point(20, 326);
			label9->Name = L"label9";
			label9->Size = System::Drawing::Size(64, 24);
			label9->TabIndex = 31;
			label9->Text = L"DE-3 :";
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
			this->DataGridView1->ColumnHeadersHeight = 52;
			this->DataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Instructor, this->Slot, this->Column4
			});
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::Honeydew;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::Honeydew;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridView1->DefaultCellStyle = dataGridViewCellStyle5;
			this->DataGridView1->GridColor = System::Drawing::Color::DimGray;
			this->DataGridView1->Location = System::Drawing::Point(13, 138);
			this->DataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->DataGridView1->Name = L"DataGridView1";
			this->DataGridView1->ReadOnly = true;
			this->DataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle6->Padding = System::Windows::Forms::Padding(4);
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->DataGridView1->RowHeadersVisible = false;
			this->DataGridView1->RowHeadersWidth = 20;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::Honeydew;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle7->Padding = System::Windows::Forms::Padding(6);
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::Honeydew;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle7;
			this->DataGridView1->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::Honeydew;
			this->DataGridView1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DataGridView1->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			this->DataGridView1->RowTemplate->DefaultCellStyle->Padding = System::Windows::Forms::Padding(5);
			this->DataGridView1->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::Honeydew;
			this->DataGridView1->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->DataGridView1->RowTemplate->DefaultCellStyle->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridView1->RowTemplate->DividerHeight = 1;
			this->DataGridView1->RowTemplate->Height = 30;
			this->DataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DataGridView1->Size = System::Drawing::Size(625, 353);
			this->DataGridView1->TabIndex = 3;
			this->DataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StudentCourseReg::DataGridView1_CellContentClick);
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
			this->Column1->FillWeight = 78.44669F;
			this->Column1->HeaderText = L"Course Code";
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
			this->Column2->FillWeight = 213.3627F;
			this->Column2->HeaderText = L"Course Name";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Instructor
			// 
			this->Instructor->FillWeight = 124.1512F;
			this->Instructor->HeaderText = L"Instructor";
			this->Instructor->Name = L"Instructor";
			this->Instructor->ReadOnly = true;
			// 
			// Slot
			// 
			this->Slot->FillWeight = 56.98195F;
			this->Slot->HeaderText = L"Slot";
			this->Slot->Name = L"Slot";
			this->Slot->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::DarkCyan;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Verdana", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::DarkCyan;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			this->Column4->DefaultCellStyle = dataGridViewCellStyle4;
			this->Column4->FillWeight = 68.74165F;
			this->Column4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Column4->HeaderText = L"Register";
			this->Column4->MinimumWidth = 20;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column4->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column4->Text = L"Add";
			this->Column4->ToolTipText = L"Register for this course";
			// 
			// Label1
			// 
			this->Label1->AutoSize = true;
			this->Label1->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label1->ForeColor = System::Drawing::Color::DarkCyan;
			this->Label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Label1.Image")));
			this->Label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Label1->Location = System::Drawing::Point(311, 13);
			this->Label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label1->Name = L"Label1";
			this->Label1->Padding = System::Windows::Forms::Padding(0, 0, 0, 6);
			this->Label1->Size = System::Drawing::Size(391, 42);
			this->Label1->TabIndex = 4;
			this->Label1->Text = L"     Course registration";
			this->Label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// thirdyearpanel
			// 
			this->thirdyearpanel->BackColor = System::Drawing::Color::Azure;
			this->thirdyearpanel->Controls->Add(this->label7);
			this->thirdyearpanel->Controls->Add(this->label8);
			this->thirdyearpanel->Controls->Add(this->comboBox3);
			this->thirdyearpanel->Controls->Add(button3);
			this->thirdyearpanel->Controls->Add(label9);
			this->thirdyearpanel->Controls->Add(this->label2);
			this->thirdyearpanel->Controls->Add(this->label4);
			this->thirdyearpanel->Controls->Add(this->comboBox1);
			this->thirdyearpanel->Controls->Add(button1);
			this->thirdyearpanel->Controls->Add(label6);
			this->thirdyearpanel->Controls->Add(this->label18);
			this->thirdyearpanel->Controls->Add(this->de1label);
			this->thirdyearpanel->Controls->Add(this->comboBox2);
			this->thirdyearpanel->Controls->Add(button2);
			this->thirdyearpanel->Controls->Add(label3);
			this->thirdyearpanel->Controls->Add(this->label5);
			this->thirdyearpanel->Location = System::Drawing::Point(645, 87);
			this->thirdyearpanel->Name = L"thirdyearpanel";
			this->thirdyearpanel->Size = System::Drawing::Size(359, 455);
			this->thirdyearpanel->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(91, 353);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 21);
			this->label7->TabIndex = 35;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Navy;
			this->label8->Location = System::Drawing::Point(82, 326);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(246, 24);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Departmental Elective - III";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(24, 390);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(206, 31);
			this->comboBox3->TabIndex = 33;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentCourseReg::comboBox3_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(90, 224);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 21);
			this->label2->TabIndex = 30;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Navy;
			this->label4->Location = System::Drawing::Point(81, 197);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(241, 24);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Departmental Elective - II";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(23, 261);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(206, 31);
			this->comboBox1->TabIndex = 28;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentCourseReg::comboBox1_SelectedIndexChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(88, 106);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 21);
			this->label18->TabIndex = 25;
			// 
			// de1label
			// 
			this->de1label->AutoSize = true;
			this->de1label->ForeColor = System::Drawing::Color::Navy;
			this->de1label->Location = System::Drawing::Point(80, 79);
			this->de1label->Name = L"de1label";
			this->de1label->Size = System::Drawing::Size(211, 24);
			this->de1label->TabIndex = 24;
			this->de1label->Text = L"Laboratory Elective - I";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(21, 143);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(206, 31);
			this->comboBox2->TabIndex = 23;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentCourseReg::comboBox2_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SeaGreen;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label5->Location = System::Drawing::Point(32, 17);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(280, 29);
			this->label5->TabIndex = 6;
			this->label5->Text = L"      Choose Your Electives";
			// 
			// StudentCourseReg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1016, 557);
			this->Controls->Add(this->thirdyearpanel);
			this->Controls->Add(this->DataGridView1);
			this->Controls->Add(this->Label1);
			this->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"StudentCourseReg";
			this->Text = L"StudentCourseReg";
			this->Load += gcnew System::EventHandler(this, &StudentCourseReg::StudentHome_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView1))->EndInit();
			this->thirdyearpanel->ResumeLayout(false);
			this->thirdyearpanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Function to populate the DataGridView with the available courses for that semester
	private: void setAvailableCoursesTable(String ^ semester)
	{
				 // SQL query to get the compulsory courses data
				 String^ query = "SELECT Courses.[course_ID],Courses.[course_name],Faculty.[name] as prof_name,Courses.[LTPC],Courses.slot FROM Courses "
					 "INNER JOIN Faculty ON Faculty.faculty_ID = Courses.[prof_ID] "
					 "WHERE Courses.[sem_offered] = @Semester AND Courses.[is_compulsory] = 1";

				 String^ connString = Constants::getdbConnString();
				 SqlConnection^ con = gcnew SqlConnection(connString);

				 try
				 {
					 con->Open();

					 SqlCommand^ command = gcnew SqlCommand(query, con);
					 command->Parameters->Add(gcnew SqlParameter("@Semester", semester));

					 // Execute the query using SqlDataReader
					 SqlDataReader^ reader = command->ExecuteReader();

					 while (reader->Read())
					 {
						 // Get all the required columns from the table and set the datagrid view
						 //MessageBox::Show(reader["Course Name"]->ToString());
						 String ^ CourseName = reader["course_name"]->ToString();
						 String ^ Instructor = reader["prof_name"]->ToString();
						 String^ CourseCode = reader["course_ID"]->ToString();
						 String^ Slot = reader["slot"]->ToString();
						 if (Slot->Length == 0) Slot == "--";

						 // Add these as these are compulsory courses
						 chosenElectiveSlots->Add(Slot, true);

						 array<String^>^ row = { CourseCode, CourseName,Instructor,Slot};

						 // Add the new row to the DataGridView
						 int rowIndex = DataGridView1->Rows->Add(row);

						 // Add the Drop Button
						 // Create a button for the sixth column ("Register") in the new row
						 DataGridViewButtonCell^ registerButtonCell = gcnew DataGridViewButtonCell();
						 DataGridView1->Rows[rowIndex]->Cells[4]= registerButtonCell;
						 DataGridView1->Rows[rowIndex]->Cells[4]->Value = "Add";
						 DataGridView1->Rows[rowIndex]->Cells[4]->Style->Padding = System::Windows::Forms::Padding(4);
		
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

	}
	private: System::Void StudentHome_Load(System::Object^  sender, System::EventArgs^  e) 
	{
				 // Start Afresh whenever page loads
				 ClearDB(RollNo);

				 if (Sem == "2" || Sem == "4") // No electives
				 {
					 thirdyearpanel->Visible = false;
					 DataGridView1->Size = System::Drawing::Size(990, 483);
					 DataGridView1->Location = System::Drawing::Point(13, 62);
					 setAvailableCoursesTable(Sem);
				 }
				 else
				 {
					 thirdyearpanel->Visible = true;
					 setAvailableCoursesTable(Sem);
					 handleThirdyearElectives();
				 }
	}
    private: System::Void DataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
{
	if (e->ColumnIndex == 4) // If the Add/Drop button is Clicked
	{
		if (DataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value == "Add")
		{
			// Make changes in the Database
			InsertIntoDB(RollNo, DataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString());
			// Change text back to Drop
			DataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "Drop";
		}
		else if (DataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value == "Drop")
		{
			// Make changes in the Database
			DeleteFromDB(RollNo, DataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString());
			// Change text back to Drop
			DataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "Add";
		}
	}
}

    private: void handleThirdyearElectives()
	{
			 // To store theory and lab electives
			 List<String^>^ LabElectives = gcnew List<String^>();
			 List<String^>^ TheoryElectives = gcnew List<String^>();

			 // Get the elective lab courses offered for that sem
			 String^ query = "SELECT Courses.[course_ID], Courses.[course_name], Faculty.[name] as prof_name, Courses.[LTPC], Courses.slot, Courses.[is_lab] FROM Courses " +
				 "INNER JOIN Faculty ON Faculty.faculty_ID = Courses.[prof_ID] " +
				 "WHERE Courses.[sem_offered] LIKE '%" + "6" + "%' AND Courses.[is_compulsory] = 0";
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
					 bool isLab = reader->GetBoolean(reader->GetOrdinal("is_lab"));
					 if (Slot->Length == 0) Slot == "--";

					 // Insert into appropriate list for future reference according to lab or theory
					 if (isLab)
					 {
						 LabElectives->Add(CourseCode);
						 
					 }
					 else
					 {
						 TheoryElectives->Add(CourseCode);
						 
					 }
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
			 this->comboBox2->Items->AddRange(LabElectives->ToArray());
			 this->comboBox2->SelectedIndex = -1;

			 this->comboBox1->Items->AddRange(TheoryElectives->ToArray());
			 this->comboBox1->SelectedIndex = -1;

			 this->comboBox3->Items->AddRange(TheoryElectives->ToArray());
			 this->comboBox3->SelectedIndex = -1;
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
		int val = safe_cast<int>(command->ExecuteScalar());
		return val;
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

private: String^ getColValue(String^ colReqd, String^ colOrig, String^ colVal){
			 String^ query = "SELECT Courses.[" + colReqd + "] FROM Courses WHERE Courses.[" + colOrig + "] = '"+ colVal + "'";
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
			 chosenElectiveSlots->Add(Constants::strCnvStr(slot),true);
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
		MessageBox::Show("Registerd for Course "+cid);
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
			MessageBox::Show("De-registered from "+cid);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		finally
		{
			con->Close();
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
						if (checkCompatibility(comboBox1->SelectedItem->ToString(),slot))
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
							this->label4->Text = "Departmental Elective - II";
							this->label2->Text = "";
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
							this->label4->Text = "Departmental Elective - II";
							this->label2->Text = "";
							clickedButton->Text = "Drop";
						}
						else
						{
							// Show error
							MessageBox::Show("You haven't registered for " + comboBox1->SelectedItem->ToString()+" to drop!");
							comboBox1->SelectedIndex = -1;
							if (chosenElectiveSlots->ContainsKey(slot))
							{
								chosenElectiveSlots->Remove(slot);
							}
							this->label4->Text = "Departmental Elective - II";
							this->label2->Text = "";
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
						if (checkCompatibility(comboBox2->SelectedItem->ToString(),slot))
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
							this->de1label->Text = "Laboratory Elective I";
							this->label18->Text = "";
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
							this->de1label->Text = "Laboratory Elective I";
							this->label18->Text = "";
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
							this->de1label->Text = "Laboratory Elective I";
							this->label18->Text = "";
							clickedButton->Text = "Drop";
						
						}
					}
				}
			 }
			 else
			 {
					if (comboBox3->SelectedItem != nullptr)
					{
						String^ slot = getColValue("slot", "course_ID", comboBox3->SelectedItem->ToString());
						if (text == "Add")
						{
							if (checkCompatibility(comboBox3->SelectedItem->ToString(),slot))
							{
								// Add to Database
								InsertIntoDB(RollNo, comboBox3->SelectedItem->ToString());
							}
							else
							{
								comboBox3->SelectedIndex = -1;
								if (chosenElectiveSlots->ContainsKey(slot))
								{
									chosenElectiveSlots->Remove(slot);
								}
								this->label8->Text = "Departmental Elective - III";
								this->label7->Text = "";
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
								this->label8->Text = "Departmental Elective - III";
								this->label7->Text = "";
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
								this->label8->Text = "Departmental Elective - III";
								this->label7->Text = "";
								clickedButton->Text = "Drop";
							
							}
						}
					}

			 }
			 // Changing the button text
			 if (clickedButton->Text == "Add") clickedButton->Text = "Drop";
			 else if (clickedButton->Text == "Drop") clickedButton->Text = "Add";
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 // To handle the changes
			 if (comboBox1->SelectedItem != nullptr) {
				 String^ selectedItem = comboBox1->SelectedItem->ToString();
				 string Item = Constants::StrCnvstr(selectedItem);
				 this->label4->Text = getColValue("course_name", "course_ID", selectedItem);
				 this->label2->Text = "Prof_id: " + getColValue("prof_ID", "course_ID", selectedItem) + " Slot: " + getColValue("slot", "course_ID", selectedItem);
			 }
}

private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 // To handle the changes
			 if (comboBox3->SelectedItem != nullptr) {
				 String^ selectedItem = comboBox3->SelectedItem->ToString();
				 string Item = Constants::StrCnvstr(selectedItem);
				 this->label8->Text = getColValue("course_name", "course_ID", selectedItem);
				 this->label7->Text = "Prof_id: " + getColValue("prof_ID", "course_ID", selectedItem) + " Slot: " + getColValue("slot", "course_ID", selectedItem);
			 }
}

private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 // To handle the changes
			 if (comboBox2->SelectedItem != nullptr) {
				 String^ selectedItem = comboBox2->SelectedItem->ToString();
				 string Item = Constants::StrCnvstr(selectedItem);
				 this->de1label->Text = getColValue("course_name", "course_ID", selectedItem);
				 this->label18->Text = "Prof_id: " + getColValue("prof_ID", "course_ID", selectedItem) + " Slot: " + getColValue("slot", "course_ID", selectedItem);
			 }
}
};
}
