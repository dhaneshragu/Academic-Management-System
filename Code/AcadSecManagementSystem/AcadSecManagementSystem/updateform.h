#ifndef UPDATEFORM_H  
#define UPDATEFORM_H 

#pragma once
#include <map>  // Add any #include<map> or any libraries you want
#include <regex> // Add any additional libraries you need
#include <iostream>
#include <sstream>
#include <ctime>
#include <iomanip>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Drawing;

// Function to fetch user details by roll number based on the role (Student/Professor)
std::map<std::string, std::string> FetchDetailsByRollNumber(String^ rollNumber, String^ Role);

// Function to convert System::String^ to std::string
String^ ConvertStdStringToSystemString(const std::string& stdString);

// Function to parse a date string into a System::DateTime object
System::DateTime ParseDateString(std::string dateString);

// Function to convert System::String^ to std::string
void MarshalString(String^ s, std::string& os);

// Function to update user details in the database
void updateUserDetails(String^ rollnumber, String^ address, String^ password, String^ phoneNo, String^ dateOfBirth, String^ Role);

// Function to check if a phone number is in a valid format
bool IsValidPhoneNumber(String^ phoneNo);

// Function to split a string and return the first part
std::string splitStringAndReturnFirstPart(const std::string& inputString);

// Function to get the next date based on the current date and number of days ahead
std::string getNextDate(const std::string &currentDate, int daysAhead);

#endif
