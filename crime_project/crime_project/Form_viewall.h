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
	public:
		Form_viewall(void)
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
		~Form_viewall()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  table_database;
	protected: 

	protected: 
	private: System::Windows::Forms::Label^  label_sno;
	private: System::Windows::Forms::Label^  label_dateplace;

	private: System::Windows::Forms::Label^  label_category;
	private: System::Windows::Forms::Label^  label_description;
	private: System::Windows::Forms::Label^  label_status;
	private: System::Windows::Forms::Button^  button_back;
	private: System::Windows::Forms::Label^  label_allrecords;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_viewall::typeid));
			this->table_database = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label_sno = (gcnew System::Windows::Forms::Label());
			this->label_dateplace = (gcnew System::Windows::Forms::Label());
			this->label_category = (gcnew System::Windows::Forms::Label());
			this->label_description = (gcnew System::Windows::Forms::Label());
			this->label_status = (gcnew System::Windows::Forms::Label());
			this->button_back = (gcnew System::Windows::Forms::Button());
			this->label_allrecords = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// table_database
			// 
			this->table_database->ColumnCount = 5;
			this->table_database->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				5)));
			this->table_database->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->table_database->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->table_database->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				40)));
			this->table_database->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				15)));
			this->table_database->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->table_database->Location = System::Drawing::Point(12, 120);
			this->table_database->Name = L"table_database";
			this->table_database->RowCount = 1;
			this->table_database->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->table_database->Size = System::Drawing::Size(865, 38);
			this->table_database->TabIndex = 0;
			// 
			// label_sno
			// 
			this->label_sno->AutoSize = true;
			this->label_sno->BackColor = System::Drawing::Color::Transparent;
			this->label_sno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_sno->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_sno->Location = System::Drawing::Point(12, 91);
			this->label_sno->Name = L"label_sno";
			this->label_sno->Size = System::Drawing::Size(53, 20);
			this->label_sno->TabIndex = 1;
			this->label_sno->Text = L"S.No.";
			// 
			// label_dateplace
			// 
			this->label_dateplace->AutoSize = true;
			this->label_dateplace->BackColor = System::Drawing::Color::Transparent;
			this->label_dateplace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_dateplace->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_dateplace->Location = System::Drawing::Point(64, 91);
			this->label_dateplace->Name = L"label_dateplace";
			this->label_dateplace->Size = System::Drawing::Size(123, 20);
			this->label_dateplace->TabIndex = 2;
			this->label_dateplace->Text = L"Date-Location";
			// 
			// label_category
			// 
			this->label_category->AutoSize = true;
			this->label_category->BackColor = System::Drawing::Color::Transparent;
			this->label_category->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_category->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_category->Location = System::Drawing::Point(234, 91);
			this->label_category->Name = L"label_category";
			this->label_category->Size = System::Drawing::Size(81, 20);
			this->label_category->TabIndex = 3;
			this->label_category->Text = L"Category";
			// 
			// label_description
			// 
			this->label_description->AutoSize = true;
			this->label_description->BackColor = System::Drawing::Color::Transparent;
			this->label_description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_description->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_description->Location = System::Drawing::Point(426, 91);
			this->label_description->Name = L"label_description";
			this->label_description->Size = System::Drawing::Size(100, 20);
			this->label_description->TabIndex = 4;
			this->label_description->Text = L"Description";
			// 
			// label_status
			// 
			this->label_status->AutoSize = true;
			this->label_status->BackColor = System::Drawing::Color::Transparent;
			this->label_status->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_status->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_status->Location = System::Drawing::Point(757, 91);
			this->label_status->Name = L"label_status";
			this->label_status->Size = System::Drawing::Size(62, 20);
			this->label_status->TabIndex = 5;
			this->label_status->Text = L"Status";
			// 
			// button_back
			// 
			this->button_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
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
			this->label_allrecords->Font = (gcnew System::Drawing::Font(L"Stencil", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_allrecords->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_allrecords->Location = System::Drawing::Point(12, 19);
			this->label_allrecords->Name = L"label_allrecords";
			this->label_allrecords->Size = System::Drawing::Size(198, 32);
			this->label_allrecords->TabIndex = 7;
			this->label_allrecords->Text = L"All Records";
			// 
			// Form_viewall
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(889, 498);
			this->ControlBox = false;
			this->Controls->Add(this->label_allrecords);
			this->Controls->Add(this->button_back);
			this->Controls->Add(this->label_status);
			this->Controls->Add(this->label_description);
			this->Controls->Add(this->label_category);
			this->Controls->Add(this->label_dateplace);
			this->Controls->Add(this->label_sno);
			this->Controls->Add(this->table_database);
			this->Name = L"Form_viewall";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form_viewall";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_back_Click(System::Object^  sender, System::EventArgs^  e);
};
}
