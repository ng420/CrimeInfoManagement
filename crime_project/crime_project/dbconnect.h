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
};

