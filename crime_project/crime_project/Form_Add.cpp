#include "StdAfx.h"
#include "Form_Add.h"
#include "Form1.h"
using namespace crime_project;
void Form_Add::button_cancel_Click(System::Object^  sender, System::EventArgs^  e){
			 this->Hide();
			 Form1^ f1 = gcnew Form1();
			 f1->ShowDialog();
		 }