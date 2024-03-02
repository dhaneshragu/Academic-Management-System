#ifndef UPDATEFORM_H  // Make it end with _H
#define UPDATEFORM_H 

#pragma once
// Add any #include<map> or any libraries u want
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Drawing;


// IMPORTANT: Function Signatures of all the functions you are making it in the SampleHeader.cpp file
std::map <std::string, std::string> FetchDetailsByRollNumber(String ^ rollNumber,String ^ Role);
String^ ConvertStdStringToSystemString(const std::string& stdString);
System::DateTime ParseDateString(std::string dateString);
void MarshalString(String ^ s, std::string& os);
void updateUserDetails(String ^rollnumber, String ^ address, String ^password, String ^phoneNo, String ^dateOfBirth, String ^ Role);
bool IsValidPhoneNumber(String^ phoneNo);
std::string splitStringAndReturnFirstPart(const std::string& inputString);
std::string getNextDate(const std::string &currentDate, int daysAhead);
#endif