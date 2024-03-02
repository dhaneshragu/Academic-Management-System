#include "stdafx.h"

#pragma once
#using <mscorlib.dll>
#using <System.Data.dll>
#using <System.dll>

// Include necessary headers for Windows Forms

#include<Windows.h>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
// Include necessary headers for C++ types
#include "Constants.h"


namespace Constants
{
	String^ getdbConnString()
	{
		String^ f = "Data Source=sql5075.site4now.net;Initial Catalog=db_aa52db_mainacaddb;Persist Security Info=True;User ID=db_aa52db_mainacaddb_admin;Password=swelab@123;Connect Timeout=60";
		return f;
	}

	// Function to render child form inside parent form
	void subViewChildForm(Panel^ parentpanel, Form^ childpanel) {
		parentpanel->Controls->Clear();
		childpanel->TopLevel = false;
		childpanel->FormBorderStyle = Windows::Forms::FormBorderStyle::None;
		childpanel->Dock = DockStyle::Fill;
		childpanel->BringToFront();
		parentpanel->Controls->Add(childpanel);
		childpanel->Show(); // Add to panel and show the child form
	}

	// To convert String^ to string
	std::string StrCnvstr(System::String ^ x) {
		return msclr::interop::marshal_as<std::string>(x);
	}

	// To convert string to String^
	System::String ^ strCnvStr(std::string x) {
		return msclr::interop::marshal_as<System::String ^>(x);
	}

	// to display image in a picture box of student
	void FetchAndDisplayImage(String^ rno, PictureBox^ pictureBox)
	{
		// Set up MSSQL Connection
		String^ connectionString = Constants::getdbConnString();
		System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);

		try
		{
			// Open the connection
			connection->Open();

			// Create a command to fetch image data based on roll number
			String^ commandText = "SELECT DP FROM [Student Database] WHERE roll_no = @RNo";
			System::Data::SqlClient::SqlCommand^ command = gcnew System::Data::SqlClient::SqlCommand(commandText, connection);
			command->Parameters->AddWithValue("@RNo", rno);

			// Execute the command
			System::Data::SqlClient::SqlDataReader^ reader = command->ExecuteReader();

			// Check if there is data
			if (reader->Read())
			{
				if (reader->IsDBNull(reader->GetOrdinal("DP"))) return;
				// Get the image data
				array<Byte>^ imageData = safe_cast<array<Byte>^>(reader["DP"]);

				// Check if the image data is not null
				if (imageData != nullptr && imageData->Length > 0)
				{
					// Convert the image data to MemoryStream
					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(imageData);

					// Create a Bitmap from the MemoryStream
					System::Drawing::Bitmap^ image = gcnew System::Drawing::Bitmap(ms);

					// Display the image in the PictureBox
					pictureBox->Image = image;
				}
			}
			else
			{
				// Handle the case where no data is found for the given roll number
				MessageBox::Show("No data found for the given roll number.");
			}
		}
		catch (System::Data::SqlClient::SqlException^ ex)
		{
			// Handle SQL Server exception
			MessageBox::Show(ex->Message);
		}
		finally
		{
			// Close the connection
			connection->Close();
		}
	}

	// to display image in a picture box of prof
	void FetchAndDisplayProfImage(String^ fac_id, PictureBox^ pictureBox)
	{
		// Set up MSSQL Connection
		String^ connectionString = Constants::getdbConnString();
		System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);

		try
		{
			// Open the connection
			connection->Open();

			// Create a command to fetch image data based on roll number
			String^ commandText = "SELECT DP FROM [Faculty] WHERE faculty_id = @facid";
			System::Data::SqlClient::SqlCommand^ command = gcnew System::Data::SqlClient::SqlCommand(commandText, connection);
			command->Parameters->AddWithValue("@facid", fac_id);

			// Execute the command
			System::Data::SqlClient::SqlDataReader^ reader = command->ExecuteReader();

			// Check if there is data
			if (reader->Read())
			{
				if (reader->IsDBNull(reader->GetOrdinal("DP"))) return;
				// Get the image data
				array<Byte>^ imageData = safe_cast<array<Byte>^>(reader["DP"]);

				// Check if the image data is not null
				if (imageData != nullptr && imageData->Length > 0)
				{
					// Convert the image data to MemoryStream
					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(imageData);

					// Create a Bitmap from the MemoryStream
					System::Drawing::Bitmap^ image = gcnew System::Drawing::Bitmap(ms);

					// Display the image in the PictureBox
					pictureBox->Image = image;
				}
			}
			else
			{
				// Handle the case where no data is found for the given fac_id
				MessageBox::Show("No data found for the given faculty.");
			}
		}
		catch (System::Data::SqlClient::SqlException^ ex)
		{
			// Handle SQL Server exception
			MessageBox::Show(ex->Message);
		}
		finally
		{
			// Close the connection
			connection->Close();
		}
	}
}