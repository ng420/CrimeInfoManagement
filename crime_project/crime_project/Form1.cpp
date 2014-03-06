#include "StdAfx.h"
#include "Form_Add.h"
#include "Form1.h"
#include "Form_viewall.h"
using namespace crime_project;

//add button allows user to go to a new form- Form_Add, various crime related can be stored in that form.
Void Form1::button_add_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	Form_Add^ f2 = gcnew Form_Add();
	f2->ShowDialog();							//show Form_Add
}

//to view all records on criminal activities.
Void Form1::button_viewall_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();								//hide Form1
	Form_viewall^ f2 = gcnew Form_viewall();
	f2->ShowDialog();							//show Form_viewall
}

//to logout from current session
Void Form1::button_logout_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	this->Close();	//close Form1
	login^ f1 = gcnew login();
	f1->ShowDialog();							//show login form
}

//to search the keywords in textBox_keyword
Void Form1::button_search_Click(System::Object^  sender, System::EventArgs^  e) {
	//search function yet to be defined
	this->Hide();								//hide Form1
	Form_viewall^ f2 = gcnew Form_viewall();
	f2->ShowDialog();							//show Form_viewall
}

