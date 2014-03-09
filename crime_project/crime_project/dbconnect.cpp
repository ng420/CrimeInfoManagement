#include "StdAfx.h"
#include "dbconnect.h"
#include "crypto.h"

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

DataSet^ dbconnect::search(String^ query,String^ field)
{
	//MessageBox::Show("Select * from crimetable where "+field+" like \'%"+query+"%\'");
	MySqlDataAdapter^ da;
	MessageBox::Show(field);
	if(field!="Users")
		da=gcnew MySqlDataAdapter("Select * from crimetable where "+field+" like \'%"+query+"%\'",con);
	else
		da=gcnew MySqlDataAdapter("Select * from usertable where `User ID` like \'%"+query+"%\'",con);
	auto ds=gcnew DataSet;
	da->Fill(ds,"std");
	int count = ds.tables[0].Rows.Count;
	for(int i=0;i<Count;i++){
	ds.tables[0].row[i]["Category"] = decrypt1(decrypt(ds.tables[0].row[i]["Category"]));
	ds.tables[0].row[i]["Location"] = decrypt1(decrypt(ds.tables[0].row[i]["Location"]));
	ds.tables[0].row[i]["Description"] = decrypt1(decrypt(ds.tables[0].row[i]["Description"]));
	ds.tables[0].row[i]["Evidence"] = decrypt1(decrypt(ds.tables[0].row[i]["Evidence"]));
	ds.tables[0].row[i]["Suspects"] = decrypt1(decrypt(ds.tables[0].row[i]["Suspects"]));
	}
	return ds;
}

DataSet^ dbconnect::viewall()
{
	auto da=gcnew MySqlDataAdapter("Select * from crimetable",con);
	auto ds=gcnew DataSet;
	da->Fill(ds,"std");
	int count = ds.tables[0].Rows.Count;
	for(int i=0;i<Count;i++){
	ds.tables[0].row[i]["Category"] = decrypt1(decrypt(ds.tables[0].row[i]["Category"]));
	ds.tables[0].row[i]["Location"] = decrypt1(decrypt(ds.tables[0].row[i]["Location"]));
	ds.tables[0].row[i]["Description"] = decrypt1(decrypt(ds.tables[0].row[i]["Description"]));
	ds.tables[0].row[i]["Evidence"] = decrypt1(decrypt(ds.tables[0].row[i]["Evidence"]));
	ds.tables[0].row[i]["Suspects"] = decrypt1(decrypt(ds.tables[0].row[i]["Suspects"]));
	}
	return ds;
}

DataSet^ dbconnect::viewalluser()
{
	auto da=gcnew MySqlDataAdapter("Select * from usertable",con);
	auto ds=gcnew DataSet;
	da->Fill(ds,"std");
	return ds;
}

void dbconnect::add(String^ cat1, String^ date,String^ time, String^ loc1, String^ des1,String^ evi1,String^ susp1)
{
	string^ cat = encrypt(encrypt1(cat1));
	string^ loc = encrypt(encrypt1(loc1));
	string^ des = encrypt(encrypt1(des1));
	string^ evi = encrypt(encrypt1(evi1));
	string^ susp = encrypt(encrypt1(susp1));
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

void dbconnect::del_user(String^ user_id,String^ stationid,String^ utype)
{
	String^ query="DELETE FROM usertable WHERE `User ID`=\'"+user_id+"\' AND `Station ID`=\'"+stationid+"\' AND `User Type`=\'"+utype+"\'" ;
	MySqlCommand^ cmd = gcnew MySqlCommand;
	MessageBox::Show(query);
	cmd->Connection = con;
    cmd->CommandText = query;
	//MessageBox::Show(query);
	if(cmd->ExecuteNonQuery()) MessageBox::Show("User Deleted Successfully from the database.","Admin", MessageBoxButtons::OK);
	else MessageBox::Show("Error Deleting Specified User.");
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