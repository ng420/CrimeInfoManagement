#pragma once

namespace crime_project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for useridinput
	/// </summary>
	public ref class useridinput : public System::Windows::Forms::Form
	{
	public:
		useridinput(void)
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
		~useridinput()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox_entery;
	protected: 
	private: System::Windows::Forms::Button^  button_cancel;
	private: System::Windows::Forms::Button^  button_ok;
	private: System::Windows::Forms::TextBox^  textBox_userid;
	private: System::Windows::Forms::Label^  label_enterusrid;
	private: System::Windows::Forms::Label^  label_warning;

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
			this->groupBox_entery = (gcnew System::Windows::Forms::GroupBox());
			this->button_cancel = (gcnew System::Windows::Forms::Button());
			this->button_ok = (gcnew System::Windows::Forms::Button());
			this->textBox_userid = (gcnew System::Windows::Forms::TextBox());
			this->label_enterusrid = (gcnew System::Windows::Forms::Label());
			this->label_warning = (gcnew System::Windows::Forms::Label());
			this->groupBox_entery->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox_entery
			// 
			this->groupBox_entery->Controls->Add(this->button_cancel);
			this->groupBox_entery->Controls->Add(this->button_ok);
			this->groupBox_entery->Controls->Add(this->textBox_userid);
			this->groupBox_entery->Controls->Add(this->label_enterusrid);
			this->groupBox_entery->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox_entery->Location = System::Drawing::Point(24, 23);
			this->groupBox_entery->Name = L"groupBox_entery";
			this->groupBox_entery->Size = System::Drawing::Size(200, 136);
			this->groupBox_entery->TabIndex = 0;
			this->groupBox_entery->TabStop = false;
			this->groupBox_entery->Text = L"Enter Here";
			// 
			// button_cancel
			// 
			this->button_cancel->Location = System::Drawing::Point(101, 107);
			this->button_cancel->Name = L"button_cancel";
			this->button_cancel->Size = System::Drawing::Size(75, 23);
			this->button_cancel->TabIndex = 3;
			this->button_cancel->Text = L"Cancel";
			this->button_cancel->UseVisualStyleBackColor = true;
			this->button_cancel->Click += gcnew System::EventHandler(this, &useridinput::button_cancel_Click);
			// 
			// button_ok
			// 
			this->button_ok->Location = System::Drawing::Point(20, 107);
			this->button_ok->Name = L"button_ok";
			this->button_ok->Size = System::Drawing::Size(56, 23);
			this->button_ok->TabIndex = 2;
			this->button_ok->Text = L"OK";
			this->button_ok->UseVisualStyleBackColor = true;
			this->button_ok->Click += gcnew System::EventHandler(this, &useridinput::button_ok_Click);
			// 
			// textBox_userid
			// 
			this->textBox_userid->Location = System::Drawing::Point(100, 39);
			this->textBox_userid->Name = L"textBox_userid";
			this->textBox_userid->Size = System::Drawing::Size(94, 24);
			this->textBox_userid->TabIndex = 1;
			// 
			// label_enterusrid
			// 
			this->label_enterusrid->AutoSize = true;
			this->label_enterusrid->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_enterusrid->Location = System::Drawing::Point(7, 44);
			this->label_enterusrid->Name = L"label_enterusrid";
			this->label_enterusrid->Size = System::Drawing::Size(56, 17);
			this->label_enterusrid->TabIndex = 0;
			this->label_enterusrid->Text = L"User ID:";
			// 
			// label_warning
			// 
			this->label_warning->AutoSize = true;
			this->label_warning->Location = System::Drawing::Point(61, 166);
			this->label_warning->Name = L"label_warning";
			this->label_warning->Size = System::Drawing::Size(139, 13);
			this->label_warning->TabIndex = 1;
			this->label_warning->Text = L"Wrong User ID! Enter Again";
			this->label_warning->Visible = false;
			// 
			// useridinput
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(249, 193);
			this->ControlBox = false;
			this->Controls->Add(this->label_warning);
			this->Controls->Add(this->groupBox_entery);
			this->Name = L"useridinput";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"useridinput";
			this->groupBox_entery->ResumeLayout(false);
			this->groupBox_entery->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button_ok_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button_cancel_Click(System::Object^  sender, System::EventArgs^  e);
};
}
