#pragma once
#include "Constants.h"
#include "StudentHome.h"
#include "ProfTimetable.h"
#include "ProfGradesScreen.h"
#include "DetailsUpdateForm.h"

namespace AcadSecManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ProfDashboard
	/// </summary>
	public ref class ProfDashboard : public System::Windows::Forms::Form
	{
		
	public:
		Form ^obj;
		property System::String^ Name;
		property System::String^ Faculty_ID;
		ProfDashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ProfDashboard(Form ^obj1)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			obj = obj1;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ProfDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	internal: System::Windows::Forms::Button^  Button6;
	private:
	internal: System::Windows::Forms::Button^  Button5;
	internal: System::Windows::Forms::Button^  Button4;
	internal: System::Windows::Forms::Button^  Button3;
	internal: System::Windows::Forms::Label^  Label36;
	internal: System::Windows::Forms::Panel^  childformpanel;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ProfDashboard::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Button6 = (gcnew System::Windows::Forms::Button());
			this->Button5 = (gcnew System::Windows::Forms::Button());
			this->Button4 = (gcnew System::Windows::Forms::Button());
			this->Button3 = (gcnew System::Windows::Forms::Button());
			this->Label36 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->childformpanel = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SteelBlue;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->ForeColor = System::Drawing::Color::LightCyan;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1289, 35);
			this->panel1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1157, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"{FacultyID}";
			this->label3->Click += gcnew System::EventHandler(this, &ProfDashboard::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(974, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"{Professor Name}";
			this->label2->Click += gcnew System::EventHandler(this, &ProfDashboard::label2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::PowderBlue;
			this->panel2->Controls->Add(this->Button6);
			this->panel2->Controls->Add(this->Button5);
			this->panel2->Controls->Add(this->Button4);
			this->panel2->Controls->Add(this->Button3);
			this->panel2->Controls->Add(this->Label36);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->ForeColor = System::Drawing::Color::Navy;
			this->panel2->Location = System::Drawing::Point(0, 26);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(264, 572);
			this->panel2->TabIndex = 1;
			// 
			// Button6
			// 
			this->Button6->BackColor = System::Drawing::Color::Transparent;
			this->Button6->FlatAppearance->BorderSize = 0;
			this->Button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button6->ForeColor = System::Drawing::Color::Black;
			this->Button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button6.Image")));
			this->Button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Button6->Location = System::Drawing::Point(0, 453);
			this->Button6->Name = L"Button6";
			this->Button6->Padding = System::Windows::Forms::Padding(15, 0, 35, 0);
			this->Button6->Size = System::Drawing::Size(264, 67);
			this->Button6->TabIndex = 9;
			this->Button6->Text = L"Logout";
			this->Button6->UseVisualStyleBackColor = false;
			this->Button6->Click += gcnew System::EventHandler(this, &ProfDashboard::Button6_Click);
			// 
			// Button5
			// 
			this->Button5->BackColor = System::Drawing::Color::Transparent;
			this->Button5->FlatAppearance->BorderSize = 0;
			this->Button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button5->ForeColor = System::Drawing::Color::Black;
			this->Button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button5.Image")));
			this->Button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Button5->Location = System::Drawing::Point(0, 374);
			this->Button5->Name = L"Button5";
			this->Button5->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Button5->Size = System::Drawing::Size(308, 67);
			this->Button5->TabIndex = 8;
			this->Button5->Text = L" Grades            ";
			this->Button5->UseVisualStyleBackColor = false;
			this->Button5->Click += gcnew System::EventHandler(this, &ProfDashboard::Button5_Click);
			// 
			// Button4
			// 
			this->Button4->BackColor = System::Drawing::Color::Transparent;
			this->Button4->FlatAppearance->BorderSize = 0;
			this->Button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button4->ForeColor = System::Drawing::Color::Black;
			this->Button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button4.Image")));
			this->Button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Button4->Location = System::Drawing::Point(0, 230);
			this->Button4->Name = L"Button4";
			this->Button4->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Button4->Size = System::Drawing::Size(264, 67);
			this->Button4->TabIndex = 2;
			this->Button4->Text = L"Time table";
			this->Button4->UseVisualStyleBackColor = false;
			this->Button4->Click += gcnew System::EventHandler(this, &ProfDashboard::Button4_Click);
			// 
			// Button3
			// 
			this->Button3->BackColor = System::Drawing::Color::Transparent;
			this->Button3->FlatAppearance->BorderSize = 0;
			this->Button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->Button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button3->ForeColor = System::Drawing::Color::Black;
			this->Button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button3.Image")));
			this->Button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Button3->Location = System::Drawing::Point(0, 301);
			this->Button3->Name = L"Button3";
			this->Button3->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->Button3->Size = System::Drawing::Size(267, 67);
			this->Button3->TabIndex = 7;
			this->Button3->Text = L"      Update Details";
			this->Button3->UseVisualStyleBackColor = false;
			this->Button3->Click += gcnew System::EventHandler(this, &ProfDashboard::Button3_Click);
			// 
			// Label36
			// 
			this->Label36->AutoSize = true;
			this->Label36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Label36->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label36->Location = System::Drawing::Point(37, 143);
			this->Label36->Name = L"Label36";
			this->Label36->Size = System::Drawing::Size(186, 68);
			this->Label36->TabIndex = 6;
			this->Label36->Text = L"Professor\r\nDashboard";
			this->Label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(258, 125);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// childformpanel
			// 
			this->childformpanel->Location = System::Drawing::Point(267, 39);
			this->childformpanel->Name = L"childformpanel";
			this->childformpanel->Size = System::Drawing::Size(1017, 558);
			this->childformpanel->TabIndex = 9;
			this->childformpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ProfDashboard::childformpanel_Paint);
			// 
			// ProfDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1285, 598);
			this->Controls->Add(this->childformpanel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ProfDashboard";
			this->Text = L"Professor Dashboard";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ProfDashboard::YourForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &ProfDashboard::ProfDashboard_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void childformpanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
	{
	}
	private:  System::Void ProfDashboard_Load(System::Object^  sender, System::EventArgs^  e)
	{
				  label2->Text = Name;
				  label3->Text = Faculty_ID;
				  // To render the StudentHome() form, replace according to the Inner form that you want to render inside
				  ProfTimetable ^ InnerForm = gcnew ProfTimetable();
				  Constants::subViewChildForm(childformpanel, InnerForm);

	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void Button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 // To render the UpdateDetails() form, replace according to the Inner form that you want to render inside
				 DetailsUpdateForm ^ InnerForm = gcnew DetailsUpdateForm();
				 Constants::subViewChildForm(childformpanel, InnerForm);
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Button4_Click(System::Object^  sender, System::EventArgs^  e) 
	{
				 ProfTimetable ^ InnerForm = gcnew ProfTimetable();
				 Constants::subViewChildForm(childformpanel, InnerForm);
	}
	private: System::Void Button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 ProfGradesScreen ^ InnerForm = gcnew ProfGradesScreen();
				 Constants::subViewChildForm(childformpanel, InnerForm);

	}
	private: System::Void YourForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
						  Application::Exit();
	}
	
private: System::Void Button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 obj->Show();
}
};
}

