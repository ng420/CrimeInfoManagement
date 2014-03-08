#include "StdAfx.h"
#include "dbconnect.h"


dbconnect::dbconnect(void)
{
	con = gcnew MySqlConnection("");
	try
	{
		con->ConnectionString = "server=localhost;user id=root;password=pass;persistsecurityinfo=True;database=crimedb";
		if(con->State==ConnectionState::Closed)
			con->Open();
		MessageBox::Show("Connected!");
	}
	catch(Exception^ e)
	{
		MessageBox::Show("Couldn't Connect!" + e->ToString());
	}
}

DataSet^ dbconnect::search(String^ query,String^ field)
{
	//MessageBox::Show("Select * from crimetable where "+field+" like \'%"+query+"%\'");
	auto da=gcnew MySqlDataAdapter("Select * from crimetable where "+field+" like \'%"+query+"%\'",con);
	auto ds=gcnew DataSet;
	da->Fill(ds,"std");
	return ds;
}

DataSet^ dbconnect::viewall()
{
	auto da=gcnew MySqlDataAdapter("Select * from crimetable",con);
	auto ds=gcnew DataSet;
	da->Fill(ds,"std");
	return ds;
}

DataSet^ dbconnect::viewalluser()
{
	auto da=gcnew MySqlDataAdapter("Select * from usertable",con);
	auto ds=gcnew DataSet;
	da->Fill(ds,"std");
	return ds;
}

void dbconnect::add(String^ cat, String^ date,String^ time, String^ loc, String^ des,String^ evi,String^ susp)
{
	String^ query="INSERT INTO crimetable (`Category`, `Date`, `Time`, `Location`, `Description`, `Evidence`, `Suspects`) VALUES ( \'"+cat+"\', \'"+date+"\', \'"+time+"\', \'"+loc+"\', \'"+des+"\', \'"+evi+"\', \'"+susp+"\')";
	MySqlCommand^ cmd = gcnew MySqlCommand;
	cmd->Connection = con;
    cmd->CommandText = query;
	//MessageBox::Show(query);
	cmd->ExecuteNonQuery();
}


void dbconnect::add_user(String^ utype,String^ stationid, String^ userid, String^ pass)
{
	String^ query="INSERT INTO usertable (`User Type`,`Station ID`, `User ID`, `Password`) VALUES (\'"+utype+"\', \'"+stationid+"\', \'"+userid+"\', \'"+pass+"\')";
	MySqlCommand^ cmd = gcnew MySqlCommand;
	cmd->Connection = con;
    cmd->CommandText = query;
	//MessageBox::Show(query);
	cmd->ExecuteNonQuery();
}

void dbconnect::del_user(String^ utype,String^ stationid, String^ userid)
{
	String^ query="DELETE FROM usertable WHERE `User Type`=\'"+utype+" AND `Station ID`=\'"+stationid+"\' AND `User ID`=\'"+userid+"\'" ;
	MySqlCommand^ cmd = gcnew MySqlCommand;
	cmd->Connection = con;
    cmd->CommandText = query;
	//MessageBox::Show(query);
	cmd->ExecuteNonQuery();
}

bool dbconnect::verify_user(String^ utype, String^ userid, String^ stationid,String^ password)
{
	String^ query="SELECT * FROM usertable WHERE `User Type`=\'"+utype+"\' AND `Station ID`=\'"+stationid+"\' AND `User ID`=\'"+userid+"\'" ;
	MySqlCommand^ cmd = gcnew MySqlCommand;
	cmd->Connection = con;
    cmd->CommandText = query;
	//MessageBox::Show(query);
	if(cmd->ExecuteNonQuery()) return 1;
	else return 0;
}