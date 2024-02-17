#ifndef CONSTANTS
#define CONSTANTS

#include <string>
#include <map>
#include <iostream>
#include <stdlib.h>
#include <cstring> 

namespace Constants
{
	
	using namespace System;
	using namespace System::Windows::Forms;

	String^ getdbConnString();
	void subViewChildForm(Panel^ parentpanel, Form^ childpanel);
}

#endif