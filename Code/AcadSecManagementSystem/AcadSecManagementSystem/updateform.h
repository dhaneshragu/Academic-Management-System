#ifndef UPDATEFORM_H  // Header guard to prevent multiple inclusions
#define UPDATEFORM_H 

#pragma once
// Add any #include<map> or any libraries u want

// Using directives for namespaces
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Drawing;

// IMPORTANT: Function Signatures of all the functions you are making it in the SampleHeader.cpp file

// Function to fetch details by roll number and role
std::map <std::string, std::string> FetchDetailsByRollNumber(String ^ rollNumber, String ^ Role);

// Function to convert a std::string to System::String
String^ ConvertStdStringToSystemString(const std::string& stdString);

// Function to parse a date string into System::DateTime
System::DateTime ParseDateString(std::string dateString);

// Function to marshal a System::String to std::string
void MarshalString(String ^ s, std::string& os);

// Function to update user details
void updateUserDetails(String ^rollnumber, String ^ address, String ^password, String ^phoneNo, String ^dateOfBirth, Bitmap^ Image, String ^ Role);

// Function to check if a phone number is valid
bool IsValidPhoneNumber(String^ phoneNo);

// Function to split a string and return its first part
std::string splitStringAndReturnFirstPart(const std::string& inputString);

// Function to get the next date given the current date and days ahead
std::string getNextDate(const std::string &currentDate, int daysAhead);

#endif  // UPDATEFORM_H
