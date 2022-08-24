#pragma once
#include "card.h"
#include <string>

using namespace Magick;

static const int max_deck_size = 68;

class Deck {
	private:
		// deck properties
		std::string title;
		Card cards[max_deck_size];
		int qty;
		int* lastCard = &qty;

	public:
		// constructor
		Deck();

		// deck methods
		void setTitle(std::string x);
		void addCard(Card* newCard);
		void deleteCard();
		std::string getTitle();
		Card getCard(int index);
		Card getLastCard();
		int getQuantity();
		int getLastCardIndex();
};