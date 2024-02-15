#pragma once
#include "Constants.h"
#include "LoginInnerScreen.h"
namespace AcadSecManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginDashboard
	/// </summary>
	public ref class LoginDashboard : public System::Windows::Forms::Form
	{
	public:
		LoginDashboard(void)
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
		~LoginDashboard()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: 
	internal: System::Windows::Forms::Button^  Button5;
	internal: System::Windows::Forms::Button^  Button4;
	internal: System::Windows::Forms::Button^  Button3;
	internal: System::Windows::Forms::Label^  Label36;
	internal: System::Windows::Forms::Panel^  childformpanel;
	private: System::Windows::Forms::Label^  label4;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginDashboard::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Label36 = (gcnew System::Windows::Forms::Label());
			this->Button5 = (gcnew System::Windows::Forms::Button());
			this->Button4 = (gcnew System::Windows::Forms::Button());
			this->Button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->childformpanel = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->panel2->BackColor = System::Drawing::Color::PowderBlue;
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->Label36);
			this->panel2->Controls->Add(this->Button5);
			this->panel2->Controls->Add(this->Button4);
			this->panel2->Controls->Add(this->Button3);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->panel2->ForeColor = System::Drawing::Color::Navy;
			this->panel2->Location = System::Drawing::Point(0, -1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(264, 599);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginDashboard::panel2_Paint);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SteelBlue;
			this->label4->Location = System::Drawing::Point(12, 255);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(223, 29);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Choose Your Role";
			this->label4->Click += gcnew System::EventHandler(this, &LoginDashboard::label4_Click);
			// 
			// Label36
			// 
			this->Label36->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Label36->AutoSize = true;
			this->Label36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Label36->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label36->Location = System::Drawing::Point(38, 141);
			this->Label36->Name = L"Label36";
			this->Label36->Size = System::Drawing::Size(186, 68);
			this->Label36->TabIndex = 6;
			this->Label36->Text = L"Login\r\nDashboard";
			this->Label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Label36->Click += gcnew System::EventHandler(this, &LoginDashboard::Label36_Click);
			// 
			// Button5
			// 
			this->Button5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Button5->BackColor = System::Drawing::Color::Transparent;
			this->Button5->FlatAppearance->BorderSize = 0;
			this->Button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button5->ForeColor = System::Drawing::Color::Black;
			this->Button5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Button5.Image")));
			this->Button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Button5->Location = System::Drawing::Point(3, 448);
			this->Button5->Name = L"Button5";
			this->Button5->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Button5->Size = System::Drawing::Size(258, 67);
			this->Button5->TabIndex = 8;
			this->Button5->Text = L"Student";
			this->Button5->UseVisualStyleBackColor = false;
			this->Button5->Click += gcnew System::EventHandler(this, &LoginDashboard::Button5_Click);
			// 
			// Button4
			// 
			this->Button4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Button4->BackColor = System::Drawing::Color::Transparent;
			this->Button4->FlatAppearance->BorderSize = 0;
			this->Button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button4->ForeColor = System::Drawing::Color::Black;
			this->Button4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Button4.Image")));
			this->Button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Button4->Location = System::Drawing::Point(3, 375);
			this->Button4->Name = L"Button4";
			this->Button4->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Button4->Size = System::Drawing::Size(258, 67);
			this->Button4->TabIndex = 2;
			this->Button4->Text = L"Professor";
			this->Button4->UseVisualStyleBackColor = false;
			this->Button4->Click += gcnew System::EventHandler(this, &LoginDashboard::Button4_Click);
			// 
			// Button3
			// 
			this->Button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Button3->BackColor = System::Drawing::Color::Transparent;
			this->Button3->FlatAppearance->BorderSize = 0;
			this->Button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->Button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button3->ForeColor = System::Drawing::Color::Black;
			this->Button3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Button3.Image")));
			this->Button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Button3->Location = System::Drawing::Point(3, 302);
			this->Button3->Name = L"Button3";
			this->Button3->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Button3->Size = System::Drawing::Size(258, 67);
			this->Button3->TabIndex = 7;
			this->Button3->Text = L"Admin";
			this->Button3->UseVisualStyleBackColor = false;
			this->Button3->Click += gcnew System::EventHandler(this, &LoginDashboard::Button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(258, 125);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &LoginDashboard::pictureBox1_Click);
			// 
			// childformpanel
			// 
			this->childformpanel->Location = System::Drawing::Point(267, -1);
			this->childformpanel->Name = L"childformpanel";
			this->childformpanel->Size = System::Drawing::Size(1017, 598);
			this->childformpanel->TabIndex = 9;
			this->childformpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginDashboard::childformpanel_Paint);
			// 
			// LoginDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1285, 598);
			this->Controls->Add(this->childformpanel);
			this->Controls->Add(this->panel2);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"LoginDashboard";
			this->Text = L"Login Dashboard";
			this->Load += gcnew System::EventHandler(this, &LoginDashboard::LoginDashboard_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void childformpanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
{
}
private:  System::Void LoginDashboard_Load(System::Object^  sender, System::EventArgs^  e) 
{

}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) 
{
}
private: System::Void Button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 LoginInnerScreen ^ InnerForm = gcnew LoginInnerScreen();
			 InnerForm->Role = "Admin";
			 Constants::subViewChildForm(childformpanel, InnerForm);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void Button6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 LoginInnerScreen ^ InnerForm = gcnew LoginInnerScreen();
			 InnerForm->Role = "Student";
			 Constants::subViewChildForm(childformpanel, InnerForm);
		 }
private: System::Void Button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 LoginInnerScreen ^ InnerForm = gcnew LoginInnerScreen();
			 InnerForm->Role = "Professor";
			 Constants::subViewChildForm(childformpanel, InnerForm);
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Label36_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

