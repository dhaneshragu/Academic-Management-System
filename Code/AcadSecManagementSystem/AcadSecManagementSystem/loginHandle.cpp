#include "stdafx.h"
#include "loginHandle.h"
#include "Constants.h"

// Write all your functions detailed here that were defined in header files, DONT USE int main()
bool ValidateLogin(String^ ID, String^ password,String^ role) {

	// Replace "YourConnectionString" with the actual connection string for your database

	String^ connectionString = Constants::getdbConnString();

	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		connection->Open();
		int result;
		if (role == "Admin")
		{
			// Perform the database query to validate admin login
			String^ query = "SELECT COUNT(*) FROM dbo.Admin WHERE admin_ID = @adminID AND password = @password";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@adminID", ID);
			command->Parameters->AddWithValue("@password", password);
			result = safe_cast<int>(command->ExecuteScalar());
		}
		if (role == "Professor")
		{
			// Perform the database query to validate faculty login
			String^ query = "SELECT COUNT(*) FROM dbo.Faculty WHERE faculty_ID = @facultyID AND password = @password";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@facultyID", ID);
			command->Parameters->AddWithValue("@password", password);
			result = safe_cast<int>(command->ExecuteScalar());
		}
		if (role == "Student")
		{
			// Perform the database query to validate student login
			String^ query = "SELECT COUNT(*) FROM dbo.[Student Database] WHERE email_id = @studentID AND password = @password";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@studentID", ID+"@iitg.ac.in");
			command->Parameters->AddWithValue("@password", password);
			result = safe_cast<int>(command->ExecuteScalar());
		}

		return (result > 0);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error connecting to the database: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	finally {
		connection->Close();
	}
}
String^ GetUserName(String^ ID, String ^role)
{
	String^ connectionString = Constants::getdbConnString();

	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		connection->Open();
		String^ result;
		if (role == "Professor")
		{
			// Perform the database query to validate faculty login
			String^ query = "SELECT name FROM dbo.Faculty WHERE faculty_ID = @facultyID";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@facultyID", ID);
			result = safe_cast<String ^>(command->ExecuteScalar());
		}
		if (role == "Student")
		{
			// Perform the database query to validate student login
			String^ query = "SELECT name FROM dbo.[Student Database] WHERE email_id = @studentID";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@studentID", ID+"@iitg.ac.in");
			result = safe_cast<String ^>(command->ExecuteScalar());
		}

		return result;
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error connecting to the database: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return nullptr;
	}
	finally {
		connection->Close();
	}
}
String^ GetRoll(String^ ID)
{
	String^ connectionString = Constants::getdbConnString();

	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		connection->Open();
		String^ result;
		
			// Perform the database query to validate student login
			String^ query = "SELECT roll_no FROM dbo.[Student Database] WHERE email_id = @studentID";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@studentID", ID+"@iitg.ac.in");
			SqlDataReader^ reader = command->ExecuteReader();
			if(reader->Read())
			{
				int columnIndex = reader->GetOrdinal("roll_no");
				Object^ columnValue = reader->GetSqlValue(columnIndex);
				String^ result = columnValue->ToString();
				return result;
			}	
		
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error connecting to the database 1: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return nullptr;
	}
	finally {
		connection->Close();
	}
}
int GetUserYear(String^ ID, String ^role)
{
	String^ connectionString = Constants::getdbConnString();

	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		connection->Open();
		int result;
		if (role == "Student")
		{
			// Perform the database query to validate student login
			String^ query = "SELECT year FROM dbo.[Student Database] WHERE email_id = @studentID";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@studentID", ID+"@iitg.ac.in");
			result = safe_cast<int>(command->ExecuteScalar());
		}

		return result;
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error connecting to the database : " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return 0;
	}
	finally {
		connection->Close();
	}
}

bool ContainsNonNumericCharacters(String^ str)
{
	for each (Char c in str)
	{
		if (!Char::IsDigit(c))
		{
			return true; // Found a non-numeric character
		}
	}
	return false; // All characters are numeric
}