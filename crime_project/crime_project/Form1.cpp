#include "StdAfx.h"
#include "Form_Add.h"
#include "Form1.h"
using namespace crime_project;
Void Form1::button_add_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 Form1::SetVisibleCore(false);
				 Form_Add^ f2 = gcnew Form_Add();
				 f2->ShowDialog();
			 }