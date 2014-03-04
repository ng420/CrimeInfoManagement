#include "StdAfx.h"
#include "Form_Add.h"
#include "Form1.h"
#include "Form_viewall.h"

using namespace crime_project;
void Form_Add::button_cancel_Click(System::Object^  sender, System::EventArgs^  e){
			//this->Close();
			Form1^ f1 = gcnew Form1();
			f1->ShowDialog(); 
			this->Close();
			Form_Add::SetVisibleCore(false);
}

void Form_Add::button_done_Click(System::Object^  sender, System::EventArgs^  e){
	
	if (comboBox_category->Text==""||textBox_place->Text==""||textBox_description->Text=="")
	{
		MessageBox::Show("Some fields are not filled. Please fill.");
	}
	else
	{   
		MessageBox::Show("Record Added.");
		this->Hide();
		Form1^ f1 = gcnew Form1();
		f1->ShowDialog();
		Form_Add::SetVisibleCore(false);	 
	}
}

void Form_Add::button_upload_Click(System::Object^  sender, System::EventArgs^  e){
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->ShowDialog();
	textBox_evidence->Text = openFileDialog1->FileName;
}
void Form_Add::button_addevidence_Click(System::Object^  sender, System::EventArgs^  e){
	//first assign textBox_evidence.Text to the database.
	textBox_evidence->Text = "";
}

void Form_Add::button_addsuspect_Click(System::Object^  sender, System::EventArgs^  e){
	//first assign textBox_suspect.Text to the database.
	textBox_suspect->Text = "";
}