#pragma once
#include "Constants.h"
#include "updateform.h"
namespace AcadSecManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;
	using namespace System::Windows::Forms;
	/// <summary>
	/// Summary for DetailsUpdateForm
	/// </summary>
	public ref class DetailsUpdateForm : public System::Windows::Forms::Form
	{
	public:
		property String ^rollnumber;
		property String ^Role;
		DetailsUpdateForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		DetailsUpdateForm(String ^rollnumber1,String^ Role1)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			rollnumber = rollnumber1;
			Role = Role1;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DetailsUpdateForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::TextBox^  textBox1;
	internal:

	private: System::Windows::Forms::Label^  label1;






	private: System::Windows::Forms::Label^  label4;
	internal:
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::Button^  button1;
	internal: System::Windows::Forms::Label^  label10;
	private:
	private: System::Windows::Forms::Label^  label3;
	internal:
	private:


	internal:
	private:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DetailsUpdateForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->Location = System::Drawing::Point(424, 136);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(315, 28);
			this->textBox1->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(249, 139);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 24);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Username";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(249, 306);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 24);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Password";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(249, 259);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 24);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Address";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(248, 220);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(127, 24);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Date Of Birth";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(249, 352);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 24);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Phone No.";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox4->Location = System::Drawing::Point(424, 259);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(315, 28);
			this->textBox4->TabIndex = 22;
			// 
			// textBox5
			// 
			this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox5->Location = System::Drawing::Point(424, 302);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(315, 28);
			this->textBox5->TabIndex = 23;
			// 
			// textBox6
			// 
			this->textBox6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox6->Location = System::Drawing::Point(424, 348);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(315, 28);
			this->textBox6->TabIndex = 24;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(249, 179);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(124, 24);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Deptartment";
			// 
			// textBox7
			// 
			this->textBox7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox7->Location = System::Drawing::Point(424, 175);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(315, 28);
			this->textBox7->TabIndex = 26;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(216, 135);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(27, 28);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(216, 348);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(27, 28);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 29;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(216, 216);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(27, 28);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 30;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(216, 259);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(27, 28);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 31;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(216, 302);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(27, 28);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 32;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(216, 179);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(27, 28);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 33;
			this->pictureBox7->TabStop = false;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(424, 220);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(315, 28);
			this->dateTimePicker2->TabIndex = 35;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &DetailsUpdateForm::dateTimePicker2_ValueChanged);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::LightBlue;
			this->button1->Location = System::Drawing::Point(410, 409);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(184, 55);
			this->button1->TabIndex = 36;
			this->button1->Text = L"Save Changes";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DetailsUpdateForm::button1_Click);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &DetailsUpdateForm::Button1_MouseEnter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &DetailsUpdateForm::Button1_MouseLeave);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::DarkCyan;
			this->label10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label10.Image")));
			this->label10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label10->Location = System::Drawing::Point(371, 49);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Padding = System::Windows::Forms::Padding(0, 0, 0, 6);
			this->label10->Size = System::Drawing::Size(142, 42);
			this->label10->TabIndex = 37;
			this->label10->Text = L"     User";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkCyan;
			this->label3->Location = System::Drawing::Point(503, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 36);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Details";
			// 
			// DetailsUpdateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1016, 557);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DetailsUpdateForm";
			this->Text = L"DetailsUpdateForm";
			this->Load += gcnew System::EventHandler(this, &DetailsUpdateForm::DetailsUpdateForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DetailsUpdateForm_Load(System::Object^ sender, System::EventArgs^ e) {
				 // Access Details From DB
				 std :: map<std::string,std::string>details = FetchDetailsByRollNumber(rollnumber,Role);

				 
				 // Show Details
				textBox1->Text = ConvertStdStringToSystemString(details["name"]);
				textBox7->Text = ConvertStdStringToSystemString(details["Department"]);
				textBox4->Text = ConvertStdStringToSystemString(details["Address"]);
				textBox5->Text = ConvertStdStringToSystemString(details["password"]);
				textBox6->Text = ConvertStdStringToSystemString(details["PhoneNo"]);
				if (details["DateOfBirth"].length())
				dateTimePicker2->Value = ParseDateString(details["DateOfBirth"]);

	}

	private: System::Void Label5_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}


	private: System::Void dateTimePicker2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 String ^dateOfBirth;
				 String ^address;
				 String ^password;
				 String ^ phoneNo;
				 dateOfBirth = dateTimePicker2->Value.ToString("yyyy-MM-dd");
				 address = textBox4->Text ;
				 password = textBox5->Text ;
				 phoneNo = textBox6->Text ;
				 bool flag = 1;
				 if (String::IsNullOrEmpty(password)) {
					 MessageBox::Show("Password cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 flag = 0;
				 }
				 if (!IsValidPhoneNumber(phoneNo) && phoneNo != "Null")
				 {
					 MessageBox::Show("Invalid Phone Number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 flag = 0;
				 }
				 if (flag)
				 {
					 System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to update user details?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					 if (result == System::Windows::Forms::DialogResult::No) {
						 flag = 0;  // User clicked No, so do not proceed with the update
					 }
					 if (flag)
					 updateUserDetails(rollnumber, address, password, phoneNo, dateOfBirth,Role);
				 }
				 

				 // Access Details From DB
				 std::map<std::string, std::string>details = FetchDetailsByRollNumber(rollnumber,Role);


				 // Show Details
				 textBox1->Text = ConvertStdStringToSystemString(details["name"]);
				 textBox7->Text = ConvertStdStringToSystemString(details["Department"]);
				 textBox4->Text = ConvertStdStringToSystemString(details["Address"]);
				 textBox5->Text = ConvertStdStringToSystemString(details["password"]);
				 textBox6->Text = ConvertStdStringToSystemString(details["PhoneNo"]);
				 if (details["DateOfBirth"].length())
					 dateTimePicker2->Value = ParseDateString(details["DateOfBirth"]);

	}
	private: System::Void Button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
				 button1->BackColor = System::Drawing::Color::RoyalBlue; // Replace with the desired hover color
	}

	private: System::Void Button1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
				 button1->BackColor = System::Drawing::Color::LightBlue;
	}
	};

}
