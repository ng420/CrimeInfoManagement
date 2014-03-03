#include "StdAfx.h"
#include "Form_Add.h"
#include "Form1.h"
#include "Form_viewall.h"
using namespace crime_project;

Void Form_viewall::button_back_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	Form_viewall::SetVisibleCore(false);
	Form1^ f6 = gcnew Form1();
	f6->ShowDialog();
}