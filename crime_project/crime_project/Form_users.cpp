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
	button_adusradd->Enabled = false;
	button_adusredit->Enabled = false;
	button_adusrdel->Enabled = false;
	groupBox_allusers->Visible = false;
	groupBox_adduser->Visible = true;
}

Void Form_users::button_canceladd_Click(System::Object^  sender, System::EventArgs^  e) {
	button_adusradd->Enabled = true;
	button_adusredit->Enabled = true;
	button_adusrdel->Enabled = true;
	groupBox_allusers->Visible = true;
	groupBox_adduser->Visible = false;
	groupBox_deleteuser->Visible = false;
}

Void Form_users::button_usraddfinal_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (maskedTextBox_policeidadd->Text!="" && textBox_username->Text!="" && textBox_password->Text!="" && textBox_password->Text==textBox_repassword->Text)
	{
		MessageBox::Show("User Added Successfully into the database.","Admin", MessageBoxButtons::OK);
		button_adusradd->Enabled = true;
		button_adusredit->Enabled = true;
		button_adusrdel->Enabled = true;
		groupBox_allusers->Visible = true;
		groupBox_adduser->Visible = false;
		groupBox_deleteuser->Visible = true;
	}
	else if(textBox_password->Text!=textBox_repassword->Text){
		MessageBox::Show("Passwords don't match. Please Re-enter the password","Admin",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
	}
	else{
		MessageBox::Show("Fields Not filled correctly. Please Re-enter","Admin",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
	}
}

Void Form_users::button_adusrdel_Click(System::Object^  sender, System::EventArgs^  e) {
	button_adusradd->Enabled = false;
	button_adusredit->Enabled = false;
	button_adusrdel->Enabled = false;
	groupBox_allusers->Visible = false;
	groupBox_adduser->Visible = false;
	groupBox_deleteuser->Visible = true;
}

Void Form_users::button_userdelfinal_Click(System::Object^  sender, System::EventArgs^  e) {

	if (maskedTextBox_policeiddel->Text!="" &&  maskedTextBox_useriddel->Text!="")
	{
		MessageBox::Show("User Deleted Successfully from the database.","Admin", MessageBoxButtons::OK);
		button_adusradd->Enabled = true;
		button_adusredit->Enabled = true;
		button_adusrdel->Enabled = true;
		groupBox_allusers->Visible = true;
		groupBox_adduser->Visible = false;
		groupBox_deleteuser->Visible = false;
	}
	else{
		MessageBox::Show("Fields Not filled correctly. Please Re-enter","Admin",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
	}
}

Void Form_users::button_canceldel_Click(System::Object^  sender, System::EventArgs^  e) {
	button_adusradd->Enabled = true;
	button_adusredit->Enabled = true;
	button_adusrdel->Enabled = true;
	groupBox_allusers->Visible = true;
	groupBox_adduser->Visible = false;
	groupBox_deleteuser->Visible = false;
}