#pragma once
#include <string>
#include <Magick++.h>

enum cardPowerLevels {
	POWER_1 = 1,
	POWER_2 = 2,
	POWER_3 = 3,
	POWER_4 = 4,
	POWER_5 = 5
};

static const int card_width = 410;
static const int card_height = 585;

class Card {
	private:
		// card properties
		std::string title;
		std::string description;
		bool ability;
		int powerRating;
		

	public:
		// constructors
		Card();
		Card(std::string myTitle, std::string myDescription, bool ability);					// for ability cards
		Card(std::string myTitle, std::string myDescription, bool ability, int rating);		// for fieldable cards

		// methods
		void setTitle(std::string x);
		void setDescription(std::string x);
		void setType(bool x);
		std::string getTitle();
		std::string getDescription();
		int getPowerRating();
		bool isAbility();
};