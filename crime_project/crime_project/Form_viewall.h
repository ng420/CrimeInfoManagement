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
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	protected: 
	private: System::Windows::Forms::Label^  label_sno;
	private: System::Windows::Forms::Label^  label2;
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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label_sno = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label_category = (gcnew System::Windows::Forms::Label());
			this->label_description = (gcnew System::Windows::Forms::Label());
			this->label_status = (gcnew System::Windows::Forms::Label());
			this->button_back = (gcnew System::Windows::Forms::Button());
			this->label_allrecords = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				5)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				40)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				15)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 120);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->Size = System::Drawing::Size(681, 34);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label_sno
			// 
			this->label_sno->AutoSize = true;
			this->label_sno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_sno->Location = System::Drawing::Point(12, 91);
			this->label_sno->Name = L"label_sno";
			this->label_sno->Size = System::Drawing::Size(43, 17);
			this->label_sno->TabIndex = 1;
			this->label_sno->Text = L"S.No.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(52, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Date-Location";
			// 
			// label_category
			// 
			this->label_category->AutoSize = true;
			this->label_category->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_category->Location = System::Drawing::Point(222, 91);
			this->label_category->Name = L"label_category";
			this->label_category->Size = System::Drawing::Size(65, 17);
			this->label_category->TabIndex = 3;
			this->label_category->Text = L"Category";
			// 
			// label_description
			// 
			this->label_description->AutoSize = true;
			this->label_description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_description->Location = System::Drawing::Point(426, 91);
			this->label_description->Name = L"label_description";
			this->label_description->Size = System::Drawing::Size(79, 17);
			this->label_description->TabIndex = 4;
			this->label_description->Text = L"Description";
			// 
			// label_status
			// 
			this->label_status->AutoSize = true;
			this->label_status->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_status->Location = System::Drawing::Point(613, 91);
			this->label_status->Name = L"label_status";
			this->label_status->Size = System::Drawing::Size(48, 17);
			this->label_status->TabIndex = 5;
			this->label_status->Text = L"Status";
			// 
			// button_back
			// 
			this->button_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_back->Location = System::Drawing::Point(616, 19);
			this->button_back->Name = L"button_back";
			this->button_back->Size = System::Drawing::Size(75, 23);
			this->button_back->TabIndex = 6;
			this->button_back->Text = L"Back";
			this->button_back->UseVisualStyleBackColor = true;
			this->button_back->Click += gcnew System::EventHandler(this, &Form_viewall::button_back_Click);
			// 
			// label_allrecords
			// 
			this->label_allrecords->AutoSize = true;
			this->label_allrecords->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_allrecords->Location = System::Drawing::Point(72, 19);
			this->label_allrecords->Name = L"label_allrecords";
			this->label_allrecords->Size = System::Drawing::Size(107, 24);
			this->label_allrecords->TabIndex = 7;
			this->label_allrecords->Text = L"All Records";
			// 
			// Form_viewall
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(705, 412);
			this->Controls->Add(this->label_allrecords);
			this->Controls->Add(this->button_back);
			this->Controls->Add(this->label_status);
			this->Controls->Add(this->label_description);
			this->Controls->Add(this->label_category);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label_sno);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"Form_viewall";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form_viewall";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_back_Click(System::Object^  sender, System::EventArgs^  e);
};
}
