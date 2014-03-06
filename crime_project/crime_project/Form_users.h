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
	private: System::Windows::Forms::Label^  label_;
	private: System::Windows::Forms::DataGridView^  dataGridView_users;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  sno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  stationid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  enteries;




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
			this->label_ = (gcnew System::Windows::Forms::Label());
			this->dataGridView_users = (gcnew System::Windows::Forms::DataGridView());
			this->sno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->stationid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->enteries = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox_options->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_users))->BeginInit();
			this->SuspendLayout();
			// 
			// button_adback
			// 
			this->button_adback->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_adback->Location = System::Drawing::Point(8, 47);
			this->button_adback->Name = L"button_adback";
			this->button_adback->Size = System::Drawing::Size(93, 32);
			this->button_adback->TabIndex = 0;
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
			this->button_adusradd->TabIndex = 1;
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
			this->button_adusredit->TabIndex = 2;
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
			this->button_adusrdel->TabIndex = 3;
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
			// label_
			// 
			this->label_->AutoSize = true;
			this->label_->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_->Location = System::Drawing::Point(13, 104);
			this->label_->Name = L"label_";
			this->label_->Size = System::Drawing::Size(77, 20);
			this->label_->TabIndex = 5;
			this->label_->Text = L"All Users:";
			// 
			// dataGridView_users
			// 
			this->dataGridView_users->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_users->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_users->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->sno, 
				this->stationid, this->username, this->enteries});
			this->dataGridView_users->Location = System::Drawing::Point(12, 139);
			this->dataGridView_users->Name = L"dataGridView_users";
			this->dataGridView_users->Size = System::Drawing::Size(850, 45);
			this->dataGridView_users->TabIndex = 6;
			// 
			// sno
			// 
			this->sno->HeaderText = L"S.No.";
			this->sno->Name = L"sno";
			// 
			// stationid
			// 
			this->stationid->HeaderText = L"Police Station Ids";
			this->stationid->Name = L"stationid";
			// 
			// username
			// 
			this->username->HeaderText = L"Usernames";
			this->username->Name = L"username";
			// 
			// enteries
			// 
			this->enteries->HeaderText = L"No. of Enteries Made";
			this->enteries->Name = L"enteries";
			// 
			// Form_users
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(889, 498);
			this->ControlBox = false;
			this->Controls->Add(this->dataGridView_users);
			this->Controls->Add(this->label_);
			this->Controls->Add(this->groupBox_options);
			this->Name = L"Form_users";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form_users";
			this->groupBox_options->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_users))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button_adback_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_adusradd_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_adusrdel_Click(System::Object^  sender, System::EventArgs^  e){}
};
}
