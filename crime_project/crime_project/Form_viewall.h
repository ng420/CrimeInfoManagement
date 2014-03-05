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

	protected: 

	protected: 






	private: System::Windows::Forms::Button^  button_back;
	private: System::Windows::Forms::Label^  label_allrecords;
	private: System::Windows::Forms::DataGridView^  dataGridView_records;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  sno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  date_place;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  category;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  descrip;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  status;






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
			this->sno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->date_place = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->category = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->descrip = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_records))->BeginInit();
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
			this->dataGridView_records->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_records->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_records->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->sno, 
				this->date_place, this->category, this->descrip, this->status});
			this->dataGridView_records->Location = System::Drawing::Point(18, 70);
			this->dataGridView_records->Name = L"dataGridView_records";
			this->dataGridView_records->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView_records->Size = System::Drawing::Size(833, 48);
			this->dataGridView_records->TabIndex = 8;
			this->dataGridView_records->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form_viewall::dataGridView1_CellContentClick);
			// 
			// sno
			// 
			this->sno->HeaderText = L"S.No.";
			this->sno->MaxInputLength = 10;
			this->sno->Name = L"sno";
			this->sno->ReadOnly = true;
			this->sno->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// date_place
			// 
			this->date_place->HeaderText = L"Date-Location";
			this->date_place->Name = L"date_place";
			this->date_place->ReadOnly = true;
			// 
			// category
			// 
			this->category->HeaderText = L"Category";
			this->category->Name = L"category";
			this->category->ReadOnly = true;
			// 
			// descrip
			// 
			this->descrip->HeaderText = L"Description";
			this->descrip->Name = L"descrip";
			this->descrip->ReadOnly = true;
			// 
			// status
			// 
			this->status->HeaderText = L"Status";
			this->status->Name = L"status";
			this->status->ReadOnly = true;
			// 
			// Form_viewall
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(889, 498);
			this->ControlBox = false;
			this->Controls->Add(this->dataGridView_records);
			this->Controls->Add(this->label_allrecords);
			this->Controls->Add(this->button_back);
			this->Name = L"Form_viewall";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form_viewall";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView_records))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//defined in Form_viewall.cpp
private: System::Void button_back_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

		 }
};
}
