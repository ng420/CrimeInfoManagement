#pragma once
#include "stdAfx.h"
#include "Form_Add.h"
#include "tchar.h"
namespace crime_project {
	//9814858345
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
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label_keyword;
	private: System::Windows::Forms::TextBox^  textBox_keyword;


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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label_keyword = (gcnew System::Windows::Forms::Label());
			this->textBox_keyword = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button_add
			// 
			this->button_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_add->Location = System::Drawing::Point(351, 280);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(109, 23);
			this->button_add->TabIndex = 0;
			this->button_add->Text = L"Add Record(s)";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &Form1::button_add_Click);
			// 
			// button_search
			// 
			this->button_search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_search->Location = System::Drawing::Point(30, 280);
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
			this->button_viewall->Location = System::Drawing::Point(479, 280);
			this->button_viewall->Name = L"button_viewall";
			this->button_viewall->Size = System::Drawing::Size(75, 23);
			this->button_viewall->TabIndex = 2;
			this->button_viewall->Text = L"View All";
			this->button_viewall->UseVisualStyleBackColor = true;
			// 
			// label_searchby
			// 
			this->label_searchby->AutoSize = true;
			this->label_searchby->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_searchby->Location = System::Drawing::Point(28, 196);
			this->label_searchby->Name = L"label_searchby";
			this->label_searchby->Size = System::Drawing::Size(77, 17);
			this->label_searchby->TabIndex = 3;
			this->label_searchby->Text = L"Search By:";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(117, 189);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 4;
			// 
			// label_keyword
			// 
			this->label_keyword->AutoSize = true;
			this->label_keyword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_keyword->Location = System::Drawing::Point(28, 238);
			this->label_keyword->Name = L"label_keyword";
			this->label_keyword->Size = System::Drawing::Size(83, 17);
			this->label_keyword->TabIndex = 5;
			this->label_keyword->Text = L"Keyword(s):";
			// 
			// textBox_keyword
			// 
			this->textBox_keyword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_keyword->Location = System::Drawing::Point(117, 232);
			this->textBox_keyword->Name = L"textBox_keyword";
			this->textBox_keyword->Size = System::Drawing::Size(121, 23);
			this->textBox_keyword->TabIndex = 6;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 315);
			this->Controls->Add(this->textBox_keyword);
			this->Controls->Add(this->label_keyword);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label_searchby);
			this->Controls->Add(this->button_viewall);
			this->Controls->Add(this->button_search);
			this->Controls->Add(this->button_add);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button_add_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 Form_Add^ f2 = gcnew Form_Add();
				 f2->ShowDialog();
			 }
};
}

