#include "StdAfx.h"
#include "Form_Add.h"
#include "Form1.h"
#include "Form_viewall.h"
#include "Form_admin.h"
#include "Form_users.h"

using namespace crime_project;


Void Form_users::button_adback_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	this->Close();	//close Form_users
	Form_admin^ f1 = gcnew Form_admin();
	f1->ShowDialog();							//show login form
}

Void Form_users::button_adusradd_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	this->Close();	//close Form_users
	Form_admin^ f1 = gcnew Form_admin();
	f1->ShowDialog();							//show login form
}
