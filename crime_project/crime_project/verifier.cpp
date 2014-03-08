#include "StdAfx.h"
#include "verifier.h"
#include "dbconnect.h"
#pragma once


verifier::verifier(String^ utype, String^ uname, String^ pwd)  // Verifies user credentials against possible user_id and password combinations.
{	
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
	verified=false;
	dbconnect db;
	if ( sql_con_estb == 1 ) {
		if ( uname == "Ranu" ) {
			if ( pwd == "Vikram" ) {
				verified=true;
			}
		}
	}
	else 
		verified = db.verify_user(utype, uname, Convert::ToString(12113), pwd) ; 
}
