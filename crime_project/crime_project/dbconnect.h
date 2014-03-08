#pragma once
#include "stdafx.h"
ref class dbconnect
{
public:
	MySqlConnection ^con;
	dbconnect(void);
	DataSet^ search(String^, String^);
	DataSet^ viewall();
	void add(String^ cat, String^ date,String^ time, String^ loc, String^ des,String^ evi,String^ susp);
	void add_user(String^ utype,String^ stationid, String^ userid, String^ pass);
	void del_user(String^ utype,String^ stationid, String^ userid);
	bool verify_user(String^ utype,String^ stationid, String^ userid, String^ password);
	DataSet^ viewalluser();
};

