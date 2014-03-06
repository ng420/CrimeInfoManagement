#pragma once

namespace crime_project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_admin
	/// </summary>
	public ref class Form_admin : public System::Windows::Forms::Form
	{
	public:
		Form_admin(void)
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
		~Form_admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_adwelcome;
	protected: 
	private: System::Windows::Forms::Label^  label_adname;
	private: System::Windows::Forms::Label^  label_adsearchby;
	private: System::Windows::Forms::Label^  label_adkeyword;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button_adsearch;
	private: System::Windows::Forms::Button^  button_adlogout;
	private: System::Windows::Forms::Button^  button_aduser;
	private: System::Windows::Forms::Button^  button_adrecord;



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
			this->label_adwelcome = (gcnew System::Windows::Forms::Label());
			this->label_adname = (gcnew System::Windows::Forms::Label());
			this->label_adsearchby = (gcnew System::Windows::Forms::Label());
			this->label_adkeyword = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button_adsearch = (gcnew System::Windows::Forms::Button());
			this->button_adlogout = (gcnew System::Windows::Forms::Button());
			this->button_aduser = (gcnew System::Windows::Forms::Button());
			this->button_adrecord = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_adwelcome
			// 
			this->label_adwelcome->AutoSize = true;
			this->label_adwelcome->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_adwelcome->Location = System::Drawing::Point(199, 43);
			this->label_adwelcome->Name = L"label_adwelcome";
			this->label_adwelcome->Size = System::Drawing::Size(234, 49);
			this->label_adwelcome->TabIndex = 0;
			this->label_adwelcome->Text = L"Welcome :";
			// 
			// label_adname
			// 
			this->label_adname->AutoSize = true;
			this->label_adname->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_adname->Location = System::Drawing::Point(509, 43);
			this->label_adname->Name = L"label_adname";
			this->label_adname->Size = System::Drawing::Size(88, 49);
			this->label_adname->TabIndex = 1;
			this->label_adname->Text = L"XYZ";
			// 
			// label_adsearchby
			// 
			this->label_adsearchby->AutoSize = true;
			this->label_adsearchby->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_adsearchby->Location = System::Drawing::Point(12, 410);
			this->label_adsearchby->Name = L"label_adsearchby";
			this->label_adsearchby->Size = System::Drawing::Size(111, 25);
			this->label_adsearchby->TabIndex = 2;
			this->label_adsearchby->Text = L"Search By: ";
			// 
			// label_adkeyword
			// 
			this->label_adkeyword->AutoSize = true;
			this->label_adkeyword->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_adkeyword->Location = System::Drawing::Point(12, 455);
			this->label_adkeyword->Name = L"label_adkeyword";
			this->label_adkeyword->Size = System::Drawing::Size(120, 25);
			this->label_adkeyword->TabIndex = 3;
			this->label_adkeyword->Text = L"Keyword(s):";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(197, 409);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(179, 33);
			this->comboBox1->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(197, 450);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(179, 33);
			this->textBox1->TabIndex = 5;
			// 
			// button_adsearch
			// 
			this->button_adsearch->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_adsearch->Location = System::Drawing::Point(410, 452);
			this->button_adsearch->Name = L"button_adsearch";
			this->button_adsearch->Size = System::Drawing::Size(153, 30);
			this->button_adsearch->TabIndex = 6;
			this->button_adsearch->Text = L"Search";
			this->button_adsearch->UseVisualStyleBackColor = true;
			// 
			// button_adlogout
			// 
			this->button_adlogout->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_adlogout->Location = System::Drawing::Point(759, 298);
			this->button_adlogout->Name = L"button_adlogout";
			this->button_adlogout->Size = System::Drawing::Size(103, 33);
			this->button_adlogout->TabIndex = 7;
			this->button_adlogout->Text = L"Logout";
			this->button_adlogout->UseVisualStyleBackColor = true;
			this->button_adlogout->Click += gcnew System::EventHandler(this, &Form_admin::button_adlogout_Click);
			// 
			// button_aduser
			// 
			this->button_aduser->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_aduser->Location = System::Drawing::Point(759, 369);
			this->button_aduser->Name = L"button_aduser";
			this->button_aduser->Size = System::Drawing::Size(103, 33);
			this->button_aduser->TabIndex = 8;
			this->button_aduser->Text = L"Users";
			this->button_aduser->UseVisualStyleBackColor = true;
			this->button_aduser->Click += gcnew System::EventHandler(this, &Form_admin::button_aduser_Click);
			// 
			// button_adrecord
			// 
			this->button_adrecord->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_adrecord->Location = System::Drawing::Point(759, 441);
			this->button_adrecord->Name = L"button_adrecord";
			this->button_adrecord->Size = System::Drawing::Size(103, 33);
			this->button_adrecord->TabIndex = 9;
			this->button_adrecord->Text = L"Records";
			this->button_adrecord->UseVisualStyleBackColor = true;
			this->button_adrecord->Click += gcnew System::EventHandler(this, &Form_admin::button_adrecord_Click);
			// 
			// Form_admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(889, 498);
			this->ControlBox = false;
			this->Controls->Add(this->button_adrecord);
			this->Controls->Add(this->button_aduser);
			this->Controls->Add(this->button_adlogout);
			this->Controls->Add(this->button_adsearch);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label_adkeyword);
			this->Controls->Add(this->label_adsearchby);
			this->Controls->Add(this->label_adname);
			this->Controls->Add(this->label_adwelcome);
			this->Location = System::Drawing::Point(509, 43);
			this->Name = L"Form_admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form_admin";
			this->Load += gcnew System::EventHandler(this, &Form_admin::Form_admin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//All the below button events and their functions are defined in the Form_admin.cpp file.
private: System::Void Form_admin_Load(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_adlogout_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_aduser_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_adrecord_Click(System::Object^  sender, System::EventArgs^  e);
};
}
