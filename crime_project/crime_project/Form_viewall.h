#pragma once

namespace crime_project {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_viewall
	/// </summary>
	public ref class Form_viewall : public System::Windows::Forms::Form
	{
	public: static bool^ boo1=false;
	public:
		Form_viewall(String^);
		Form_viewall(String^,String^, String^);
		String^ use_type;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form_viewall()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	protected: 
	private: System::Windows::Forms::Button^  button_back;
	private: System::Windows::Forms::Label^  label_allrecords;
	private: System::Windows::Forms::DataGridView^  dataGridView_records;
	private: System::Windows::Forms::Label^  label_recsearchedby;
	private: System::Windows::Forms::Label^  label_searchcategory;
	private: System::Windows::Forms::Label^  label_searchkeyword;
	private: System::Windows::Forms::Label^  label_reckeyword;
	private: System::Windows::Forms::Panel^  panel_viewall;

	private: 


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
			this->button_back = (gcnew System::Windows::Forms::Button());
			this->label_allrecords = (gcnew System::Windows::Forms::Label());
			this->dataGridView_records = (gcnew System::Windows::Forms::DataGridView());
			this->label_recsearchedby = (gcnew System::Windows::Forms::Label());
			this->label_searchcategory = (gcnew System::Windows::Forms::Label());
			this->label_searchkeyword = (gcnew System::Windows::Forms::Label());
			this->label_reckeyword = (gcnew System::Windows::Forms::Label());
			this->panel_viewall = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_records))->BeginInit();
			this->panel_viewall->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_back
			// 
			this->button_back->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_back->Location = System::Drawing::Point(760, 19);
			this->button_back->Name = L"button_back";
			this->button_back->Size = System::Drawing::Size(91, 31);
			this->button_back->TabIndex = 6;
			this->button_back->Text = L"Back";
			this->button_back->UseVisualStyleBackColor = true;
			this->button_back->Click += gcnew System::EventHandler(this, &Form_viewall::button_back_Click);
			// 
			// label_allrecords
			// 
			this->label_allrecords->AutoSize = true;
			this->label_allrecords->BackColor = System::Drawing::Color::Transparent;
			this->label_allrecords->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 20.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_allrecords->ForeColor = System::Drawing::Color::Black;
			this->label_allrecords->Location = System::Drawing::Point(12, 19);
			this->label_allrecords->Name = L"label_allrecords";
			this->label_allrecords->Size = System::Drawing::Size(156, 35);
			this->label_allrecords->TabIndex = 7;
			this->label_allrecords->Text = L"All Records";
			// 
			// dataGridView_records
			// 
			this->dataGridView_records->AllowUserToAddRows = false;
			this->dataGridView_records->AllowUserToDeleteRows = false;
			this->dataGridView_records->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_records->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_records->Location = System::Drawing::Point(18, 130);
			this->dataGridView_records->Name = L"dataGridView_records";
			this->dataGridView_records->ReadOnly = true;
			this->dataGridView_records->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView_records->Size = System::Drawing::Size(833, 334);
			this->dataGridView_records->TabIndex = 8;
			this->dataGridView_records->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form_viewall::dataGridView1_CellContentClick);
			// 
			// label_recsearchedby
			// 
			this->label_recsearchedby->AutoSize = true;
			this->label_recsearchedby->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_recsearchedby->Location = System::Drawing::Point(3, 11);
			this->label_recsearchedby->Name = L"label_recsearchedby";
			this->label_recsearchedby->Size = System::Drawing::Size(105, 20);
			this->label_recsearchedby->TabIndex = 9;
			this->label_recsearchedby->Text = L"Searched By:";
			// 
			// label_searchcategory
			// 
			this->label_searchcategory->AutoSize = true;
			this->label_searchcategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_searchcategory->Location = System::Drawing::Point(114, 11);
			this->label_searchcategory->Name = L"label_searchcategory";
			this->label_searchcategory->Size = System::Drawing::Size(76, 20);
			this->label_searchcategory->TabIndex = 10;
			this->label_searchcategory->Text = L"abcdefgh";
			// 
			// label_searchkeyword
			// 
			this->label_searchkeyword->AutoSize = true;
			this->label_searchkeyword->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_searchkeyword->Location = System::Drawing::Point(357, 11);
			this->label_searchkeyword->Name = L"label_searchkeyword";
			this->label_searchkeyword->Size = System::Drawing::Size(78, 20);
			this->label_searchkeyword->TabIndex = 11;
			this->label_searchkeyword->Text = L"Keyword:";
			// 
			// label_reckeyword
			// 
			this->label_reckeyword->AutoSize = true;
			this->label_reckeyword->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_reckeyword->Location = System::Drawing::Point(441, 11);
			this->label_reckeyword->Name = L"label_reckeyword";
			this->label_reckeyword->Size = System::Drawing::Size(63, 20);
			this->label_reckeyword->TabIndex = 12;
			this->label_reckeyword->Text = L"uvwxyz";
			// 
			// panel_viewall
			// 
			this->panel_viewall->Controls->Add(this->label_recsearchedby);
			this->panel_viewall->Controls->Add(this->label_reckeyword);
			this->panel_viewall->Controls->Add(this->label_searchcategory);
			this->panel_viewall->Controls->Add(this->label_searchkeyword);
			this->panel_viewall->Location = System::Drawing::Point(18, 65);
			this->panel_viewall->Name = L"panel_viewall";
			this->panel_viewall->Size = System::Drawing::Size(833, 59);
			this->panel_viewall->TabIndex = 13;
			this->panel_viewall->Visible = false;
			// 
			// Form_viewall
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(889, 498);
			this->ControlBox = false;
			this->Controls->Add(this->panel_viewall);
			this->Controls->Add(this->dataGridView_records);
			this->Controls->Add(this->label_allrecords);
			this->Controls->Add(this->button_back);
			this->Name = L"Form_viewall";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form_viewall";
			this->Load += gcnew System::EventHandler(this, &Form_viewall::Form_viewall_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_records))->EndInit();
			this->panel_viewall->ResumeLayout(false);
			this->panel_viewall->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//defined in Form_viewall.cpp
private: System::Void button_back_Click(System::Object^  sender, System::EventArgs^  e);      //to get bak to Form1
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

		 }
private: System::Void Form_viewall_Load(System::Object^  sender, System::EventArgs^  e);
};
}
