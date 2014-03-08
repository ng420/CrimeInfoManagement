#pragma once

namespace crime_project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_users
	/// </summary>
	public ref class Form_users : public System::Windows::Forms::Form
	{
	public:
		Form_users(void)
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
		~Form_users()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_adback;
	private: System::Windows::Forms::Button^  button_adusradd;
	private: System::Windows::Forms::Button^  button_adusredit;
	private: System::Windows::Forms::Button^  button_adusrdel;
	private: System::Windows::Forms::GroupBox^  groupBox_options;

	private: System::Windows::Forms::DataGridView^  dataGridView_users;
	private: System::Windows::Forms::GroupBox^  groupBox_allusers;
	private: System::Windows::Forms::GroupBox^  groupBox_adduser;
	private: System::Windows::Forms::Button^  button_canceladd;
	private: System::Windows::Forms::Button^  button_usraddfinal;
	private: System::Windows::Forms::Button^  button_helpadd;
	private: System::Windows::Forms::TextBox^  textBox_repassword;
	private: System::Windows::Forms::TextBox^  textBox_password;
	private: System::Windows::Forms::TextBox^  textBox_username;
	private: System::Windows::Forms::Label^  label_viewrepass;
	private: System::Windows::Forms::Label^  label_viewpassword;
	private: System::Windows::Forms::Label^  label_viewusername;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox_policeidadd;


	private: System::Windows::Forms::Label^  label_addby;
	private: System::Windows::Forms::Label^  label_viewuseridadd;
	private: System::Windows::Forms::Label^  label_viewpoliceidadd;
	private: System::Windows::Forms::Label^  label_viewaddby;
	private: System::Windows::Forms::Label^  label_useridadd;
	private: System::Windows::Forms::GroupBox^  groupBox_deleteuser;
	private: System::Windows::Forms::Button^  button_canceldel;
	private: System::Windows::Forms::Button^  button_userdelfinal;
	private: System::Windows::Forms::Button^  button_helpdel;


	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox_useriddel;
	private: System::Windows::Forms::Label^  label_viewuseriddel;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox_policeiddel;
	private: System::Windows::Forms::Label^  label_viewpoliceiddel;










	protected: 

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
			this->button_adback = (gcnew System::Windows::Forms::Button());
			this->button_adusradd = (gcnew System::Windows::Forms::Button());
			this->button_adusredit = (gcnew System::Windows::Forms::Button());
			this->button_adusrdel = (gcnew System::Windows::Forms::Button());
			this->groupBox_options = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView_users = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox_allusers = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_adduser = (gcnew System::Windows::Forms::GroupBox());
			this->label_useridadd = (gcnew System::Windows::Forms::Label());
			this->button_canceladd = (gcnew System::Windows::Forms::Button());
			this->button_usraddfinal = (gcnew System::Windows::Forms::Button());
			this->button_helpadd = (gcnew System::Windows::Forms::Button());
			this->textBox_repassword = (gcnew System::Windows::Forms::TextBox());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->textBox_username = (gcnew System::Windows::Forms::TextBox());
			this->label_viewrepass = (gcnew System::Windows::Forms::Label());
			this->label_viewpassword = (gcnew System::Windows::Forms::Label());
			this->label_viewusername = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox_policeidadd = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label_addby = (gcnew System::Windows::Forms::Label());
			this->label_viewuseridadd = (gcnew System::Windows::Forms::Label());
			this->label_viewpoliceidadd = (gcnew System::Windows::Forms::Label());
			this->label_viewaddby = (gcnew System::Windows::Forms::Label());
			this->groupBox_deleteuser = (gcnew System::Windows::Forms::GroupBox());
			this->button_canceldel = (gcnew System::Windows::Forms::Button());
			this->button_userdelfinal = (gcnew System::Windows::Forms::Button());
			this->button_helpdel = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox_useriddel = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label_viewuseriddel = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox_policeiddel = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label_viewpoliceiddel = (gcnew System::Windows::Forms::Label());
			this->groupBox_options->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_users))->BeginInit();
			this->groupBox_allusers->SuspendLayout();
			this->groupBox_adduser->SuspendLayout();
			this->groupBox_deleteuser->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_adback
			// 
			this->button_adback->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_adback->Location = System::Drawing::Point(8, 47);
			this->button_adback->Name = L"button_adback";
			this->button_adback->Size = System::Drawing::Size(93, 32);
			this->button_adback->TabIndex = 1;
			this->button_adback->Text = L"Back";
			this->button_adback->UseVisualStyleBackColor = true;
			this->button_adback->Click += gcnew System::EventHandler(this, &Form_users::button_adback_Click);
			// 
			// button_adusradd
			// 
			this->button_adusradd->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_adusradd->Location = System::Drawing::Point(333, 47);
			this->button_adusradd->Name = L"button_adusradd";
			this->button_adusradd->Size = System::Drawing::Size(161, 32);
			this->button_adusradd->TabIndex = 2;
			this->button_adusradd->Text = L"Add New User";
			this->button_adusradd->UseVisualStyleBackColor = true;
			this->button_adusradd->Click += gcnew System::EventHandler(this, &Form_users::button_adusradd_Click);
			// 
			// button_adusredit
			// 
			this->button_adusredit->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_adusredit->Location = System::Drawing::Point(511, 47);
			this->button_adusredit->Name = L"button_adusredit";
			this->button_adusredit->Size = System::Drawing::Size(161, 32);
			this->button_adusredit->TabIndex = 3;
			this->button_adusredit->Text = L"Edit User Info";
			this->button_adusredit->UseVisualStyleBackColor = true;
			// 
			// button_adusrdel
			// 
			this->button_adusrdel->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_adusrdel->Location = System::Drawing::Point(679, 47);
			this->button_adusrdel->Name = L"button_adusrdel";
			this->button_adusrdel->Size = System::Drawing::Size(161, 32);
			this->button_adusrdel->TabIndex = 4;
			this->button_adusrdel->Text = L"Delete User";
			this->button_adusrdel->UseVisualStyleBackColor = true;
			this->button_adusrdel->Click += gcnew System::EventHandler(this, &Form_users::button_adusrdel_Click);
			// 
			// groupBox_options
			// 
			this->groupBox_options->Controls->Add(this->button_adusradd);
			this->groupBox_options->Controls->Add(this->button_adusrdel);
			this->groupBox_options->Controls->Add(this->button_adback);
			this->groupBox_options->Controls->Add(this->button_adusredit);
			this->groupBox_options->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox_options->Location = System::Drawing::Point(12, 12);
			this->groupBox_options->Name = L"groupBox_options";
			this->groupBox_options->Size = System::Drawing::Size(850, 85);
			this->groupBox_options->TabIndex = 4;
			this->groupBox_options->TabStop = false;
			this->groupBox_options->Text = L"Options";
			// 
			// dataGridView_users
			// 
			this->dataGridView_users->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_users->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_users->Location = System::Drawing::Point(6, 32);
			this->dataGridView_users->Name = L"dataGridView_users";
			this->dataGridView_users->Size = System::Drawing::Size(834, 46);
			this->dataGridView_users->TabIndex = 6;
			// 
			// groupBox_allusers
			// 
			this->groupBox_allusers->Controls->Add(this->dataGridView_users);
			this->groupBox_allusers->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox_allusers->Location = System::Drawing::Point(12, 113);
			this->groupBox_allusers->Name = L"groupBox_allusers";
			this->groupBox_allusers->Size = System::Drawing::Size(850, 96);
			this->groupBox_allusers->TabIndex = 5;
			this->groupBox_allusers->TabStop = false;
			this->groupBox_allusers->Text = L"All Users";
			// 
			// groupBox_adduser
			// 
			this->groupBox_adduser->Controls->Add(this->label_useridadd);
			this->groupBox_adduser->Controls->Add(this->button_canceladd);
			this->groupBox_adduser->Controls->Add(this->button_usraddfinal);
			this->groupBox_adduser->Controls->Add(this->button_helpadd);
			this->groupBox_adduser->Controls->Add(this->textBox_repassword);
			this->groupBox_adduser->Controls->Add(this->textBox_password);
			this->groupBox_adduser->Controls->Add(this->textBox_username);
			this->groupBox_adduser->Controls->Add(this->label_viewrepass);
			this->groupBox_adduser->Controls->Add(this->label_viewpassword);
			this->groupBox_adduser->Controls->Add(this->label_viewusername);
			this->groupBox_adduser->Controls->Add(this->maskedTextBox_policeidadd);
			this->groupBox_adduser->Controls->Add(this->label_addby);
			this->groupBox_adduser->Controls->Add(this->label_viewuseridadd);
			this->groupBox_adduser->Controls->Add(this->label_viewpoliceidadd);
			this->groupBox_adduser->Controls->Add(this->label_viewaddby);
			this->groupBox_adduser->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox_adduser->Location = System::Drawing::Point(8, 136);
			this->groupBox_adduser->Name = L"groupBox_adduser";
			this->groupBox_adduser->Size = System::Drawing::Size(854, 203);
			this->groupBox_adduser->TabIndex = 8;
			this->groupBox_adduser->TabStop = false;
			this->groupBox_adduser->Text = L"Add New User";
			this->groupBox_adduser->Visible = false;
			// 
			// label_useridadd
			// 
			this->label_useridadd->AutoSize = true;
			this->label_useridadd->Location = System::Drawing::Point(152, 139);
			this->label_useridadd->Name = L"label_useridadd";
			this->label_useridadd->Size = System::Drawing::Size(48, 17);
			this->label_useridadd->TabIndex = 15;
			this->label_useridadd->Text = L"12321";
			// 
			// button_canceladd
			// 
			this->button_canceladd->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_canceladd->Location = System::Drawing::Point(700, 162);
			this->button_canceladd->Name = L"button_canceladd";
			this->button_canceladd->Size = System::Drawing::Size(75, 23);
			this->button_canceladd->TabIndex = 12;
			this->button_canceladd->Text = L"Cancel";
			this->button_canceladd->UseVisualStyleBackColor = true;
			this->button_canceladd->Click += gcnew System::EventHandler(this, &Form_users::button_canceladd_Click);
			// 
			// button_usraddfinal
			// 
			this->button_usraddfinal->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_usraddfinal->Location = System::Drawing::Point(700, 125);
			this->button_usraddfinal->Name = L"button_usraddfinal";
			this->button_usraddfinal->Size = System::Drawing::Size(75, 23);
			this->button_usraddfinal->TabIndex = 11;
			this->button_usraddfinal->Text = L"Add";
			this->button_usraddfinal->UseVisualStyleBackColor = true;
			this->button_usraddfinal->Click += gcnew System::EventHandler(this, &Form_users::button_usraddfinal_Click);
			// 
			// button_helpadd
			// 
			this->button_helpadd->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_helpadd->Location = System::Drawing::Point(700, 88);
			this->button_helpadd->Name = L"button_helpadd";
			this->button_helpadd->Size = System::Drawing::Size(75, 23);
			this->button_helpadd->TabIndex = 10;
			this->button_helpadd->Text = L"Help";
			this->button_helpadd->UseVisualStyleBackColor = true;
			// 
			// textBox_repassword
			// 
			this->textBox_repassword->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_repassword->Location = System::Drawing::Point(478, 160);
			this->textBox_repassword->Name = L"textBox_repassword";
			this->textBox_repassword->PasswordChar = '*';
			this->textBox_repassword->Size = System::Drawing::Size(100, 24);
			this->textBox_repassword->TabIndex = 9;
			// 
			// textBox_password
			// 
			this->textBox_password->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_password->Location = System::Drawing::Point(478, 124);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->PasswordChar = '*';
			this->textBox_password->Size = System::Drawing::Size(100, 24);
			this->textBox_password->TabIndex = 8;
			// 
			// textBox_username
			// 
			this->textBox_username->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_username->Location = System::Drawing::Point(478, 88);
			this->textBox_username->Name = L"textBox_username";
			this->textBox_username->Size = System::Drawing::Size(100, 24);
			this->textBox_username->TabIndex = 7;
			// 
			// label_viewrepass
			// 
			this->label_viewrepass->AutoSize = true;
			this->label_viewrepass->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_viewrepass->Location = System::Drawing::Point(342, 167);
			this->label_viewrepass->Name = L"label_viewrepass";
			this->label_viewrepass->Size = System::Drawing::Size(122, 17);
			this->label_viewrepass->TabIndex = 8;
			this->label_viewrepass->Text = L"Re-Type Password:";
			// 
			// label_viewpassword
			// 
			this->label_viewpassword->AutoSize = true;
			this->label_viewpassword->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_viewpassword->Location = System::Drawing::Point(387, 131);
			this->label_viewpassword->Name = L"label_viewpassword";
			this->label_viewpassword->Size = System::Drawing::Size(69, 17);
			this->label_viewpassword->TabIndex = 7;
			this->label_viewpassword->Text = L"Password:";
			// 
			// label_viewusername
			// 
			this->label_viewusername->AutoSize = true;
			this->label_viewusername->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_viewusername->Location = System::Drawing::Point(383, 95);
			this->label_viewusername->Name = L"label_viewusername";
			this->label_viewusername->Size = System::Drawing::Size(73, 17);
			this->label_viewusername->TabIndex = 6;
			this->label_viewusername->Text = L"Username:";
			// 
			// maskedTextBox_policeidadd
			// 
			this->maskedTextBox_policeidadd->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->maskedTextBox_policeidadd->Location = System::Drawing::Point(155, 88);
			this->maskedTextBox_policeidadd->Mask = L"00000";
			this->maskedTextBox_policeidadd->Name = L"maskedTextBox_policeidadd";
			this->maskedTextBox_policeidadd->Size = System::Drawing::Size(100, 24);
			this->maskedTextBox_policeidadd->TabIndex = 6;
			this->maskedTextBox_policeidadd->ValidatingType = System::Int32::typeid;
			// 
			// label_addby
			// 
			this->label_addby->AutoSize = true;
			this->label_addby->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_addby->Location = System::Drawing::Point(425, 32);
			this->label_addby->Name = L"label_addby";
			this->label_addby->Size = System::Drawing::Size(45, 24);
			this->label_addby->TabIndex = 3;
			this->label_addby->Text = L"XYZ";
			// 
			// label_viewuseridadd
			// 
			this->label_viewuseridadd->AutoSize = true;
			this->label_viewuseridadd->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_viewuseridadd->Location = System::Drawing::Point(75, 139);
			this->label_viewuseridadd->Name = L"label_viewuseridadd";
			this->label_viewuseridadd->Size = System::Drawing::Size(56, 17);
			this->label_viewuseridadd->TabIndex = 2;
			this->label_viewuseridadd->Text = L"User ID:";
			// 
			// label_viewpoliceidadd
			// 
			this->label_viewpoliceidadd->AutoSize = true;
			this->label_viewpoliceidadd->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_viewpoliceidadd->Location = System::Drawing::Point(22, 95);
			this->label_viewpoliceidadd->Name = L"label_viewpoliceidadd";
			this->label_viewpoliceidadd->Size = System::Drawing::Size(109, 17);
			this->label_viewpoliceidadd->TabIndex = 1;
			this->label_viewpoliceidadd->Text = L"Police Station ID:";
			// 
			// label_viewaddby
			// 
			this->label_viewaddby->AutoSize = true;
			this->label_viewaddby->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_viewaddby->Location = System::Drawing::Point(318, 32);
			this->label_viewaddby->Name = L"label_viewaddby";
			this->label_viewaddby->Size = System::Drawing::Size(101, 24);
			this->label_viewaddby->TabIndex = 0;
			this->label_viewaddby->Text = L"Added By:";
			// 
			// groupBox_deleteuser
			// 
			this->groupBox_deleteuser->Controls->Add(this->button_canceldel);
			this->groupBox_deleteuser->Controls->Add(this->button_userdelfinal);
			this->groupBox_deleteuser->Controls->Add(this->button_helpdel);
			this->groupBox_deleteuser->Controls->Add(this->maskedTextBox_useriddel);
			this->groupBox_deleteuser->Controls->Add(this->label_viewuseriddel);
			this->groupBox_deleteuser->Controls->Add(this->maskedTextBox_policeiddel);
			this->groupBox_deleteuser->Controls->Add(this->label_viewpoliceiddel);
			this->groupBox_deleteuser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox_deleteuser->Location = System::Drawing::Point(8, 369);
			this->groupBox_deleteuser->Name = L"groupBox_deleteuser";
			this->groupBox_deleteuser->Size = System::Drawing::Size(850, 160);
			this->groupBox_deleteuser->TabIndex = 9;
			this->groupBox_deleteuser->TabStop = false;
			this->groupBox_deleteuser->Text = L"Delete User:";
			this->groupBox_deleteuser->Visible = false;
			// 
			// button_canceldel
			// 
			this->button_canceldel->Location = System::Drawing::Point(700, 101);
			this->button_canceldel->Name = L"button_canceldel";
			this->button_canceldel->Size = System::Drawing::Size(75, 23);
			this->button_canceldel->TabIndex = 18;
			this->button_canceldel->Text = L"Cancel";
			this->button_canceldel->UseVisualStyleBackColor = true;
			this->button_canceldel->Click += gcnew System::EventHandler(this, &Form_users::button_canceldel_Click);
			// 
			// button_userdelfinal
			// 
			this->button_userdelfinal->Location = System::Drawing::Point(700, 65);
			this->button_userdelfinal->Name = L"button_userdelfinal";
			this->button_userdelfinal->Size = System::Drawing::Size(75, 23);
			this->button_userdelfinal->TabIndex = 7;
			this->button_userdelfinal->Text = L"Delete";
			this->button_userdelfinal->UseVisualStyleBackColor = true;
			this->button_userdelfinal->Click += gcnew System::EventHandler(this, &Form_users::button_userdelfinal_Click);
			// 
			// button_helpdel
			// 
			this->button_helpdel->Location = System::Drawing::Point(700, 29);
			this->button_helpdel->Name = L"button_helpdel";
			this->button_helpdel->Size = System::Drawing::Size(75, 23);
			this->button_helpdel->TabIndex = 17;
			this->button_helpdel->Text = L"Help";
			this->button_helpdel->UseVisualStyleBackColor = true;
			// 
			// maskedTextBox_useriddel
			// 
			this->maskedTextBox_useriddel->Location = System::Drawing::Point(462, 62);
			this->maskedTextBox_useriddel->Mask = L"00000";
			this->maskedTextBox_useriddel->Name = L"maskedTextBox_useriddel";
			this->maskedTextBox_useriddel->Size = System::Drawing::Size(100, 22);
			this->maskedTextBox_useriddel->TabIndex = 15;
			this->maskedTextBox_useriddel->ValidatingType = System::Int32::typeid;
			// 
			// label_viewuseriddel
			// 
			this->label_viewuseriddel->AutoSize = true;
			this->label_viewuseriddel->Location = System::Drawing::Point(387, 65);
			this->label_viewuseriddel->Name = L"label_viewuseriddel";
			this->label_viewuseriddel->Size = System::Drawing::Size(56, 16);
			this->label_viewuseriddel->TabIndex = 2;
			this->label_viewuseriddel->Text = L"User ID:";
			// 
			// maskedTextBox_policeiddel
			// 
			this->maskedTextBox_policeiddel->Location = System::Drawing::Point(154, 62);
			this->maskedTextBox_policeiddel->Mask = L"00000";
			this->maskedTextBox_policeiddel->Name = L"maskedTextBox_policeiddel";
			this->maskedTextBox_policeiddel->Size = System::Drawing::Size(100, 22);
			this->maskedTextBox_policeiddel->TabIndex = 14;
			this->maskedTextBox_policeiddel->ValidatingType = System::Int32::typeid;
			// 
			// label_viewpoliceiddel
			// 
			this->label_viewpoliceiddel->AutoSize = true;
			this->label_viewpoliceiddel->Location = System::Drawing::Point(39, 68);
			this->label_viewpoliceiddel->Name = L"label_viewpoliceiddel";
			this->label_viewpoliceiddel->Size = System::Drawing::Size(109, 16);
			this->label_viewpoliceiddel->TabIndex = 0;
			this->label_viewpoliceiddel->Text = L"Police Station ID:";
			// 
			// Form_users
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(889, 498);
			this->ControlBox = false;
			this->Controls->Add(this->groupBox_deleteuser);
			this->Controls->Add(this->groupBox_adduser);
			this->Controls->Add(this->groupBox_allusers);
			this->Controls->Add(this->groupBox_options);
			this->Name = L"Form_users";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form_users";
			this->Load += gcnew System::EventHandler(this, &Form_users::Form_users_Load);
			this->groupBox_options->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_users))->EndInit();
			this->groupBox_allusers->ResumeLayout(false);
			this->groupBox_adduser->ResumeLayout(false);
			this->groupBox_adduser->PerformLayout();
			this->groupBox_deleteuser->ResumeLayout(false);
			this->groupBox_deleteuser->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button_adback_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_adusradd_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_adusrdel_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_canceladd_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_usraddfinal_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_userdelfinal_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_canceldel_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void Form_users_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
