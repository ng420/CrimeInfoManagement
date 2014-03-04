#include "StdAfx.h"
#include "Form_Add.h"
#include "Form1.h"
#include "Form_viewall.h"

using namespace crime_project;

//button_back is used to get back to the Form1
Void Form_viewall::button_back_Click(System::Object^  sender, System::EventArgs^  e) {
												
	Form1^ f6 = gcnew Form1();
	f6->ShowDialog();										//show Form1				
	Form_viewall::SetVisibleCore(false);					//set visibility of this form to false	
	this->Close();											//close this form i.e. Form_viewall
}