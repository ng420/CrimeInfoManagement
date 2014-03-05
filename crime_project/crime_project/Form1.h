#pragma once
#include "stdAfx.h"
#include "Form_Add.h"
#include "tchar.h"
#include "Form_viewall.h"
#include "login.h"
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
			this->label_welcomeuser = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_add
			// 
			this->button_add->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_add->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_add->Location = System::Drawing::Point(759, 369);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(103, 33);
			this->button_add->TabIndex = 0;
			this->button_add->Text = L"Add Record(s)";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &Form1::button_add_Click);
			// 
			// button_search
			// 
			this->button_search->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button_search->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_search->Location = System::Drawing::Point(408, 450);
			this->button_search->Name = L"button_search";
			this->button_search->Size = System::Drawing::Size(153, 30);
			this->button_search->TabIndex = 1;
			this->button_search->Text = L"Search";
			this->button_search->UseVisualStyleBackColor = true;
			this->button_search->Click += gcnew System::EventHandler(this, &Form1::button_search_Click);
			// 
			// button_viewall
			// 
			this->button_viewall->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_viewall->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_viewall->Location = System::Drawing::Point(759, 441);
			this->button_viewall->Name = L"button_viewall";
			this->button_viewall->Size = System::Drawing::Size(103, 33);
			this->button_viewall->TabIndex = 2;
			this->button_viewall->Text = L"View All";
			this->button_viewall->UseVisualStyleBackColor = true;
			this->button_viewall->Click += gcnew System::EventHandler(this, &Form1::button_viewall_Click);
			// 
			// label_searchby
			// 
			this->label_searchby->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label_searchby->AutoSize = true;
			this->label_searchby->BackColor = System::Drawing::Color::Transparent;
			this->label_searchby->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_searchby->ForeColor = System::Drawing::Color::Black;
			this->label_searchby->Location = System::Drawing::Point(12, 410);
			this->label_searchby->Name = L"label_searchby";
			this->label_searchby->Size = System::Drawing::Size(101, 24);
			this->label_searchby->TabIndex = 3;
			this->label_searchby->Text = L"Search By:";
			// 
			// comboBox_searchby
			// 
			this->comboBox_searchby->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->comboBox_searchby->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox_searchby->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox_searchby->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBox_searchby->FormattingEnabled = true;
			this->comboBox_searchby->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Category", L"Date", L"Location", L"Description", 
				L"Status", L"Suspects"});
			this->comboBox_searchby->Location = System::Drawing::Point(197, 409);
			this->comboBox_searchby->Name = L"comboBox_searchby";
			this->comboBox_searchby->Size = System::Drawing::Size(179, 32);
			this->comboBox_searchby->TabIndex = 4;
			// 
			// label_keyword
			// 
			this->label_keyword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label_keyword->AutoSize = true;
			this->label_keyword->BackColor = System::Drawing::Color::Transparent;
			this->label_keyword->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_keyword->ForeColor = System::Drawing::Color::Black;
			this->label_keyword->Location = System::Drawing::Point(12, 455);
			this->label_keyword->Name = L"label_keyword";
			this->label_keyword->Size = System::Drawing::Size(114, 24);
			this->label_keyword->TabIndex = 5;
			this->label_keyword->Text = L"Keyword(s):";
			// 
			// textBox_keyword
			// 
			this->textBox_keyword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->textBox_keyword->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_keyword->Location = System::Drawing::Point(197, 450);
			this->textBox_keyword->Name = L"textBox_keyword";
			this->textBox_keyword->Size = System::Drawing::Size(179, 32);
			this->textBox_keyword->TabIndex = 6;
			// 
			// button_logout
			// 
			this->button_logout->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_logout->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_logout->Location = System::Drawing::Point(759, 298);
			this->button_logout->Name = L"button_logout";
			this->button_logout->Size = System::Drawing::Size(103, 33);
			this->button_logout->TabIndex = 7;
			this->button_logout->Text = L"Logout";
			this->button_logout->UseVisualStyleBackColor = true;
			this->button_logout->Click += gcnew System::EventHandler(this, &Form1::button_logout_Click);
			// 
			// label_welcome
			// 
			this->label_welcome->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_welcome->AutoSize = true;
			this->label_welcome->BackColor = System::Drawing::Color::Transparent;
			this->label_welcome->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_welcome->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_welcome->ForeColor = System::Drawing::Color::Black;
			this->label_welcome->Location = System::Drawing::Point(199, 43);
			this->label_welcome->Name = L"label_welcome";
			this->label_welcome->Size = System::Drawing::Size(234, 49);
			this->label_welcome->TabIndex = 9;
			this->label_welcome->Text = L"Welcome: ";
			// 
			// label_welcomeuser
			// 
			this->label_welcomeuser->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_welcomeuser->AutoSize = true;
			this->label_welcomeuser->BackColor = System::Drawing::Color::Transparent;
			this->label_welcomeuser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_welcomeuser->ForeColor = System::Drawing::Color::Black;
			this->label_welcomeuser->Location = System::Drawing::Point(509, 43);
			this->label_welcomeuser->Name = L"label_welcomeuser";
			this->label_welcomeuser->Size = System::Drawing::Size(88, 49);
			this->label_welcomeuser->TabIndex = 11;
			this->label_welcomeuser->Text = L"XYZ";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(889, 498);
			this->ControlBox = false;
			this->Controls->Add(this->label_welcomeuser);
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
			this->Text = L"Form_main";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e);
//All the below button events and their functions are defined in the Form1.cpp file.
private: System::Void button_add_Click(System::Object^  sender, System::EventArgs^  e);		//add button allows user to go to a new form- Form_Add, various crime related can be stored in that form.
private: System::Void button_viewall_Click(System::Object^  sender, System::EventArgs^  e); //to view all records on criminal activities.
private: System::Void button_logout_Click(System::Object^  sender, System::EventArgs^  e);  //to logout from the current session
private: System::Void button_search_Click(System::Object^  sender, System::EventArgs^  e); //to search the keywords in textBox_keyword
};
}

