#include "deck.h"

using namespace std;

Deck::Deck() {
	qty = 0;
	title = "Empty Deck";
}

void Deck::setTitle(string x) {
	title = x;
}

void Deck::addCard(Card& newCard) {
	
	cards[qty] = newCard;
	qty++;
}

void Deck::deleteCard() {
	qty--;
}

Card Deck::getCard(int index) {
	return cards[index];
}