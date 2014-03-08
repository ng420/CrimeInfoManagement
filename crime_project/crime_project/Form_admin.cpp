#include "StdAfx.h"
#include "Form_admin.h"
#include "Form_users.h"
#include "login.h"
#include "Form_Add.h"
#include "Form_records.h"
#include "Form_viewall.h"

using namespace crime_project;


Void Form_admin::button_adsearch_Click(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox_searchadmin->Text==""||textBox_adkeyword->Text=="")
	{
		label_adwarn->Visible = true;
	}
	else{
		this->Hide();
		this->Close();	//close Form_admin
		Form_viewall^ f1 = gcnew Form_viewall(textBox_adkeyword->Text, comboBox_searchadmin->Text, "admin");
		f1->ShowDialog();							//show login form
	}
}

//to logout from current session
Void Form_admin::button_adlogout_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	this->Close();	//close Form_admin
	login^ f1 = gcnew login();
	f1->ShowDialog();							//show login form
}

Void Form_admin::button_aduser_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	Form_users^ f2 = gcnew Form_users();
	f2->ShowDialog();							//show Form_users
}

Void Form_admin::button_adrecord_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	Form_records^ f2 = gcnew Form_records();
	f2->ShowDialog();							//show Form_records
}
