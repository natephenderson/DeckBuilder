#include "deck.h"

using namespace std;

Deck::Deck() {
	qty = 0;
	title = "Empty Deck";
}

void Deck::setTitle(string x) {
	title = x;
}

void Deck::addCard(Card* newCard) {

	if (qty <= max_deck_size) {
		cards[qty] = *(newCard);
		qty++;
	}
}

void Deck::deleteCard() {
	qty--;
}

string Deck::getTitle() {
	return title;
}

Card Deck::getCard(int index) {
	return cards[index];
}

Card Deck::getLastCard() {
	int index = getLastCardIndex();
	return cards[index];
}
int Deck::getQuantity() {
	return qty;
}

int Deck::getLastCardIndex() {
	return *(lastCard) - 1;
}
