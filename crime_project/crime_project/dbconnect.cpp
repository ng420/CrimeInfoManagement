#include "StdAfx.h"
#include "dbconnect.h"

/*	This file is base for all database connections and methods.
	Constructor establishes the connection to databse server.
																*/

dbconnect::dbconnect(void)
{
	con = gcnew MySqlConnection("");
	try
	{
		con->ConnectionString = "server=localhost;user id=root;password=r00tpass;persistsecurityinfo=True;database=crimedb";
		if(con->State==ConnectionState::Closed)
			con->Open();
		//MessageBox::Show("Connected!");
	}
	catch(Exception^ e)
	{
		MessageBox::Show("Couldn't Connect!" + e->ToString());
	}
}

//Search takes query and field, what to search and where to search.
//Returns dataset of search results.
//Resistant to SQL injection attacks.
DataSet^ dbconnect::search(String^ query,String^ field)
{
	//Declarations
	MySqlDataAdapter^ da;
	auto ds=gcnew DataSet;
	
	//Check for valid query 
	if(query->IndexOf('\'')!=-1) {MessageBox::Show("Invalid Query");da=gcnew MySqlDataAdapter("Select * from crimetable where 1=0",con);da->Fill(ds,"std");return ds;}
	
	//There might be problems with sql query, use try
	try{
		//Users are in different table
		//Hence use condition
		if(field!="Users")
			da=gcnew MySqlDataAdapter("Select * from crimetable where "+field+" like \'%"+query+"%\'",con);
		else
			da=gcnew MySqlDataAdapter("Select * from usertable where `User ID` like \'%"+query+"%\'",con);
	
		//fill retrieved results into dataset. 
		da->Fill(ds,"std");
	}
	catch(Exception^ e)
	{
		MessageBox::Show("Invalid Query");
	}
	//Return the built dataset.
	return ds;
}

//viewall()-> View All Records.
//Returns dataset.
DataSet^ dbconnect::viewall()
{
	auto da=gcnew MySqlDataAdapter("Select * from crimetable",con);
	auto ds=gcnew DataSet;
	da->Fill(ds,"std");
	return ds;
}

//View all Users.
//Returns dataset.
DataSet^ dbconnect::viewalluser()
{
	auto da=gcnew MySqlDataAdapter("Select * from usertable",con);
	auto ds=gcnew DataSet;
	da->Fill(ds,"std");
	return ds;
}

//Add Records.
//Takes the fields as input.
//Runs SQL query using ExecuteNonQuery.
void dbconnect::add(String^ cat, String^ date,String^ time, String^ loc, String^ des,String^ evi,String^ susp)
{
	String^ query="INSERT INTO crimetable (`Category`, `Date`, `Time`, `Location`, `Description`, `Evidence`, `Suspects`) VALUES ( \'"+cat+"\', \'"+date+"\', \'"+time+"\', \'"+loc+"\', \'"+des+"\', \'"+evi+"\', \'"+susp+"\')";
	MySqlCommand^ cmd = gcnew MySqlCommand;
	cmd->Connection = con;
    cmd->CommandText = query;
	//MessageBox::Show(query);
	cmd->ExecuteNonQuery();
}

//Add Records.
//Takes the fields as input.
//Runs SQL query using ExecuteNonQuery.
void dbconnect::add_user(String^ utype,String^ stationid, String^ userid, String^ pass)
{
	String^ query="INSERT INTO usertable (`User Type`,`Station ID`, `User ID`, `Password`) VALUES (\'"+utype+"\', \'"+stationid+"\', \'"+userid+"\', \'"+pass+"\')";
	
	//Make Query
	MySqlCommand^ cmd = gcnew MySqlCommand;
	cmd->Connection = con;
    cmd->CommandText = query;
	
	//Try to Add User.
	//If the User Already Exists, Show Error
	try{
	cmd->ExecuteNonQuery();
	}
	catch(Exception^ e)
	{
		MessageBox::Show("Unable to add User\n");
		e->ToString();
		return;
	}
	MessageBox::Show("User Added Successfully into the database.","Admin", MessageBoxButtons::OK);
}
//Add Records.
//Takes the fields as input.
//Runs SQL query using ExecuteNonQuery.
void dbconnect::del_user(String^ user_id,String^ stationid,String^ utype)
{
	String^ query="DELETE FROM usertable WHERE `User ID`=\'"+user_id+"\' AND `Station ID`=\'"+stationid+"\' AND `User Type`=\'"+utype+"\'" ;
	MySqlCommand^ cmd = gcnew MySqlCommand;
	MessageBox::Show(query);
	cmd->Connection = con;
    cmd->CommandText = query;
	
	//If the user does not exist, show error.
	if(cmd->ExecuteNonQuery()) MessageBox::Show("User Deleted Successfully from the database.","Admin", MessageBoxButtons::OK);
	else MessageBox::Show("Error Deleting Specified User.");
}

//Verify whether correct User Login received.
//Uses SQL Result>0 for verification
bool dbconnect::verify_user(String^ utype, String^ userid, String^ stationid,String^ password)
{
	if(userid->IndexOf('\'')!=-1 || stationid->IndexOf('\'')!=-1 || password->IndexOf('\'')!=-1) {MessageBox::Show("Invalid Query");return 0;}
	String^ query="SELECT * FROM usertable WHERE `User Type`=\'"+utype+"\' AND `Station ID`=\'"+stationid+"\' AND `User ID`=\'"+userid+"\'" ;
	MySqlCommand^ cmd = gcnew MySqlCommand;
	cmd->Connection = con;
    cmd->CommandText = query;
	//MessageBox::Show(query);
	if(cmd->ExecuteNonQuery()) return 1;
	else return 0;
}