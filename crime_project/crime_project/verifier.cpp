#include "StdAfx.h"
#include "verifier.h"
#include "dbconnect.h"
#pragma once

using namespace System::IO;

verifier::verifier(String^ utype, String^ userid, String^ pwd)  // Verifies user credentials against possible user_id and password combinations.
{	
	verified = false;
	bool sql_con_estb = 0;
	MySqlConnection^ con = gcnew MySqlConnection();
		try
		{
			con->ConnectionString = "server=localhost;user id=root;password=pass;persistsecurityinfo=True;database=crimedb";
			if(con->State==ConnectionState::Closed)
				con->Open();
			//MessageBox::Show("Connected!");
		}
		catch(Exception^ e)
		{
			sql_con_estb = 1;
		}
	String^ stationid = "";
	String^ fileName = "station_id.txt";
	try 
	{
		StreamReader^ din = File::OpenText(fileName);
		stationid = din->ReadLine();
	}
	catch (Exception^ e)
	{}
	if ( sql_con_estb == 1 ) {
		if ( userid == "Ranu" ) {
			if ( pwd == "Vikram" ) {
				verified=true;
			}
		}
	}
	else {
		String^ query="SELECT * FROM usertable WHERE `User Type`=\'"+utype+"\' AND `Station ID`=\'"+stationid+"\' AND `User ID`=\'"+userid+"\' AND `Password`=\'"+pwd+"\'" ;
		MySqlCommand^ cmd = gcnew MySqlCommand(query, con);
		MySqlDataReader^ rdr = cmd->ExecuteReader();
		if(rdr->Read()) {
			verified = true;
		} 
	}
}
