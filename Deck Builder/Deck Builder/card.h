#pragma once
#include <string>
#include <Magick++.h>

static const int card_width = 410;
static const int card_height = 585;


class Card {
	private:
		// card properties
		std::string title;
		std::string description;
		bool isAbility;
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
};