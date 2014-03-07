#include "StdAfx.h"
#include "dbconnect.h"


dbconnect::dbconnect(void)
{
	con = gcnew MySqlConnection("");
	try
	{
		con->ConnectionString = "server=localhost;user id=root;password=r00tpass;persistsecurityinfo=True;database=crimedb";
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
	MessageBox::Show("Select * from crimetable where "+field+" like \'%"+query+"%\'");
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