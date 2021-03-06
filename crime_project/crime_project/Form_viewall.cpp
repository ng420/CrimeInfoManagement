#include "StdAfx.h"
#include "Form_Add.h"
#include "Form1.h"
#include "Form_viewall.h"
#include "dbconnect.h"
#include "Form_admin.h"
#pragma once

using namespace crime_project;


Void Form_viewall::Form_viewall_Load(System::Object^  sender, System::EventArgs^  e){
	if (boo1=true)
	{
		Form_viewall::panel_viewall->Visible=true;
		boo1=false;
	}
	else{
		Form_viewall::panel_viewall->Visible=false;
	}
}

//button_back is used to get back to the Form1
Void Form_viewall::button_back_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	this->Close();					//close Form_viewall		
	if ( use_type == "regular" ) { 
		Form1^ f3 = gcnew Form1();
		f3->ShowDialog();				//show Form1
	}
	else {
		Form_admin^ f3 = gcnew Form_admin();
		f3->ShowDialog();
	}
}

Form_viewall::Form_viewall(String^ user_type)
{	
	use_type = user_type;
	InitializeComponent();
	dbconnect db;
	dataGridView_records->DataSource = db.viewall();
	label_recsearchedby->Text = "";
	label_searchcategory->Text = "";
	label_searchkeyword->Text = "";
	label_reckeyword->Text = "";
	dataGridView_records->DataMember = "std";
	dataGridView_records->Refresh();
}

Form_viewall::Form_viewall(String^ query,String^ field, String^ user_type)
{
	use_type = user_type;
	InitializeComponent();
	dbconnect db;
	dataGridView_records->DataSource = db.search(query,field);
	label_recsearchedby->Text = "Search By:";
	label_searchcategory->Text = field;
	label_searchkeyword->Text = "Keyword:";
	label_reckeyword->Text = query;
	dataGridView_records->DataMember = "std";
	dataGridView_records->Refresh();
}