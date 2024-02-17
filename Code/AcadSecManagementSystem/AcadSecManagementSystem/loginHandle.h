#ifndef LOGINHANDLE_H  // Make it end with _H
#define LOGINHANDLE_H

// Add any #include<map> or any libraries u want

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Drawing;


// IMPORTANT: Function Signatures of all the functions you are making it in the SampleHeader.cpp file
bool ValidateLogin(String^ ID, String^ password,String^ role);
String^ GetUserName(String^ ID, String ^role);
int GetUserYear(String^ ID, String ^role);
bool ContainsNonNumericCharacters(String^ str);
#endif