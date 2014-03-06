#include "StdAfx.h"
#include "Form_Add.h"
#include "login.h"
#include "Form1.h"
#include "Form_viewall.h"
#include "Form_records.h"

using namespace crime_project;

//this button event allows user to cancel and go to the Form1 on single click.   
void Form_Add::button_cancel_Click(System::Object^  sender, System::EventArgs^  e){
			
			if (login::usertype=="Regular")
			{
				this->Hide();
				this->Close();					//close Form_Add 
				Form1^ f1 = gcnew Form1();
				f1->ShowDialog();				//show Form1, the main form once the user logs in.
			}
			else
			{
				this->Hide();
				this->Close();					//close Form_Add 
				Form_records^ f1 = gcnew Form_records();
				f1->ShowDialog();				//show Form1, the main form once the user logs in.
			}
			if (Form_records::boo = true)
			{
				this->Hide();
				this->Close();					//close Form_Add 
				Form_records^ f1 = gcnew Form_records();
				f1->ShowDialog();				//show Form1, the main form once the user logs in.
				Form_records::boo = false;
			}
}

//after filling all the necessary fields, click on this button to add all the data to the database.
void Form_Add::button_done_Click(System::Object^  sender, System::EventArgs^  e){
	// crime location, category and description are necessary fields to be filled
	if (comboBox_category->Text==""||textBox_place->Text==""||textBox_description->Text=="") //if condition to check that whether location, category and description of the crime is defined or not.
	{
		MessageBox::Show("Some fields are not filled. Please fill.");  //if all fields are not filled, display message. 
	}
	else
	{   // if all fields are filled perform below operations.
		MessageBox::Show("Record Added.");
		if (login::usertype=="Regular")
		{
			this->Hide();
			this->Close();					//close Form_Add 
			Form1^ f1 = gcnew Form1();
			f1->ShowDialog();				//show Form1, the main form once the user logs in.
		}
		else
		{
			this->Hide();
			this->Close();					//close Form_Add 
			Form_records^ f1 = gcnew Form_records();
			f1->ShowDialog();				//show Form_record
		}
		if (Form_records::boo = true)
		{
			this->Hide();
			this->Close();					//close Form_Add 
			Form_records^ f1 = gcnew Form_records();
			f1->ShowDialog();				//show Form1, the main form once the user logs in.
			Form_records::boo = false;
		}
	}
}

//this button event allows to upload any file that can be used as an evidence on single click.
void Form_Add::button_upload_Click(System::Object^  sender, System::EventArgs^  e){
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;			//open the dialog box and allows to select which file to upload
	openFileDialog1->ShowDialog();
	textBox_evidence->Text = openFileDialog1->FileName;				//file path and its name are stored and displayed in textBox_evidence
}

//this button event allows user to add evidences of the crime activity on single click.
void Form_Add::button_addevidence_Click(System::Object^  sender, System::EventArgs^  e){
	//first assign textBox_evidence.Text to the database.
	textBox_evidence->Text = "";     //clear the textBox_evidence's text field.
}

//this button event allows user to add suspects to the database on single click.
void Form_Add::button_addsuspect_Click(System::Object^  sender, System::EventArgs^  e){
	//first assign textBox_suspect.Text to the database.
	textBox_suspect->Text = "";		//clear the textBox_suspect's text field.
}


//this button event allows user to add a new criminal activity record and the details into the database on single click.
void Form_Add::button_addmore_Click(System::Object^  sender, System::EventArgs^  e){
    
	//crime location, category and description are necessary fields to be filled
	if (comboBox_category->Text==""||textBox_place->Text==""||textBox_description->Text=="") //if condition to check that whether location, category and description of the crime is defined or not.
	{
		MessageBox::Show("Some fields are not filled. Please fill.");  //if all fields are not filled, display message. 
	}
	else
	{   // if all fields are filled perform below operations.
		MessageBox::Show("Record Added. New Record to be added.");
		//clear all the following fields before entering new a record.
		comboBox_category->Text = "";
		textBox_place->Text = "";
		textBox_evidence->Text = "";
		textBox_suspect->Text = "";
		textBox_description->Text = "";
	}
}