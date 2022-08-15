#pragma once
#include "card.h"
#include <string>

using namespace Magick;

static const int max_deck_size = 68;

class Deck {
	public:
		// deck properties
		std::string title;
		Card cards[max_deck_size];
		int qty;

	public:
		// constructor
		Deck();

		// deck methods
		void setTitle(std::string x);
		void addCard(Card* newCard);
		void deleteCard();
		std::string getTitle(std::string x);
		Card getCard(int index);
};