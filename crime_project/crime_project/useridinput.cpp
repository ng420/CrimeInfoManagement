#include "StdAfx.h"
#include "useridinput.h"
#include "Form_admin.h"
#include "Form_records.h"
#include "Form_Add.h"

using namespace crime_project;

//yet to change this operation
Void useridinput::button_ok_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox_userid->Text !="")
	{
		this->Hide();
		this->Close();								//close useridinput
		Form_Add^ f1 = gcnew Form_Add();
		f1->ShowDialog();							//show login form
		
	}
	else
	{
		
	}
}

Void useridinput::button_cancel_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	this->Close();	//close useridinput
	Form_records^ f1 = gcnew Form_records();
	f1->ShowDialog();							//show login form
	
}

