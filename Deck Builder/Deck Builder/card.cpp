#include "card.h"

using namespace std;

Card::Card() {}

Card::Card(string myTitle, string myDescription, bool myType) {
	title = myTitle;
	description = myDescription;
	ability = myType;
}

Card::Card(string myTitle, string myDescription, bool myType, int rating) {
	title = myTitle;
	description = myDescription;
	ability = myType;
	powerRating = rating;

	switch (powerRating) {
		case POWER_1:
			break;
		case POWER_2:
			break;
		case POWER_3:
			break;
		case POWER_4:
			break;
		case POWER_5:
			break;
	}
}

void Card::setTitle(string x) {
	title = x;
}

void Card::setDescription(string x) {
	description = x;
}

void Card::setType(bool x) {
	ability = x;
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

bool Card::isAbility() {
	return ability;
}