#include "stdafx.h"
#include "loginHandle.h"
#include "Constants.h"

// Validate user login based on role
bool ValidateLogin(String^ ID, String^ password, String^ role) {

	// Get the connection string from Constants class
	String^ connectionString = Constants::getdbConnString();

	// Create a new SqlConnection using the connection string
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		// Open the database connection
		connection->Open();
		int result;

		// Check the role and perform the corresponding database query
		if (role == "Admin") {
			String^ query = "SELECT COUNT(*) FROM dbo.Admin WHERE admin_ID = @adminID AND password = @password";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@adminID", ID);
			command->Parameters->AddWithValue("@password", password);
			result = safe_cast<int>(command->ExecuteScalar());
		}
		else if (role == "Professor") {
			String^ query = "SELECT COUNT(*) FROM dbo.Faculty WHERE faculty_ID = @facultyID AND password = @password";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@facultyID", ID);
			command->Parameters->AddWithValue("@password", password);
			result = safe_cast<int>(command->ExecuteScalar());
		}
		else if (role == "Student") {
			String^ query = "SELECT COUNT(*) FROM dbo.[Student Database] WHERE email_id = @studentID AND password = @password";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@studentID", ID + "@iitg.ac.in");
			command->Parameters->AddWithValue("@password", password);
			result = safe_cast<int>(command->ExecuteScalar());
		}

		// Return true if the login is valid (result > 0)
		return (result > 0);
	}
	catch (Exception^ ex) {
		// Display an error message if an exception occurs during database connection or query execution
		MessageBox::Show("Error connecting to the database: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	finally {
		// Close the database connection in the 'finally' block to ensure it's closed even if an exception occurs
		connection->Close();
	}
}

// Get user name based on role
String^ GetUserName(String^ ID, String^ role) {

	// Get the connection string from Constants class
	String^ connectionString = Constants::getdbConnString();

	// Create a new SqlConnection using the connection string
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		// Open the database connection
		connection->Open();
		String^ result;

		// Check the role and perform the corresponding database query
		if (role == "Professor") {
			String^ query = "SELECT name FROM dbo.Faculty WHERE faculty_ID = @facultyID";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@facultyID", ID);
			result = safe_cast<String^>(command->ExecuteScalar());
		}
		else if (role == "Student") {
			String^ query = "SELECT name FROM dbo.[Student Database] WHERE email_id = @studentID";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@studentID", ID + "@iitg.ac.in");
			result = safe_cast<String^>(command->ExecuteScalar());
		}

		// Return the user name
		return result;
	}
	catch (Exception^ ex) {
		// Display an error message if an exception occurs during database connection or query execution
		MessageBox::Show("Error connecting to the database: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return nullptr;
	}
	finally {
		// Close the database connection in the 'finally' block to ensure it's closed even if an exception occurs
		connection->Close();
	}
}

// Get user roll number
String^ GetRoll(String^ ID) {

	// Get the connection string from Constants class
	String^ connectionString = Constants::getdbConnString();

	// Create a new SqlConnection using the connection string
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		// Open the database connection
		connection->Open();
		String^ result;

		// Perform the database query to retrieve user roll number
		String^ query = "SELECT roll_no FROM dbo.[Student Database] WHERE email_id = @studentID";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->AddWithValue("@studentID", ID + "@iitg.ac.in");
		SqlDataReader^ reader = command->ExecuteReader();

		// Check if there is a result and retrieve the roll number
		if (reader->Read()) {
			int columnIndex = reader->GetOrdinal("roll_no");
			Object^ columnValue = reader->GetSqlValue(columnIndex);
			result = columnValue->ToString();
			return result;
		}
	}
	catch (Exception^ ex) {
		// Display an error message if an exception occurs during database connection or query execution
		MessageBox::Show("Error connecting to the database: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return nullptr;
	}
	finally {
		// Close the database connection in the 'finally' block to ensure it's closed even if an exception occurs
		connection->Close();
	}
}

// Get user year based on role
int GetUserYear(String^ ID, String^ role) {

	// Get the connection string from Constants class
	String^ connectionString = Constants::getdbConnString();

	// Create a new SqlConnection using the connection string
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		// Open the database connection
		connection->Open();
		int result;

		// Check the role and perform the corresponding database query
		if (role == "Student") {
			String^ query = "SELECT year FROM dbo.[Student Database] WHERE email_id = @studentID";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@studentID", ID + "@iitg.ac.in");
			result = safe_cast<int>(command->ExecuteScalar());
		}

		// Return the user's academic year
		return result;
	}
	catch (Exception^ ex) {
		// Display an error message if an exception occurs during database connection or query execution
		MessageBox::Show("Error connecting to the database: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return 0;
	}
	finally {
		// Close the database connection in the 'finally' block to ensure it's closed even if an exception occurs
		connection->Close();
	}
}

// Check if the string contains non-numeric characters
bool ContainsNonNumericCharacters(String^ str) {
	for each (Char c in str) {
		if (!Char::IsDigit(c)) {
			return true; // Found a non-numeric character
		}
	}
	return false; // All characters are numeric
}
