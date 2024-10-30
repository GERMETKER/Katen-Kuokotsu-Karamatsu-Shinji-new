#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_
#include <vector>
#include "Deck.hpp";
class Player
{
public:
	Player() = default;
	Player(std::string name)
	{
		name_ = name;
	}
	Player(const Player& other)
	{
		name_ = other.name_;
	}
	void SetName(std::string name)
	{
		name_ = name;
	}
	std::string GetName()
	{
		return name_;
	}
	Hand* GetHand()
	{
		return &playersHand;
	}
private:
	Hand playersHand;
	std::string name_;
};



#endif