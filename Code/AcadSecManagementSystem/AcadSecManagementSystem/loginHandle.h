#ifndef LOGINHANDLE_H  // Include guards to prevent multiple header inclusion
#define LOGINHANDLE_H

#include <map>  // Add any #include<map> or any libraries you want

// Importing necessary namespaces
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Drawing;

// Function Signatures for functions defined in SampleHeader.cpp

// Validate user login based on role
bool ValidateLogin(String^ ID, String^ password, String^ role);

// Get user name based on role
String^ GetUserName(String^ ID, String^ role);

// Get user academic year based on role
int GetUserYear(String^ ID, String^ role);

// Check if the string contains non-numeric characters
bool ContainsNonNumericCharacters(String^ str);

// Get user roll number
String^ GetRoll(String^ ID);

#endif  // End of include guard
