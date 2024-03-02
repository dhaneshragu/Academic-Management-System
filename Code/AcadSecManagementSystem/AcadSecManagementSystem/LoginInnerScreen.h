#pragma once
#include "Constants.h"
#include "StudentDashboard.h"
#include "AdminDashboard.h"
#include "ProfDashboard.h"
#include "loginHandle.h"

namespace AcadSecManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginInnerScreen
	/// </summary>
	public ref class LoginInnerScreen : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		property System::String^ Role;
		LoginInnerScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		LoginInnerScreen(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginInnerScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Panel^  Panel1;
	protected: 


	private: System::Windows::Forms::TextBox^  textBox1;
	internal: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	internal: System::Windows::Forms::Label^  Label5;

	private: System::Windows::Forms::Button^  button1;
	internal: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	internal:

	internal:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginInnerScreen::typeid));
			this->Panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Panel1
			// 
			this->Panel1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Panel1->BackColor = System::Drawing::Color::Transparent;
			this->Panel1->Controls->Add(this->label3);
			this->Panel1->Controls->Add(this->Label5);
			this->Panel1->Location = System::Drawing::Point(157, 80);
			this->Panel1->Name = L"Panel1";
			this->Panel1->Size = System::Drawing::Size(847, 143);
			this->Panel1->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SeaGreen;
			this->label3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Location = System::Drawing::Point(421, 57);
			this->label3->Margin = System::Windows::Forms::Padding(0, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(302, 55);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Login";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Label5
			// 
			this->Label5->BackColor = System::Drawing::Color::Transparent;
			this->Label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label5->ForeColor = System::Drawing::Color::SeaGreen;
			this->Label5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Label5->Location = System::Drawing::Point(129, 57);
			this->Label5->Margin = System::Windows::Forms::Padding(0, 0, 4, 0);
			this->Label5->Name = L"Label5";
			this->Label5->Size = System::Drawing::Size(302, 55);
			this->Label5->TabIndex = 10;
			this->Label5->Text = L"{User}";
			this->Label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Label5->Click += gcnew System::EventHandler(this, &LoginInnerScreen::Label5_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->Location = System::Drawing::Point(460, 244);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(315, 28);
			this->textBox1->TabIndex = 12;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox2->Location = System::Drawing::Point(460, 295);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(315, 28);
			this->textBox2->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(327, 244);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 24);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(333, 299);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 24);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Password";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::LightBlue;
			this->button1->Location = System::Drawing::Point(501, 380);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 55);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LoginInnerScreen::button1_Click_1);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &LoginInnerScreen::Button1_MouseEnter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &LoginInnerScreen::Button1_MouseLeave);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label4->Location = System::Drawing::Point(423, 344);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(286, 24);
			this->label4->TabIndex = 17;
			this->label4->Text = L"        Invalid Username/Password";
			this->label4->Visible = false;
			// 
			// LoginInnerScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1016, 557);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Panel1);
			this->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"LoginInnerScreen";
			this->Text = L"LoginInnerScreen";
			this->Load += gcnew System::EventHandler(this, &LoginInnerScreen::LoginInnerScreen_Load);
			this->Panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
private: System::Void LoginInnerScreen_Load(System::Object^ sender, System::EventArgs^ e) {
        Label5->Text = Role;
    }

private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
        
    }
private: System::Void Button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
        button1->BackColor = System::Drawing::Color::RoyalBlue; // Replace with the desired hover color
    }

private: System::Void Button1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
        button1->BackColor = System::Drawing::Color::LightBlue;
    }
private: System::Void Label5_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		
		 String^ EmptyError =   "      Field(s) cannot be empty";
		 String^ InvalidError = "      Invalid Username/Password";
		
		if (Role == "Admin") {
			String^ adminID = textBox1->Text;
			String^ password = textBox2->Text;
			if (String::IsNullOrEmpty(adminID) || String::IsNullOrEmpty(password)) {
				
				label4->Text = EmptyError;
				label4->Visible = true;
				return; // Stop further processing
			}
			
			if (ValidateLogin(adminID, password, Role)) {
				
				obj->Hide();
				label4->Visible = false;
				AdminDashboard^ adminDashboard = gcnew AdminDashboard(obj);
				adminDashboard->adminID = adminID;
				adminDashboard->Show();
				
			}
			else {
				label4->Text = InvalidError;
				label4->Visible = true;
				return; // Stop further processing
			}
        }
        else if (Role == "Professor") {	
			// login handle
			String^ facultyID = textBox1->Text;
			String^ password =  textBox2->Text;

			if (String::IsNullOrEmpty(facultyID) || String::IsNullOrEmpty(password)) {

				label4->Text = EmptyError;
				label4->Visible = true;
				return; // Stop further processing
			}

			// Perform database query to validate faculty login
			if (ValidateLogin(facultyID, password,Role)) {
				// Login successful, open ProfDashboard
				obj->Hide();
				label4->Visible = false;
				ProfDashboard^ profDashboard = gcnew ProfDashboard(obj);
				profDashboard->Name = GetUserName(facultyID, Role);
				profDashboard->Faculty_ID = facultyID;
				profDashboard->Show();
			}
			else {
				label4->Text = InvalidError;
				label4->Visible = true; 
				
			}
		
        }
		else if (Role == "Student") {

			String^ studentID = textBox1->Text;
			String^ password = textBox2->Text;
			
			if (String::IsNullOrEmpty(studentID) || String::IsNullOrEmpty(password)) {

				label4->Text = EmptyError;
				label4->Visible = true;
				return; // Stop further processing
			}

			if (ValidateLogin(studentID, password, Role)) {
				obj->Hide();
				label4->Visible = false;
				StudentDashboard^ studDashboard = gcnew StudentDashboard(obj);
				studDashboard->UserName = GetUserName(studentID, Role);
				studDashboard->RollNumber = GetRoll(studentID);
				studDashboard->year = GetUserYear(studentID, Role);
				studDashboard->Show();
			}
			else {
				label4->Text = InvalidError;
				label4->Visible = true;

			}
		}


	}
};

}
