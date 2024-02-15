#include "stdafx.h"
#include "Constants.h"


namespace Constants
{

	String^ getdbConnString()
	{
		String^ f = "Data Source=sql5075.site4now.net;Initial Catalog=db_aa52db_mainacaddb;Persist Security Info=True;User ID=db_aa52db_mainacaddb_admin;Password=swelab@123;Connect Timeout=60";
		return f;
	}

	// Function to render child form inside parent form
	void subViewChildForm(Panel^ parentpanel, Form^ childpanel) {
		parentpanel->Controls->Clear();
		childpanel->TopLevel = false;
		childpanel->FormBorderStyle = Windows::Forms::FormBorderStyle::None;
		childpanel->Dock = DockStyle::Fill;
		childpanel->BringToFront();
		parentpanel->Controls->Add(childpanel);
		childpanel->Show(); // Add to panel and show the child form
	}

	// Function to convert .NET String^ to C++ string
	string StringTostring(String ^ x) {
		return msclr::interop::marshal_as<std::string>(x);
	}
	
	// Function to convert C++ string to .NET String^
	String ^ stringToString(string x) {
		return msclr::interop::marshal_as<System::String ^>(x);
	}
}