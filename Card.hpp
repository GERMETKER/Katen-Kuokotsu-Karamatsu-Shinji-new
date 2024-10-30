#ifndef _CARD_HPP_
#define _CARD_HPP_
#include <iostream>
namespace CardGame
{
	enum Suit
	{
		clubs, diamonds, hards, spikes
	};

	enum Ranks
	{
		two = 2,
		three,
		four,
		five,
		six,
		seven,
		eight,
		nine,
		ten,
		jack,
		queen,
		king,
		ace
	};

	class Card
	{
	public:
		Card() = default;
		Card(Ranks rank, Suit suit)
		{
			rank_ = rank;
			suit_ = suit;
			if (rank <= 10)
			{
				points_ = rank;
			}
			else if(rank > 10 && rank < 14)
			{
				points_ = 10;
			}
			else if (rank == 14)
			{
				points_ = 11;
			}
		}
		Card(const Card& other)
		{
			rank_ = other.rank_;
			suit_ = other.suit_;
			points_ = other.points_;
		}
		void Print()
		{
			std::cout << "Масть: " << suit_ << "\n";
			std::cout << "Значение: " << rank_ << "\n";
			std::cout << "Очки: " << points_ << "\n";
		}
		Suit GetSuit()const;
		Ranks GetRank()const;

	private:
		int points_;
		Suit suit_;
		Ranks rank_;
	};
}

#endif
