#include "StdAfx.h"
#include "login.h"
#include "verifier.h"
#include "Form1.h"
#pragma once

using namespace crime_project;

Void login::log_in_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ a = this->user_type_select->Text;  // Store text from all boxes in variables a, b and c.
				 String^ b = this->user_id->Text;
				 String^ c = this->pass->Text;
				 verifier^ vf = gcnew verifier(a, b, c);    // Create vf object of class verifier to verify against user credentials from database.
				 if (vf->verified == true) {
					 this->Visible = false;					// Hide login form
					 Form1^ form1  = gcnew Form1();			// New instance of Form1
					 form1->ShowDialog();					// Show new Form1
				 }
				 else {
					 this->fail_status->Text = "Incorrect User Credentials";
					 this->user_id->Text = "";
					 this->pass->Text = "";
				 }
}
