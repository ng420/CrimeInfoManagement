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
	private: System::Windows::Forms::PictureBox^  pictureBox_welcom;
	private: System::Windows::Forms::Button^  button_exit;






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
			this->pictureBox_welcom = (gcnew System::Windows::Forms::PictureBox());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox_welcom))->BeginInit();
			this->SuspendLayout();
			// 
			// log_in
			// 
			this->log_in->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->log_in->Location = System::Drawing::Point(247, 425);
			this->log_in->Name = L"log_in";
			this->log_in->Size = System::Drawing::Size(121, 31);
			this->log_in->TabIndex = 0;
			this->log_in->Text = L"Log In";
			this->log_in->UseVisualStyleBackColor = true;
			this->log_in->Click += gcnew System::EventHandler(this, &login::log_in_Click);
			// 
			// user_name
			// 
			this->user_name->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->user_name->Location = System::Drawing::Point(284, 279);
			this->user_name->Name = L"user_name";
			this->user_name->Size = System::Drawing::Size(143, 20);
			this->user_name->TabIndex = 1;
			this->user_name->Text = L"User Name         :";
			// 
			// user_id
			// 
			this->user_id->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->user_id->Location = System::Drawing::Point(461, 276);
			this->user_id->Name = L"user_id";
			this->user_id->Size = System::Drawing::Size(121, 28);
			this->user_id->TabIndex = 2;
			// 
			// user_type_select
			// 
			this->user_type_select->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->user_type_select->FormattingEnabled = true;
			this->user_type_select->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Admin", L"Regular"});
			this->user_type_select->Location = System::Drawing::Point(461, 217);
			this->user_type_select->Name = L"user_type_select";
			this->user_type_select->Size = System::Drawing::Size(121, 28);
			this->user_type_select->TabIndex = 3;
			this->user_type_select->Text = L"Regular";
			// 
			// password
			// 
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(284, 338);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(160, 20);
			this->password->TabIndex = 4;
			this->password->Text = L"Password            :";
			// 
			// user_type
			// 
			this->user_type->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->user_type->Location = System::Drawing::Point(284, 220);
			this->user_type->Name = L"user_type";
			this->user_type->Size = System::Drawing::Size(143, 20);
			this->user_type->TabIndex = 5;
			this->user_type->Text = L"User Type           :";
			// 
			// pass
			// 
			this->pass->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pass->Location = System::Drawing::Point(461, 335);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(121, 28);
			this->pass->TabIndex = 6;
			// 
			// fail_status
			// 
			this->fail_status->AutoSize = true;
			this->fail_status->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fail_status->Location = System::Drawing::Point(300, 170);
			this->fail_status->Name = L"fail_status";
			this->fail_status->Size = System::Drawing::Size(0, 20);
			this->fail_status->TabIndex = 7;
			// 
			// pictureBox_welcom
			// 
			this->pictureBox_welcom->Location = System::Drawing::Point(169, 12);
			this->pictureBox_welcom->Name = L"pictureBox_welcom";
			this->pictureBox_welcom->Size = System::Drawing::Size(503, 117);
			this->pictureBox_welcom->TabIndex = 8;
			this->pictureBox_welcom->TabStop = false;
			// 
			// button_exit
			// 
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_exit->Location = System::Drawing::Point(416, 425);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(121, 31);
			this->button_exit->TabIndex = 9;
			this->button_exit->Text = L"Exit";
			this->button_exit->UseVisualStyleBackColor = true;
			this->button_exit->Click += gcnew System::EventHandler(this, &login::button_exit_Click);
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(889, 498);
			this->ControlBox = false;
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->pictureBox_welcom);
			this->Controls->Add(this->fail_status);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->user_type);
			this->Controls->Add(this->password);
			this->Controls->Add(this->user_type_select);
			this->Controls->Add(this->user_id);
			this->Controls->Add(this->user_name);
			this->Controls->Add(this->log_in);
			this->Name = L"login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox_welcom))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void login_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void log_in_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_exit_Click(System::Object^  sender, System::EventArgs^  e);
};
}
