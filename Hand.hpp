#ifndef _HAND_HPP_
#define _HAND_HPP_
#include <vector>
#include "Card.hpp"
#include "Deck.hpp"
class Hand
{
public:
	Hand()
	{}
	void AddCard(CardGame::Card& carta)
	{
		hand.emplace_back(carta);
	}
private:
	std::vector<CardGame::Card> hand;
};


#endif

