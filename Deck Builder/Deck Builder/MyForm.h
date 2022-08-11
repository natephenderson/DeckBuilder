#pragma once
#include "card.h"
#include "stringConverter.h"

namespace DeckBuilder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox3;
		private: System::Windows::Forms::ListBox^ listBox1;
		private: System::Windows::Forms::Button^ button2;

		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Label^ label2;

		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::TextBox^ textBox2;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::TextBox^ textBox4;
		private: System::Windows::Forms::CheckBox^ checkBox1;





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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(433, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(109, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(528, 304);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Add Card";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(433, 120);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(26, 20);
			this->textBox3->TabIndex = 0;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"item", L"item 2", L"item 3", L"item 4" });
			this->listBox1->Location = System::Drawing::Point(68, 45);
			this->listBox1->MultiColumn = true;
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(246, 238);
			this->listBox1->TabIndex = 2;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(239, 304);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Delete Card";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(352, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Card Title";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(352, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Power Rating";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Deck Name:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(68, 19);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(109, 20);
			this->textBox2->TabIndex = 0;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Card List";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(352, 70);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Card Type";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(352, 166);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Description";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(149, 304);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Create Deck";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->AcceptsReturn = true;
			this->textBox4->Location = System::Drawing::Point(433, 163);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(170, 130);
			this->textBox4->TabIndex = 0;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(433, 70);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(53, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Ability";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 350);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string title, description;
		int powerRating;
		MarshalString(textBox1->Text, title);
		MarshalString(textBox4->Text, description);

		if (checkBox1->Checked) {
			// call ability card constructor, ignore power rating
			Card newCard(title, description, checkBox1->Checked);
		}
		else {
			// call character card constructor
			if (textBox3->Text == "") powerRating = 0;
			else powerRating = System::Convert::ToInt16(textBox3->Text);
			Card newCard(title, description, checkBox1->Checked, powerRating);
		}

	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
