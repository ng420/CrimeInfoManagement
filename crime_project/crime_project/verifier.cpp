#include "StdAfx.h"
#include "verifier.h"
#include "dbconnect.h"
#include <ctime>
#include <cstdlib>
#pragma once

using namespace System::IO;

//Verifier
//For Secure User Verification
//Takes in User Type, User ID and Password, returns true if a user exists with such credentials


verifier::verifier(String^ utype, String^ userid, String^ pwd)  // Verifies user credentials against possible user_id and password combinations.
{	
	verified = false;
	bool sql_con_estb = 0;
	MySqlConnection^ con = gcnew MySqlConnection();
	//Establish Secure Connection
	try
	{
		con->ConnectionString = "server=localhost;user id=root;password=r00tpass;persistsecurityinfo=True;database=crimedb";
		if(con->State==ConnectionState::Closed)
			con->Open();
		//MessageBox::Show("Connected!");
	}
	catch(Exception^ e)
	{
		sql_con_estb = 1;
	}
	String^ stationid = "";
//Station ID is Embodied with software copy, written in station_id.txt
	String^ fileName = "station_id.txt";

	try 
	{
		StreamReader^ din = File::OpenText(fileName);
		stationid = din->ReadLine();
		if ( stationid == "" ) {
			srand((unsigned) time(NULL));
			int i = rand()%99991;
			din->Close();
			StreamWriter^ pin = gcnew StreamWriter(fileName);
			pin->Write(Convert::ToString(i));
			pin->Close();
		}
	}
	catch (Exception^ e)
	{
		e->ToString();
		srand((unsigned) time(NULL));
		int i = rand()%99991;
		StreamWriter^ pin = gcnew StreamWriter(fileName);
		pin->Write(Convert::ToString(i));
		pin->Close();
	}
//IF SQL Connection  is not established, Uname Ranu and Pwd Vikram are valid for development and debugging purposes.
	if ( sql_con_estb == 1 ) {
		if ( userid == "Ranu" ) {
			if ( pwd == "Vikram" ) {
				verified=true;
			}
		}
	}
	else {
// Prevention for SQL injection.
		if(userid->IndexOf('\'')!=-1 || stationid->IndexOf('\'')!=-1 || pwd->IndexOf('\'')!=-1) {verified=0;}
		else{
		String^ query="SELECT * FROM usertable WHERE `User Type`=\'"+utype+"\' AND `Station ID`=\'"+stationid+"\' AND `User ID`=\'"+userid+"\' AND `Password`=aes_encrypt\(\'"+pwd+"\',\'crime\'\)" ;
		MySqlCommand^ cmd = gcnew MySqlCommand(query, con);
		MySqlDataReader^ rdr = cmd->ExecuteReader();
		if(rdr->Read()) {
			verified = true;
		} }
	}
}
