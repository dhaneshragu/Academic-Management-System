#pragma once
#using <mscorlib.dll>
#using <System.Data.dll>
#using <System.dll>

// Include necessary headers for Windows Forms
#include <Windows.h>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>

// Include necessary headers for C++ types
#include <string>
#include <map>
#include <iostream>

#ifndef CONSTANTS
#define CONSTANTS

namespace Constants
{
	using namespace System;
	using namespace System::Windows::Forms;

	String^ getdbConnString();
	void subViewChildForm(Panel^ parentpanel, Form^ childpanel);

	std::string StrCnvstr(System::String ^ x);
	System::String ^ strCnvStr(std::string x);
}

#endif