#pragma once
#include "stdafx.h"
ref class dbconnect
{
public:
	MySqlConnection ^con;
	dbconnect(void);
	DataSet^ search(String^, String^);
	DataSet^ viewall();
};

