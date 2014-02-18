#pragma once
#include "tchar.h"

namespace crime_project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_Add
	/// </summary>
	public ref class Form_Add : public System::Windows::Forms::Form
	{
	public:
		Form_Add(void)
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
		~Form_Add()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_category;
	private: System::Windows::Forms::Label^  label_description;
	protected: 

	private: System::Windows::Forms::Label^  label_evidence;
	private: System::Windows::Forms::Label^  label_suspect;
	private: System::Windows::Forms::Label^  label_location;
	private: System::Windows::Forms::Label^  label_time;
	private: System::Windows::Forms::Label^  label_date;

	private: System::Windows::Forms::TextBox^  textBox_description;


	private: System::Windows::Forms::TextBox^  textBox_place;
	private: System::Windows::Forms::TextBox^  textBox_evidence;
	private: System::Windows::Forms::TextBox^  textBox_suspect;
	private: System::Windows::Forms::Button^  button_done;
	private: System::Windows::Forms::Button^  button_cancel;
	private: System::Windows::Forms::Button^  button_addmore;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::ComboBox^  comboBox_category;
	private: System::Windows::Forms::Button^  button_addevidence;
	private: System::Windows::Forms::Button^  button_upload;
	private: System::Windows::Forms::Button^  button_addanother;

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
			this->label_category = (gcnew System::Windows::Forms::Label());
			this->label_description = (gcnew System::Windows::Forms::Label());
			this->label_evidence = (gcnew System::Windows::Forms::Label());
			this->label_suspect = (gcnew System::Windows::Forms::Label());
			this->label_location = (gcnew System::Windows::Forms::Label());
			this->label_time = (gcnew System::Windows::Forms::Label());
			this->label_date = (gcnew System::Windows::Forms::Label());
			this->textBox_description = (gcnew System::Windows::Forms::TextBox());
			this->textBox_place = (gcnew System::Windows::Forms::TextBox());
			this->textBox_evidence = (gcnew System::Windows::Forms::TextBox());
			this->textBox_suspect = (gcnew System::Windows::Forms::TextBox());
			this->button_done = (gcnew System::Windows::Forms::Button());
			this->button_cancel = (gcnew System::Windows::Forms::Button());
			this->button_addmore = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox_category = (gcnew System::Windows::Forms::ComboBox());
			this->button_addevidence = (gcnew System::Windows::Forms::Button());
			this->button_upload = (gcnew System::Windows::Forms::Button());
			this->button_addanother = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_category
			// 
			this->label_category->AutoSize = true;
			this->label_category->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_category->Location = System::Drawing::Point(29, 41);
			this->label_category->Name = L"label_category";
			this->label_category->Size = System::Drawing::Size(69, 17);
			this->label_category->TabIndex = 0;
			this->label_category->Text = L"Category:";
			// 
			// label_description
			// 
			this->label_description->AutoSize = true;
			this->label_description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_description->Location = System::Drawing::Point(29, 135);
			this->label_description->Name = L"label_description";
			this->label_description->Size = System::Drawing::Size(83, 17);
			this->label_description->TabIndex = 1;
			this->label_description->Text = L"Description:";
			// 
			// label_evidence
			// 
			this->label_evidence->AutoSize = true;
			this->label_evidence->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_evidence->Location = System::Drawing::Point(29, 277);
			this->label_evidence->Name = L"label_evidence";
			this->label_evidence->Size = System::Drawing::Size(87, 17);
			this->label_evidence->TabIndex = 2;
			this->label_evidence->Text = L"Evidence(s):";
			// 
			// label_suspect
			// 
			this->label_suspect->AutoSize = true;
			this->label_suspect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_suspect->Location = System::Drawing::Point(29, 333);
			this->label_suspect->Name = L"label_suspect";
			this->label_suspect->Size = System::Drawing::Size(80, 17);
			this->label_suspect->TabIndex = 3;
			this->label_suspect->Text = L"Suspect(s):";
			// 
			// label_location
			// 
			this->label_location->AutoSize = true;
			this->label_location->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_location->Location = System::Drawing::Point(506, 70);
			this->label_location->Name = L"label_location";
			this->label_location->Size = System::Drawing::Size(66, 17);
			this->label_location->TabIndex = 4;
			this->label_location->Text = L"Location:";
			// 
			// label_time
			// 
			this->label_time->AutoSize = true;
			this->label_time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_time->Location = System::Drawing::Point(257, 70);
			this->label_time->Name = L"label_time";
			this->label_time->Size = System::Drawing::Size(43, 17);
			this->label_time->TabIndex = 5;
			this->label_time->Text = L"Time:";
			// 
			// label_date
			// 
			this->label_date->AutoSize = true;
			this->label_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_date->Location = System::Drawing::Point(29, 70);
			this->label_date->Name = L"label_date";
			this->label_date->Size = System::Drawing::Size(42, 17);
			this->label_date->TabIndex = 6;
			this->label_date->Text = L"Date:";
			// 
			// textBox_description
			// 
			this->textBox_description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_description->Location = System::Drawing::Point(113, 135);
			this->textBox_description->Multiline = true;
			this->textBox_description->Name = L"textBox_description";
			this->textBox_description->Size = System::Drawing::Size(459, 121);
			this->textBox_description->TabIndex = 8;
			// 
			// textBox_place
			// 
			this->textBox_place->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_place->Location = System::Drawing::Point(578, 64);
			this->textBox_place->Name = L"textBox_place";
			this->textBox_place->Size = System::Drawing::Size(100, 23);
			this->textBox_place->TabIndex = 11;
			// 
			// textBox_evidence
			// 
			this->textBox_evidence->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_evidence->Location = System::Drawing::Point(115, 274);
			this->textBox_evidence->Name = L"textBox_evidence";
			this->textBox_evidence->Size = System::Drawing::Size(79, 23);
			this->textBox_evidence->TabIndex = 12;
			// 
			// textBox_suspect
			// 
			this->textBox_suspect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_suspect->Location = System::Drawing::Point(115, 330);
			this->textBox_suspect->Name = L"textBox_suspect";
			this->textBox_suspect->Size = System::Drawing::Size(129, 23);
			this->textBox_suspect->TabIndex = 13;
			// 
			// button_done
			// 
			this->button_done->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_done->Location = System::Drawing::Point(489, 377);
			this->button_done->Name = L"button_done";
			this->button_done->Size = System::Drawing::Size(75, 23);
			this->button_done->TabIndex = 14;
			this->button_done->Text = L"Done";
			this->button_done->UseVisualStyleBackColor = true;
			// 
			// button_cancel
			// 
			this->button_cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_cancel->Location = System::Drawing::Point(588, 377);
			this->button_cancel->Name = L"button_cancel";
			this->button_cancel->Size = System::Drawing::Size(75, 23);
			this->button_cancel->TabIndex = 15;
			this->button_cancel->Text = L"Cancel";
			this->button_cancel->UseVisualStyleBackColor = true;
			this->button_cancel->Click += gcnew System::EventHandler(this, &Form_Add::button_cancel_Click);
			// 
			// button_addmore
			// 
			this->button_addmore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_addmore->Location = System::Drawing::Point(376, 377);
			this->button_addmore->Name = L"button_addmore";
			this->button_addmore->Size = System::Drawing::Size(89, 23);
			this->button_addmore->TabIndex = 16;
			this->button_addmore->Text = L"Add More";
			this->button_addmore->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(106, 67);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(88, 23);
			this->dateTimePicker1->TabIndex = 17;
			this->dateTimePicker1->Value = System::DateTime(2014, 2, 17, 0, 0, 0, 0);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker2->Location = System::Drawing::Point(316, 70);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(93, 23);
			this->dateTimePicker2->TabIndex = 18;
			this->dateTimePicker2->Value = System::DateTime(2014, 2, 17, 19, 47, 0, 0);
			// 
			// comboBox_category
			// 
			this->comboBox_category->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox_category->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox_category->FormattingEnabled = true;
			this->comboBox_category->Items->AddRange(gcnew cli::array< System::Object^  >(8) {L"Arms Trafficking", L"Corruption", L"Cyber Crime", 
				L"Dowry", L"Illegal Drug Trade", L"Kidnapping", L"Murder", L"Rape"});
			this->comboBox_category->Location = System::Drawing::Point(106, 40);
			this->comboBox_category->Name = L"comboBox_category";
			this->comboBox_category->Size = System::Drawing::Size(121, 21);
			this->comboBox_category->Sorted = true;
			this->comboBox_category->TabIndex = 19;
			this->comboBox_category->SelectedIndexChanged += gcnew System::EventHandler(this, &Form_Add::comboBox_category_SelectedIndexChanged);
			// 
			// button_addevidence
			// 
			this->button_addevidence->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_addevidence->Location = System::Drawing::Point(212, 274);
			this->button_addevidence->Name = L"button_addevidence";
			this->button_addevidence->Size = System::Drawing::Size(88, 23);
			this->button_addevidence->TabIndex = 20;
			this->button_addevidence->Text = L"Add more";
			this->button_addevidence->UseVisualStyleBackColor = true;
			// 
			// button_upload
			// 
			this->button_upload->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_upload->Location = System::Drawing::Point(316, 270);
			this->button_upload->Name = L"button_upload";
			this->button_upload->Size = System::Drawing::Size(120, 31);
			this->button_upload->TabIndex = 21;
			this->button_upload->Text = L"Upload a File";
			this->button_upload->UseVisualStyleBackColor = true;
			// 
			// button_addanother
			// 
			this->button_addanother->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_addanother->Location = System::Drawing::Point(279, 327);
			this->button_addanother->Name = L"button_addanother";
			this->button_addanother->Size = System::Drawing::Size(88, 23);
			this->button_addanother->TabIndex = 22;
			this->button_addanother->Text = L"Add another";
			this->button_addanother->UseVisualStyleBackColor = true;
			// 
			// Form_Add
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 412);
			this->Controls->Add(this->button_addanother);
			this->Controls->Add(this->button_upload);
			this->Controls->Add(this->button_addevidence);
			this->Controls->Add(this->comboBox_category);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button_addmore);
			this->Controls->Add(this->button_cancel);
			this->Controls->Add(this->button_done);
			this->Controls->Add(this->textBox_suspect);
			this->Controls->Add(this->textBox_evidence);
			this->Controls->Add(this->textBox_place);
			this->Controls->Add(this->textBox_description);
			this->Controls->Add(this->label_date);
			this->Controls->Add(this->label_time);
			this->Controls->Add(this->label_location);
			this->Controls->Add(this->label_suspect);
			this->Controls->Add(this->label_evidence);
			this->Controls->Add(this->label_description);
			this->Controls->Add(this->label_category);
			this->Name = L"Form_Add";
			this->Text = L"Form_Add";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox_category_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button_cancel_Click(System::Object^  sender, System::EventArgs^  e);
};
}
