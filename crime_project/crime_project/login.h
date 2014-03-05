#pragma once

namespace crime_project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  log_in;
	protected: 

	private: System::Windows::Forms::Label^  user_name;
	private: System::Windows::Forms::TextBox^  user_id;
	protected: 


	private: System::Windows::Forms::ComboBox^  user_type_select;

	private: System::Windows::Forms::Label^  password;
	private: System::Windows::Forms::Label^  user_type;
	private: System::Windows::Forms::TextBox^  pass;
	private: System::Windows::Forms::Label^  fail_status;






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
			this->log_in = (gcnew System::Windows::Forms::Button());
			this->user_name = (gcnew System::Windows::Forms::Label());
			this->user_id = (gcnew System::Windows::Forms::TextBox());
			this->user_type_select = (gcnew System::Windows::Forms::ComboBox());
			this->password = (gcnew System::Windows::Forms::Label());
			this->user_type = (gcnew System::Windows::Forms::Label());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->fail_status = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// log_in
			// 
			this->log_in->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->log_in->Location = System::Drawing::Point(305, 254);
			this->log_in->Name = L"log_in";
			this->log_in->Size = System::Drawing::Size(121, 27);
			this->log_in->TabIndex = 0;
			this->log_in->Text = L"Log In";
			this->log_in->UseVisualStyleBackColor = true;
			this->log_in->Click += gcnew System::EventHandler(this, &login::log_in_Click);
			// 
			// user_name
			// 
			this->user_name->AutoSize = true;
			this->user_name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->user_name->Location = System::Drawing::Point(139, 121);
			this->user_name->Name = L"user_name";
			this->user_name->Size = System::Drawing::Size(85, 19);
			this->user_name->TabIndex = 1;
			this->user_name->Text = L"User Name";
			// 
			// user_id
			// 
			this->user_id->Location = System::Drawing::Point(305, 122);
			this->user_id->Name = L"user_id";
			this->user_id->Size = System::Drawing::Size(121, 20);
			this->user_id->TabIndex = 2;
			// 
			// user_type_select
			// 
			this->user_type_select->FormattingEnabled = true;
			this->user_type_select->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Admin", L"Regular"});
			this->user_type_select->Location = System::Drawing::Point(305, 66);
			this->user_type_select->Name = L"user_type_select";
			this->user_type_select->Size = System::Drawing::Size(121, 21);
			this->user_type_select->TabIndex = 3;
			this->user_type_select->Text = L"Regular";
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(139, 184);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(72, 19);
			this->password->TabIndex = 4;
			this->password->Text = L"Password";
			// 
			// user_type
			// 
			this->user_type->AutoSize = true;
			this->user_type->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->user_type->Location = System::Drawing::Point(139, 65);
			this->user_type->Name = L"user_type";
			this->user_type->Size = System::Drawing::Size(78, 19);
			this->user_type->TabIndex = 5;
			this->user_type->Text = L"User Type";
			// 
			// pass
			// 
			this->pass->Location = System::Drawing::Point(305, 183);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(121, 20);
			this->pass->TabIndex = 6;
			// 
			// fail_status
			// 
			this->fail_status->AutoSize = true;
			this->fail_status->Location = System::Drawing::Point(302, 327);
			this->fail_status->Name = L"fail_status";
			this->fail_status->Size = System::Drawing::Size(0, 13);
			this->fail_status->TabIndex = 7;
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(720, 379);
			this->Controls->Add(this->fail_status);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->user_type);
			this->Controls->Add(this->password);
			this->Controls->Add(this->user_type_select);
			this->Controls->Add(this->user_id);
			this->Controls->Add(this->user_name);
			this->Controls->Add(this->log_in);
			this->Name = L"login";
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void login_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void log_in_Click(System::Object^  sender, System::EventArgs^  e);
};
}
