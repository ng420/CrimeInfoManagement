#pragma once
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::Types;
	using namespace MySql::Data::MySqlClient;
ref class dbconnect
{
public:
	MySqlConnection ^con;
	dbconnect(void);
	DataSet^ search(String^, String^);
	DataSet^ viewall();
};

