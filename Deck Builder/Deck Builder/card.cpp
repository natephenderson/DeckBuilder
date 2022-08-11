#include "card.h"

using namespace std;

Card::Card() {}

Card::Card(string myTitle, string myDescription, bool myType) {
	title = myTitle;
	description = myDescription;
	isAbility = myType;
}

Card::Card(string myTitle, string myDescription, bool myType, int rating) {
	title = myTitle;
	description = myDescription;
	isAbility = myType;
	powerRating = rating;
}

void Card::setTitle(string x) {
	title = x;
}

void Card::setDescription(string x) {
	description = x;
}

void Card::setType(bool x) {
	isAbility = x;
}

string Card::getTitle() {
	return title;
}

string Card::getDescription() {
	return description;
}

int Card::getPowerRating() {
	return powerRating;
}