#include "StdAfx.h"
#include "Form_Add.h"
#include "Form1.h"
#include "Form_viewall.h"

using namespace crime_project;

//button_back is used to get back to the Form1
Void Form_viewall::button_back_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	this->Close();					//close Form_viewall											
	Form1^ f3 = gcnew Form1();
	f3->ShowDialog();				//show Form1				
}