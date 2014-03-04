#include "StdAfx.h"
#include "Form_Add.h"
#include "Form1.h"
#include "Form_viewall.h"
using namespace crime_project;

//add button allows user to go to a new form- Form_Add, various crime related can be stored in that form.
Void Form1::button_add_Click(System::Object^  sender, System::EventArgs^  e) {
	
	Form_Add^ f2 = gcnew Form_Add();
	f2->ShowDialog();							//show Form_Add
	Form1::SetVisibleCore(false);				//hide this form.
	this->Hide();
}

//to view all records on criminal activities.
Void Form1::button_viewall_Click(System::Object^  sender, System::EventArgs^  e) {
	
	Form_viewall^ f2 = gcnew Form_viewall();
	f2->ShowDialog();							//show Form_viewall
	Form1::SetVisibleCore(false);				//hide this form.
	this->Hide();
}

