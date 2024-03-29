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
	/// Summary for ViewRecords
	/// </summary>
	public ref class ViewRecords : public System::Windows::Forms::Form
	{
		Form^ obj;
	public:
		ViewRecords(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ViewRecords(Form^obj1)
		{
			InitializeComponent();
			obj = obj1;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewRecords()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Panel^  Panel4;
	protected:

	internal: System::Windows::Forms::PictureBox^  PictureBox3;
	internal: System::Windows::Forms::Label^  Label8;
	internal: System::Windows::Forms::Panel^  Panel2;

	internal: System::Windows::Forms::PictureBox^  PictureBox1;
	internal: System::Windows::Forms::Label^  Label1;
	internal: System::Windows::Forms::Panel^  Panel3;
	internal: System::Windows::Forms::Label^  Students_Label;
	internal: System::Windows::Forms::PictureBox^  PictureBox2;
	internal: System::Windows::Forms::Label^  Label7;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	internal: System::Windows::Forms::Label^  Fees_label;
	internal: System::Windows::Forms::Label^  Faculty_Label;
	private:

	private:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewRecords::typeid));
			this->Panel4 = (gcnew System::Windows::Forms::Panel());
			this->Fees_label = (gcnew System::Windows::Forms::Label());
			this->PictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->Label8 = (gcnew System::Windows::Forms::Label());
			this->Panel2 = (gcnew System::Windows::Forms::Panel());
			this->Faculty_Label = (gcnew System::Windows::Forms::Label());
			this->PictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Label1 = (gcnew System::Windows::Forms::Label());
			this->Panel3 = (gcnew System::Windows::Forms::Panel());
			this->Students_Label = (gcnew System::Windows::Forms::Label());
			this->PictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox3))->BeginInit();
			this->Panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox1))->BeginInit();
			this->Panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// Panel4
			// 
			this->Panel4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Panel4->BackColor = System::Drawing::Color::White;
			this->Panel4->Controls->Add(this->Fees_label);
			this->Panel4->Controls->Add(this->PictureBox3);
			this->Panel4->Controls->Add(this->Label8);
			this->Panel4->Location = System::Drawing::Point(586, 49);
			this->Panel4->Margin = System::Windows::Forms::Padding(4);
			this->Panel4->Name = L"Panel4";
			this->Panel4->Size = System::Drawing::Size(379, 225);
			this->Panel4->TabIndex = 15;
			// 
			// Fees_label
			// 
			this->Fees_label->AutoSize = true;
			this->Fees_label->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Fees_label->Location = System::Drawing::Point(150, 108);
			this->Fees_label->Name = L"Fees_label";
			this->Fees_label->Size = System::Drawing::Size(134, 49);
			this->Fees_label->TabIndex = 7;
			this->Fees_label->Text = L"{Num}";
			// 
			// PictureBox3
			// 
			this->PictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PictureBox3.Image")));
			this->PictureBox3->Location = System::Drawing::Point(50, 97);
			this->PictureBox3->Name = L"PictureBox3";
			this->PictureBox3->Size = System::Drawing::Size(100, 82);
			this->PictureBox3->TabIndex = 5;
			this->PictureBox3->TabStop = false;
			// 
			// Label8
			// 
			this->Label8->AutoSize = true;
			this->Label8->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label8->ForeColor = System::Drawing::Color::DarkCyan;
			this->Label8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Label8->Location = System::Drawing::Point(62, 13);
			this->Label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label8->Name = L"Label8";
			this->Label8->Padding = System::Windows::Forms::Padding(0, 0, 0, 6);
			this->Label8->Size = System::Drawing::Size(259, 42);
			this->Label8->TabIndex = 4;
			this->Label8->Text = L"Fees Collected";
			this->Label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Panel2
			// 
			this->Panel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Panel2->BackColor = System::Drawing::Color::White;
			this->Panel2->Controls->Add(this->Faculty_Label);
			this->Panel2->Controls->Add(this->PictureBox1);
			this->Panel2->Controls->Add(this->Label1);
			this->Panel2->Location = System::Drawing::Point(586, 304);
			this->Panel2->Margin = System::Windows::Forms::Padding(4);
			this->Panel2->Name = L"Panel2";
			this->Panel2->Size = System::Drawing::Size(379, 225);
			this->Panel2->TabIndex = 16;
			// 
			// Faculty_Label
			// 
			this->Faculty_Label->AutoSize = true;
			this->Faculty_Label->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Faculty_Label->Location = System::Drawing::Point(193, 111);
			this->Faculty_Label->Name = L"Faculty_Label";
			this->Faculty_Label->Size = System::Drawing::Size(134, 49);
			this->Faculty_Label->TabIndex = 7;
			this->Faculty_Label->Text = L"{Num}";
			// 
			// PictureBox1
			// 
			this->PictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PictureBox1.Image")));
			this->PictureBox1->Location = System::Drawing::Point(50, 97);
			this->PictureBox1->Name = L"PictureBox1";
			this->PictureBox1->Size = System::Drawing::Size(100, 82);
			this->PictureBox1->TabIndex = 5;
			this->PictureBox1->TabStop = false;
			// 
			// Label1
			// 
			this->Label1->AutoSize = true;
			this->Label1->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label1->ForeColor = System::Drawing::Color::DarkCyan;
			this->Label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Label1->Location = System::Drawing::Point(110, 16);
			this->Label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label1->Name = L"Label1";
			this->Label1->Padding = System::Windows::Forms::Padding(0, 0, 0, 6);
			this->Label1->Size = System::Drawing::Size(138, 42);
			this->Label1->TabIndex = 4;
			this->Label1->Text = L"Faculty";
			this->Label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Panel3
			// 
			this->Panel3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Panel3->BackColor = System::Drawing::Color::White;
			this->Panel3->Controls->Add(this->Students_Label);
			this->Panel3->Controls->Add(this->PictureBox2);
			this->Panel3->Controls->Add(this->Label7);
			this->Panel3->Location = System::Drawing::Point(97, 304);
			this->Panel3->Margin = System::Windows::Forms::Padding(4);
			this->Panel3->Name = L"Panel3";
			this->Panel3->Size = System::Drawing::Size(379, 225);
			this->Panel3->TabIndex = 17;
			// 
			// Students_Label
			// 
			this->Students_Label->AutoSize = true;
			this->Students_Label->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Students_Label->Location = System::Drawing::Point(182, 111);
			this->Students_Label->Name = L"Students_Label";
			this->Students_Label->Size = System::Drawing::Size(134, 49);
			this->Students_Label->TabIndex = 6;
			this->Students_Label->Text = L"{Num}";
			// 
			// PictureBox2
			// 
			this->PictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PictureBox2.Image")));
			this->PictureBox2->Location = System::Drawing::Point(50, 97);
			this->PictureBox2->Name = L"PictureBox2";
			this->PictureBox2->Size = System::Drawing::Size(100, 82);
			this->PictureBox2->TabIndex = 5;
			this->PictureBox2->TabStop = false;
			// 
			// Label7
			// 
			this->Label7->AutoSize = true;
			this->Label7->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label7->ForeColor = System::Drawing::Color::DarkCyan;
			this->Label7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Label7->Location = System::Drawing::Point(110, 16);
			this->Label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Label7->Name = L"Label7";
			this->Label7->Padding = System::Windows::Forms::Padding(0, 0, 0, 6);
			this->Label7->Size = System::Drawing::Size(165, 42);
			this->Label7->TabIndex = 4;
			this->Label7->Text = L"Students";
			this->Label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2020", L"2021", L"2022", L"2023" });
			this->comboBox1->Location = System::Drawing::Point(290, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(152, 31);
			this->comboBox1->TabIndex = 18;
			this->comboBox1->SelectedIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ViewRecords::comboBox1_SelectedIndexChanged);
			this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ViewRecords::comboBox1_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(112, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 27);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Select Year";
			// 
			// ViewRecords
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1016, 557);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Panel3);
			this->Controls->Add(this->Panel2);
			this->Controls->Add(this->Panel4);
			this->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ViewRecords";
			this->Text = L"ViewRecords";
			this->Load += gcnew System::EventHandler(this, &ViewRecords::ViewRecords_Load);
			this->Panel4->ResumeLayout(false);
			this->Panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox3))->EndInit();
			this->Panel2->ResumeLayout(false);
			this->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox1))->EndInit();
			this->Panel3->ResumeLayout(false);
			this->Panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void MarshalString(String ^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
#pragma endregion
	private: System::Void ViewRecords_Load(System::Object^  sender, System::EventArgs^  e) {
				 String^ selectedValue = safe_cast<String^>(comboBox1->SelectedItem);
				 string selectedVal;
				 MarshalString(selectedValue, selectedVal);
				 int year = stoi(selectedVal);
				 int result;
				 try
				 {
					 String^ connString = Constants::getdbConnString();
					 SqlConnection^ cn = gcnew SqlConnection(connString);
					 cn->Open();
					 String^ query = "SELECT fees_paid FROM dbo.[Financial Records] WHERE year=" + year;
					 SqlCommand^ command = gcnew SqlCommand(query, cn);
					 result = safe_cast<int>(command->ExecuteScalar());

					 Fees_label->Text = "Rs." + result.ToString();

					 String^ query1 = "SELECT no_of_students FROM dbo.[Financial Records] WHERE year=" + year;
					 SqlCommand^ command1 = gcnew SqlCommand(query1, cn);
					 result = safe_cast<int>(command1->ExecuteScalar());

					 Students_Label->Text = result.ToString();

					 String^ query2 = "SELECT no_of_teachers FROM dbo.[Financial Records] WHERE year=" + year;
					 SqlCommand^ command2 = gcnew SqlCommand(query2, cn);
					 result = safe_cast<int>(command2->ExecuteScalar());

					 Faculty_Label->Text = result.ToString();
				 }
				 catch (Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 ComboBox^ combobox = dynamic_cast<ComboBox^>(sender);
				 String^ selectedValue = safe_cast<String^>(combobox->SelectedItem);
				 string selectedVal;
				 MarshalString(selectedValue, selectedVal);
				 int year = stoi(selectedVal);
				 int result;
				 try
				 {
					 String^ connString = Constants::getdbConnString();
					 SqlConnection^ cn = gcnew SqlConnection(connString);
					 cn->Open();
					 String^ query = "SELECT fees_paid FROM dbo.[Financial Records] WHERE year="+year;
					 SqlCommand^ command = gcnew SqlCommand(query, cn);
					 result = safe_cast<int>(command->ExecuteScalar());

					 Fees_label->Text = "Rs." + result.ToString();

					 String^ query1 = "SELECT no_of_students FROM dbo.[Financial Records] WHERE year="+year;
					 SqlCommand^ command1 = gcnew SqlCommand(query1, cn);
					 result = safe_cast<int>(command1->ExecuteScalar());

					 Students_Label->Text = result.ToString();

					 String^ query2 = "SELECT no_of_teachers FROM dbo.[Financial Records] WHERE year="+year;
					 SqlCommand^ command2 = gcnew SqlCommand(query2, cn);
					 result = safe_cast<int>(command2->ExecuteScalar());

					 Faculty_Label->Text = result.ToString();
				 }
				 catch (Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
	}

			 private: System::Void comboBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^  e)
			 {
				 e->Handled = true;
			 }
};
}
