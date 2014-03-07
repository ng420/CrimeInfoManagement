#include "StdAfx.h"
#include "Form_admin.h"
#include "Form_records.h"
#include "Form_Add.h"

using namespace crime_project;

Void Form_records::button_recback_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	this->Close();	//close Form_records
	Form_admin^ f1 = gcnew Form_admin();
	f1->ShowDialog();							//show login form
}

Void Form_records::button_recadd_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	this->Close();	//close Form_records
	Form_Add^ f1 = gcnew Form_Add();
	f1->ShowDialog();							//show login form
}


Void Form_records::button_editrec_Click(System::Object^  sender, System::EventArgs^  e) {
								//show login form
}