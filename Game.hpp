#ifndef _GAME_HPP_
#define _GAME_HPP_
#include "Deck.hpp"
#include "Card.hpp"
#include "Hand.hpp"
#include <random>
#include <vector>
#include "Player.hpp"
class Game
{
public:
	Game()
	{
		/*Deck cards;
		cards.deck_[7].Print();*/
		for (int i = 0; i < count_of_players_; i++)
		{
			players.emplace_back("Èìÿ");
		}
		GiveCard();
	}
	void GiveCard();

	void SetPlayers(int count_of_players)
	{
		count_of_players_ = count_of_players;
	}
	int GetPlayers()const
	{
		return count_of_players_;
	}
private:
	int count_of_players_;
	std::vector<Player> players;
};

#endif
