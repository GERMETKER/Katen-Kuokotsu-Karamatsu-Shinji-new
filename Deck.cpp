#include "Deck.hpp"

Deck::Deck(const Deck& other)
{
	int n = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 2; j < 15; j++)
		{
			deck_[n] = other.deck_[n];
			n++;
		}
	}
}

void Deck::GiveMeaning()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 2; j < 15; j++)
		{
			deck_.emplace_back(CardGame::Ranks(j), CardGame::Suit(i));
		}
	}
}
