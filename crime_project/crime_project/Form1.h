#pragma once
#include "stdAfx.h"
#include "Form_Add.h"
#include "tchar.h"
#include "Form_viewall.h"
namespace crime_project {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_add;
	private: System::Windows::Forms::Button^  button_search;
	protected: 

	protected: 

	private: System::Windows::Forms::Button^  button_viewall;
	private: System::Windows::Forms::Label^  label_searchby;
	private: System::Windows::Forms::ComboBox^  comboBox_searchby;

	private: System::Windows::Forms::Label^  label_keyword;
	private: System::Windows::Forms::TextBox^  textBox_keyword;
	private: System::Windows::Forms::Button^  button_logout;
	private: System::Windows::Forms::Label^  label_welcome;
	private: System::Windows::Forms::Button^  button_update;
	private: System::Windows::Forms::Label^  label_welcomeuser;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->button_search = (gcnew System::Windows::Forms::Button());
			this->button_viewall = (gcnew System::Windows::Forms::Button());
			this->label_searchby = (gcnew System::Windows::Forms::Label());
			this->comboBox_searchby = (gcnew System::Windows::Forms::ComboBox());
			this->label_keyword = (gcnew System::Windows::Forms::Label());
			this->textBox_keyword = (gcnew System::Windows::Forms::TextBox());
			this->button_logout = (gcnew System::Windows::Forms::Button());
			this->label_welcome = (gcnew System::Windows::Forms::Label());
			this->button_update = (gcnew System::Windows::Forms::Button());
			this->label_welcomeuser = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_add
			// 
			this->button_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_add->Location = System::Drawing::Point(606, 279);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(74, 25);
			this->button_add->TabIndex = 0;
			this->button_add->Text = L"Add Record(s)";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &Form1::button_add_Click);
			// 
			// button_search
			// 
			this->button_search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_search->Location = System::Drawing::Point(259, 369);
			this->button_search->Name = L"button_search";
			this->button_search->Size = System::Drawing::Size(75, 23);
			this->button_search->TabIndex = 1;
			this->button_search->Text = L"Search";
			this->button_search->UseVisualStyleBackColor = true;
			// 
			// button_viewall
			// 
			this->button_viewall->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_viewall->Location = System::Drawing::Point(606, 365);
			this->button_viewall->Name = L"button_viewall";
			this->button_viewall->Size = System::Drawing::Size(74, 25);
			this->button_viewall->TabIndex = 2;
			this->button_viewall->Text = L"View All";
			this->button_viewall->UseVisualStyleBackColor = true;
			this->button_viewall->Click += gcnew System::EventHandler(this, &Form1::button_viewall_Click);
			// 
			// label_searchby
			// 
			this->label_searchby->AutoSize = true;
			this->label_searchby->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_searchby->Location = System::Drawing::Point(19, 331);
			this->label_searchby->Name = L"label_searchby";
			this->label_searchby->Size = System::Drawing::Size(77, 17);
			this->label_searchby->TabIndex = 3;
			this->label_searchby->Text = L"Search By:";
			// 
			// comboBox_searchby
			// 
			this->comboBox_searchby->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox_searchby->FormattingEnabled = true;
			this->comboBox_searchby->Location = System::Drawing::Point(102, 331);
			this->comboBox_searchby->Name = L"comboBox_searchby";
			this->comboBox_searchby->Size = System::Drawing::Size(121, 24);
			this->comboBox_searchby->TabIndex = 4;
			// 
			// label_keyword
			// 
			this->label_keyword->AutoSize = true;
			this->label_keyword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_keyword->Location = System::Drawing::Point(19, 373);
			this->label_keyword->Name = L"label_keyword";
			this->label_keyword->Size = System::Drawing::Size(83, 17);
			this->label_keyword->TabIndex = 5;
			this->label_keyword->Text = L"Keyword(s):";
			// 
			// textBox_keyword
			// 
			this->textBox_keyword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_keyword->Location = System::Drawing::Point(102, 374);
			this->textBox_keyword->Name = L"textBox_keyword";
			this->textBox_keyword->Size = System::Drawing::Size(121, 23);
			this->textBox_keyword->TabIndex = 6;
			// 
			// button_logout
			// 
			this->button_logout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_logout->Location = System::Drawing::Point(607, 231);
			this->button_logout->Name = L"button_logout";
			this->button_logout->Size = System::Drawing::Size(74, 25);
			this->button_logout->TabIndex = 7;
			this->button_logout->Text = L"Logout";
			this->button_logout->UseVisualStyleBackColor = true;
			// 
			// label_welcome
			// 
			this->label_welcome->AutoSize = true;
			this->label_welcome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_welcome->Location = System::Drawing::Point(241, 55);
			this->label_welcome->Name = L"label_welcome";
			this->label_welcome->Size = System::Drawing::Size(168, 37);
			this->label_welcome->TabIndex = 9;
			this->label_welcome->Text = L"Welcome: ";
			// 
			// button_update
			// 
			this->button_update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_update->Location = System::Drawing::Point(606, 323);
			this->button_update->Name = L"button_update";
			this->button_update->Size = System::Drawing::Size(74, 25);
			this->button_update->TabIndex = 10;
			this->button_update->Text = L"Update";
			this->button_update->UseVisualStyleBackColor = true;
			this->button_update->Click += gcnew System::EventHandler(this, &Form1::button_update_Click);
			// 
			// label_welcomeuser
			// 
			this->label_welcomeuser->AutoSize = true;
			this->label_welcomeuser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_welcomeuser->Location = System::Drawing::Point(403, 55);
			this->label_welcomeuser->Name = L"label_welcomeuser";
			this->label_welcomeuser->Size = System::Drawing::Size(80, 37);
			this->label_welcomeuser->TabIndex = 11;
			this->label_welcomeuser->Text = L"XYZ";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 412);
			this->Controls->Add(this->label_welcomeuser);
			this->Controls->Add(this->button_update);
			this->Controls->Add(this->label_welcome);
			this->Controls->Add(this->button_logout);
			this->Controls->Add(this->textBox_keyword);
			this->Controls->Add(this->label_keyword);
			this->Controls->Add(this->comboBox_searchby);
			this->Controls->Add(this->label_searchby);
			this->Controls->Add(this->button_viewall);
			this->Controls->Add(this->button_search);
			this->Controls->Add(this->button_add);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
//add button allows user to go to a new form- Form_Add, various crime related can be stored in that form.
	private: System::Void button_add_Click(System::Object^  sender, System::EventArgs^  e);
//by update button, user can can add more suspects and evidences. Since it can only be updated, not removed, user should be careful before adding the contents into this form. 
private: System::Void button_update_Click(System::Object^  sender, System::EventArgs^  e){

		 }
private: System::Void button_viewall_Click(System::Object^  sender, System::EventArgs^  e);
};
}

