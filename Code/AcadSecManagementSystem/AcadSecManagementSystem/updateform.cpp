#include "stdafx.h"
#include "Constants.h"
#include "updateform.h"
#include <regex>
#include <iostream>
#include <sstream>
#include <ctime>
#include <iomanip>
using namespace std;

// Function to convert System::String^ to std::string
void MarshalString(String^ s, string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

// Function to convert std::string to System::String^
String^ ConvertStdStringToSystemString(const std::string& stdString) {
	array<Byte>^ byteArray = gcnew array<Byte>(stdString.length());
	System::Runtime::InteropServices::Marshal::Copy(IntPtr((void*)stdString.c_str()), byteArray, 0, stdString.length());
	return System::Text::Encoding::UTF8->GetString(byteArray);
}

// Function to fetch user details by roll number based on the role (Student/Professor)
std::map<string, string> FetchDetailsByRollNumber(String^ rollNumber, String^ Role) {
	std::map<string, string> details;
	String^ connectionString = Constants::getdbConnString();

	if (Role == "Student") {
		try {
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			connection->Open();

			String^ query = "SELECT * FROM [Student Database] WHERE roll_no = @RollNumber";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@RollNumber", rollNumber);

			SqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read()) {
				// Get column names and values
				for (int i = 0; i < reader->FieldCount; ++i) {
					String^ columnName = reader->GetName(i);
					int columnIndex = reader->GetOrdinal(columnName);
					Object^ columnValue = reader->GetSqlValue(columnIndex);
					String^ columnValueStr = columnValue->ToString();

					// Convert System::String^ to std::string
					string columnNameStr, columnValueStrNative;
					MarshalString(columnName, columnNameStr);
					MarshalString(columnValueStr, columnValueStrNative);

					// Insert into std::map
					details.insert({ columnNameStr, columnValueStrNative });
				}
			}

			reader->Close();
			connection->Close();
		}
		catch (Exception^ ex) {
			Console::WriteLine("Error: " + ex->Message);
		}
	}

	if (Role == "Professor") {
		try {
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			connection->Open();

			String^ query = "SELECT * FROM [Faculty] WHERE faculty_ID = @faculty_ID";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@faculty_ID", rollNumber);

			SqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read()) {
				// Get column names and values
				for (int i = 0; i < reader->FieldCount; ++i) {
					String^ columnName = reader->GetName(i);
					int columnIndex = reader->GetOrdinal(columnName);
					Object^ columnValue = reader->GetSqlValue(columnIndex);
					String^ columnValueStr = columnValue->ToString();

					// Convert System::String^ to std::string
					string columnNameStr, columnValueStrNative;
					MarshalString(columnName, columnNameStr);
					MarshalString(columnValueStr, columnValueStrNative);

					// Insert into std::map
					details.insert({ columnNameStr, columnValueStrNative });
				}
			}

			reader->Close();
			connection->Close();
		}
		catch (Exception^ ex) {
			Console::WriteLine("Error: " + ex->Message);
		}
	}
	return details;
}

// Function to parse a date string into a System::DateTime object
System::DateTime ParseDateString(std::string dateString) {
	// Convert System::String^ to std::string
	String^ systemDateString = ConvertStdStringToSystemString(dateString);

	// Parse the string into a DateTime object
	System::DateTime dateTime = System::DateTime::Parse(systemDateString);

	return dateTime;
}

// Function to update user details in the database
void updateUserDetails(String^ rollnumber, String^ address, String^ password, String^ phoneNo, String^ dateOfBirth, String^ Role) {
	String^ connectionString = Constants::getdbConnString(); // Replace with your actual connection string

	SqlConnection^ connection = gcnew SqlConnection(connectionString);
	connection->Open();

	if (Role == "Student") {
		// Update student details
		String^ query = "UPDATE [Student Database] SET Address = @Address, password = @Password, PhoneNo = @PhoneNo, DateOfBirth = @DateOfBirth WHERE roll_no = @RollNumber";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->AddWithValue("@RollNumber", rollnumber);
		command->Parameters->AddWithValue("@Address", address);
		command->Parameters->AddWithValue("@Password", password);
		command->Parameters->AddWithValue("@PhoneNo", phoneNo);
		command->Parameters->AddWithValue("@DateOfBirth", dateOfBirth);

		try {
			command->ExecuteNonQuery();
			Console::WriteLine("User details updated successfully.");
		}
		catch (Exception^ ex) {
			Console::WriteLine("Error: " + ex->Message);
		}

		connection->Close();
	}

	if (Role == "Professor") {
		// Update professor details
		String^ query = "UPDATE [Faculty] SET Address = @Address, password = @Password, PhoneNo = @PhoneNo, DateOfBirth = @DateOfBirth WHERE faculty_ID = @RollNumber";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->AddWithValue("@RollNumber", rollnumber);
		command->Parameters->AddWithValue("@Address", address);
		command->Parameters->AddWithValue("@Password", password);
		command->Parameters->AddWithValue("@PhoneNo", phoneNo);
		command->Parameters->AddWithValue("@DateOfBirth", dateOfBirth);

		try {
			command->ExecuteNonQuery();
			Console::WriteLine("User details updated successfully.");
		}
		catch (Exception^ ex) {
			Console::WriteLine("Error: " + ex->Message);
		}

		connection->Close();
	}
}

// Function to check if a phone number is in a valid format
bool IsValidPhoneNumber(String^ phoneNo) {
	if (phoneNo == nullptr)
		return true;
	std::regex pattern("^(\\+91[\\-\\s]?)?[6-9]\\d{9}$");

	std::string phoneNoStr;
	MarshalString(phoneNo, phoneNoStr);

	return std::regex_match(phoneNoStr, pattern);
}

// Function to split a string and return the first part
std::string splitStringAndReturnFirstPart(const std::string& inputString) {
	// Find the position of the first space in the input string
	size_t spacePosition = inputString.find(' ');

	// Check if a space was found
	if (spacePosition != std::string::npos) {
		// Return the substring before the first space
		return inputString.substr(0, spacePosition);
	}
	else {
		// Return the entire input string if no space is found
		return inputString;
	}
}

// Function to check if a year is a leap year
bool isLeapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to check if a date is valid
bool isValidDate(int day, int month, int year) {
	if (month < 1 || month > 12 || day < 1) {
		return false;
	}

	int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (isLeapYear(year)) {
		daysInMonth[2] = 29;
	}

	return day <= daysInMonth[month];
}

// Function to get the next date based on the current date and number of days ahead
std::string getNextDate(const std::string &currentDate, int daysAhead) {
	std::istringstream dateStream(currentDate);
	char dash;
	int day, month, year;
	dateStream >> day >> dash >> month >> dash >> year;

	if (!isValidDate(day, month, year)) {
		return "Invalid date!";
	}

	int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (isLeapYear(year)) {
		daysInMonth[2] = 29;
	}

	while (daysAhead > 0) {
		daysInMonth[2] = isLeapYear(year) ? 29 : 28;

		if (day < daysInMonth[month]) {
			day++;
		}
		else {
			day = 1;
			if (month < 12) {
				month++;
			}
			else {
				month = 1;
				year++;
			}
		}

		daysAhead--;
	}

	std::ostringstream result;
	result << std::setw(2) << std::setfill('0') << day << '-';
	result << std::setw(2) << std::setfill('0') << month << '-';
	result << year;

	return result.str();
}
