#pragma once
#include "deck.h"
#include "card.h"
#include "stringConverter.h"
#include "msclr\marshal_cppstd.h"

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
		private: System::Windows::Forms::TextBox^ cardName;
		private: System::Windows::Forms::Button^ addCardButton;
		protected:





		private: System::Windows::Forms::Label^ cardLabel;
		private: System::Windows::Forms::Label^ ratingLabel;





		private: System::Windows::Forms::Label^ typeLabel;
		private: System::Windows::Forms::Label^ descriptionLabel;






		private: System::Windows::Forms::TextBox^ descriptionBox;


		private: System::Windows::Forms::CheckBox^ checkBox1;
		private: System::Windows::Forms::TextBox^ deckName;





		private: System::Windows::Forms::Button^ createDeck;

		private: System::Windows::Forms::ListBox^ deckList;

		private: System::Windows::Forms::Label^ deckLabel;

		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Button^ deleteCard;
		private: System::Windows::Forms::Button^ deleteDeck;
		private: System::Windows::Forms::Label^ quantityLabel;
		private: System::Windows::Forms::TextBox^ quantityBox;
		private: System::Windows::Forms::TextBox^ powerRatingBox;

















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
			this->cardName = (gcnew System::Windows::Forms::TextBox());
			this->addCardButton = (gcnew System::Windows::Forms::Button());
			this->cardLabel = (gcnew System::Windows::Forms::Label());
			this->ratingLabel = (gcnew System::Windows::Forms::Label());
			this->typeLabel = (gcnew System::Windows::Forms::Label());
			this->descriptionLabel = (gcnew System::Windows::Forms::Label());
			this->descriptionBox = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->deckName = (gcnew System::Windows::Forms::TextBox());
			this->createDeck = (gcnew System::Windows::Forms::Button());
			this->deckList = (gcnew System::Windows::Forms::ListBox());
			this->deckLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->deleteCard = (gcnew System::Windows::Forms::Button());
			this->deleteDeck = (gcnew System::Windows::Forms::Button());
			this->quantityLabel = (gcnew System::Windows::Forms::Label());
			this->quantityBox = (gcnew System::Windows::Forms::TextBox());
			this->powerRatingBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cardName
			// 
			this->cardName->Location = System::Drawing::Point(600, 21);
			this->cardName->Name = L"cardName";
			this->cardName->Size = System::Drawing::Size(109, 20);
			this->cardName->TabIndex = 0;
			this->cardName->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// addCardButton
			// 
			this->addCardButton->Location = System::Drawing::Point(695, 302);
			this->addCardButton->Name = L"addCardButton";
			this->addCardButton->Size = System::Drawing::Size(75, 23);
			this->addCardButton->TabIndex = 1;
			this->addCardButton->Text = L"Add Card";
			this->addCardButton->UseVisualStyleBackColor = true;
			this->addCardButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// cardLabel
			// 
			this->cardLabel->AutoSize = true;
			this->cardLabel->Location = System::Drawing::Point(519, 21);
			this->cardLabel->Name = L"cardLabel";
			this->cardLabel->Size = System::Drawing::Size(52, 13);
			this->cardLabel->TabIndex = 4;
			this->cardLabel->Text = L"Card Title";
			this->cardLabel->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// ratingLabel
			// 
			this->ratingLabel->AutoSize = true;
			this->ratingLabel->Location = System::Drawing::Point(519, 118);
			this->ratingLabel->Name = L"ratingLabel";
			this->ratingLabel->Size = System::Drawing::Size(71, 13);
			this->ratingLabel->TabIndex = 4;
			this->ratingLabel->Text = L"Power Rating";
			this->ratingLabel->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// typeLabel
			// 
			this->typeLabel->AutoSize = true;
			this->typeLabel->Location = System::Drawing::Point(519, 68);
			this->typeLabel->Name = L"typeLabel";
			this->typeLabel->Size = System::Drawing::Size(56, 13);
			this->typeLabel->TabIndex = 4;
			this->typeLabel->Text = L"Card Type";
			this->typeLabel->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// descriptionLabel
			// 
			this->descriptionLabel->AutoSize = true;
			this->descriptionLabel->Location = System::Drawing::Point(519, 164);
			this->descriptionLabel->Name = L"descriptionLabel";
			this->descriptionLabel->Size = System::Drawing::Size(60, 13);
			this->descriptionLabel->TabIndex = 4;
			this->descriptionLabel->Text = L"Description";
			this->descriptionLabel->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// descriptionBox
			// 
			this->descriptionBox->AcceptsReturn = true;
			this->descriptionBox->Location = System::Drawing::Point(600, 161);
			this->descriptionBox->Multiline = true;
			this->descriptionBox->Name = L"descriptionBox";
			this->descriptionBox->Size = System::Drawing::Size(170, 130);
			this->descriptionBox->TabIndex = 0;
			this->descriptionBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(600, 68);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(53, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Ability";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// deckName
			// 
			this->deckName->Location = System::Drawing::Point(68, 19);
			this->deckName->Name = L"deckName";
			this->deckName->Size = System::Drawing::Size(109, 20);
			this->deckName->TabIndex = 0;
			this->deckName->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// createDeck
			// 
			this->createDeck->Location = System::Drawing::Point(68, 301);
			this->createDeck->Name = L"createDeck";
			this->createDeck->Size = System::Drawing::Size(75, 23);
			this->createDeck->TabIndex = 1;
			this->createDeck->Text = L"Create Deck";
			this->createDeck->UseVisualStyleBackColor = true;
			this->createDeck->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// deckList
			// 
			this->deckList->FormattingEnabled = true;
			this->deckList->Location = System::Drawing::Point(68, 45);
			this->deckList->Name = L"deckList";
			this->deckList->ScrollAlwaysVisible = true;
			this->deckList->Size = System::Drawing::Size(398, 238);
			this->deckList->TabIndex = 2;
			this->deckList->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged_1);
			// 
			// deckLabel
			// 
			this->deckLabel->AutoSize = true;
			this->deckLabel->Location = System::Drawing::Point(1, 22);
			this->deckLabel->Name = L"deckLabel";
			this->deckLabel->Size = System::Drawing::Size(67, 13);
			this->deckLabel->TabIndex = 4;
			this->deckLabel->Text = L"Deck Name:";
			this->deckLabel->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
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
			// deleteCard
			// 
			this->deleteCard->Location = System::Drawing::Point(376, 302);
			this->deleteCard->Name = L"deleteCard";
			this->deleteCard->Size = System::Drawing::Size(75, 23);
			this->deleteCard->TabIndex = 7;
			this->deleteCard->Text = L"Delete Card";
			this->deleteCard->UseVisualStyleBackColor = true;
			this->deleteCard->Click += gcnew System::EventHandler(this, &MyForm::deleteCard_Click);
			// 
			// deleteDeck
			// 
			this->deleteDeck->Location = System::Drawing::Point(149, 301);
			this->deleteDeck->Name = L"deleteDeck";
			this->deleteDeck->Size = System::Drawing::Size(75, 23);
			this->deleteDeck->TabIndex = 8;
			this->deleteDeck->Text = L"Delete Deck";
			this->deleteDeck->UseVisualStyleBackColor = true;
			this->deleteDeck->Click += gcnew System::EventHandler(this, &MyForm::deleteDeck_Click);
			// 
			// quantityLabel
			// 
			this->quantityLabel->AutoSize = true;
			this->quantityLabel->Location = System::Drawing::Point(555, 307);
			this->quantityLabel->Name = L"quantityLabel";
			this->quantityLabel->Size = System::Drawing::Size(46, 13);
			this->quantityLabel->TabIndex = 9;
			this->quantityLabel->Text = L"Quantity";
			// 
			// quantityBox
			// 
			this->quantityBox->Location = System::Drawing::Point(600, 303);
			this->quantityBox->Name = L"quantityBox";
			this->quantityBox->Size = System::Drawing::Size(26, 20);
			this->quantityBox->TabIndex = 10;
			this->quantityBox->Text = L"1";
			// 
			// powerRatingBox
			// 
			this->powerRatingBox->Location = System::Drawing::Point(600, 115);
			this->powerRatingBox->Name = L"powerRatingBox";
			this->powerRatingBox->Size = System::Drawing::Size(26, 20);
			this->powerRatingBox->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(810, 350);
			this->Controls->Add(this->powerRatingBox);
			this->Controls->Add(this->quantityBox);
			this->Controls->Add(this->quantityLabel);
			this->Controls->Add(this->deleteDeck);
			this->Controls->Add(this->deleteCard);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->typeLabel);
			this->Controls->Add(this->descriptionLabel);
			this->Controls->Add(this->ratingLabel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->deckLabel);
			this->Controls->Add(this->cardLabel);
			this->Controls->Add(this->deckList);
			this->Controls->Add(this->createDeck);
			this->Controls->Add(this->addCardButton);
			this->Controls->Add(this->deckName);
			this->Controls->Add(this->descriptionBox);
			this->Controls->Add(this->cardName);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: Deck* myDeck = NULL;
	private: Card* myCard = NULL;
	
	private: void updateDeckList() {

		Card currentCard;
		System::String^ sysDeckEntry;

		if (deckList->Items->Count != 0) {
			deckList->Items->Clear();
		}

		if (myDeck != NULL) {

			deckList->BeginUpdate();

			for (int i = 0; i < myDeck->getQuantity(); i++) {
				currentCard = myDeck->getCard(i);
				sysDeckEntry = stdToSystem(currentCard.getTitle())
					+ " | "
					+ System::Convert::ToString(currentCard.getPowerRating())
					+ " | ";

				if (currentCard.isAbility()) {
					sysDeckEntry += "Ability" + " | ";
				}
				else {
					sysDeckEntry += "Fieldable" + " | ";
				}

				sysDeckEntry += stdToSystem(currentCard.getDescription());

				deckList->Items->Add(sysDeckEntry);
			}

			deckList->EndUpdate();

		}

	}
	
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		std::string deckTitle;

		if (myDeck != NULL) {
			systemToStd(deckName->Text, deckTitle);
			myDeck->setTitle(deckTitle);
		}
	
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

		std::string cardTitle, cardDescription;
		bool abilityCard;
		int powerRating;
		int quantityToAdd = System::Convert::ToInt16(quantityBox->Text);

		if(myDeck != NULL) {

			if (cardName->Text == "") {
				cardTitle = "Card Name";
			}
			else {
				systemToStd(cardName->Text, cardTitle);
			}
		
			if (descriptionBox->Text == "") {
				cardDescription = "Description";
			}
			else {
				systemToStd(descriptionBox->Text, cardDescription);
			}
		
			if (checkBox1->Checked) {
				abilityCard = true;
				powerRating = 0;
			}
			else {
				abilityCard = false;
				if (powerRatingBox->Text == "") {
					powerRating = 0;
				}
				else {
					powerRating = System::Convert::ToInt16(powerRatingBox->Text);
				}
			}

			if (myCard != NULL) {
				delete myCard;
				myCard = NULL;
			}

			myCard = new Card(cardTitle, cardDescription, abilityCard, powerRating);

			for (int i = 0; i < quantityToAdd; i++) {
				myDeck->addCard(myCard);
			}

			updateDeckList();
		}	
		
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		if (myDeck == NULL) {
			myDeck = new Deck();
			deckName->Text = stdToSystem(myDeck->getTitle());
		}
	}
	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void deleteCard_Click(System::Object^ sender, System::EventArgs^ e) {

		myDeck->deleteCard();

		updateDeckList();
	}
	private: System::Void deleteDeck_Click(System::Object^ sender, System::EventArgs^ e) {

		delete myDeck;
		myDeck = NULL;
		deckName->Text = "";

		updateDeckList();
	}
};
}
