#ifndef _DECK_HPP_
#define _DECK_HPP_
#include <vector>
#include "Card.hpp"
#include "Hand.hpp"
class Deck
{
public:
	Deck()
	{
		GiveMeaning();
	}
	Deck(const Deck& other);
	void GiveMeaning();
	
private:
	std::vector<CardGame::Card> deck_;
	//githab владислава - varkmort
};

#endif

