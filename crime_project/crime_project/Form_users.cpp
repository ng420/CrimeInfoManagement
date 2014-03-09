#include "StdAfx.h"
#include "Form_Add.h"
#include "Form1.h"
#include "Form_viewall.h"
#include "Form_admin.h"
#include "Form_users.h"
#include "dbconnect.h"

using namespace crime_project;
System::Void Form_users::dataGridView_users_VisibleChanged(System::Object^  sender, System::EventArgs^  e) 
{
	//display the datagrid view from the database.
	dbconnect db;
	dataGridView_users->DataSource = db.viewalluser();
	dataGridView_users->DataMember = "std";
	dataGridView_users->Refresh();
}

Void Form_users::button_adback_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	this->Close();	//close Form_users
	Form_admin^ f1 = gcnew Form_admin();
	f1->ShowDialog();							//show login form
}

Void Form_users::button_adusradd_Click(System::Object^  sender, System::EventArgs^  e) {
	//clear fields
	police_station_id->Text = "";
	user__id->Text = "";
	comboBox_utype->Text = "";
	textBox_password->Text = "";
	textBox_repassword->Text = "";
	
	//enable-disable various buttons/groupboxes
	button_adusradd->Enabled = false;
	button_adusrdel->Enabled = false;
	groupBox_allusers->Visible = false;
	groupBox_adduser->Visible = true;
}

Void Form_users::button_canceladd_Click(System::Object^  sender, System::EventArgs^  e) {
	//clear fields
	police_station_id->Text = "";
	user__id->Text = "";
	comboBox_utype->Text = "";
	textBox_password->Text = "";
	textBox_repassword->Text = "";
	
	button_adusradd->Enabled = true;
	button_adusrdel->Enabled = true;
	groupBox_allusers->Visible = true;
	groupBox_adduser->Visible = false;
	groupBox_deleteuser->Visible = false;
}

Void Form_users::button_usraddfinal_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (user__id->Text!="" && police_station_id->Text!="" && comboBox_utype->Text!="" && textBox_password->Text!="" && textBox_password->Text==textBox_repassword->Text)
	{
		dbconnect db;
		db.add_user(comboBox_utype->Text, police_station_id->Text, user__id->Text, textBox_password->Text);
		//clear fields
	police_station_id->Text = "";
	user__id->Text = "";
	comboBox_utype->Text = "";
	textBox_password->Text = "";
	textBox_repassword->Text = "";

		//enable-disable various buttons/groupboxes
		button_adusradd->Enabled = true;
		button_adusrdel->Enabled = true;
		groupBox_allusers->Visible = true;
		groupBox_adduser->Visible = false;
		groupBox_deleteuser->Visible = false;
	}
	else if(textBox_password->Text!=textBox_repassword->Text){
		MessageBox::Show("Passwords don't match. Please Re-enter the password","Admin",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
	}
	else{
		MessageBox::Show("Fields Not filled correctly. Please Re-enter","Admin",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
	}
}

//to delete a user from the database.
Void Form_users::button_adusrdel_Click(System::Object^  sender, System::EventArgs^  e) {
	//clear fields 
	police_st_id->Text = "";
	comboBox1->Text = "";
	us_id->Text = "";
	//enable-disable various buttons/group
	button_adusradd->Enabled = false;
	button_adusrdel->Enabled = false;
	groupBox_allusers->Visible = false;
	groupBox_adduser->Visible = false;
	groupBox_deleteuser->Visible = true;
}

//to finally delete user from the database
Void Form_users::button_userdelfinal_Click(System::Object^  sender, System::EventArgs^  e) {

	if (police_st_id->Text!="" &&  us_id->Text!="" && comboBox1->Text != "")
	{	
		
		dbconnect db;
		//pass the the text to del_user() functions which will find and delte the entry from the database.
		db.del_user(us_id->Text,police_st_id->Text,comboBox1->Text);
		//clear fields 
		police_st_id->Text = "";
		comboBox1->Text = "";
		us_id->Text = "";
		//various buttons and groupboxes are disabled and enabled.
		button_adusradd->Enabled = true;
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
	//clear fields 
	police_st_id->Text = "";
	comboBox1->Text = "";
	us_id->Text = "";
	//enable-disable various buttons/groupboxes
	button_adusradd->Enabled = true;
	button_adusrdel->Enabled = true;
	groupBox_allusers->Visible = true;
	groupBox_adduser->Visible = false;
	groupBox_deleteuser->Visible = false;
}

//to help user to fill fields.
Void Form_users::button_helpadd_Click(System::Object^  sender, System::EventArgs^  e) {

	MessageBox::Show("Enter data in proper fields and click on Add to add entry to database. Press Cancel to abort.");

}

//to help user to fill fields.
Void Form_users::button_helpdel_Click(System::Object^  sender, System::EventArgs^  e) {

	MessageBox::Show("Enter data in proper fields and click on Delete to delete entry from database. Press Cancel to abort.");

}