#include "Card.hpp"

CardGame::Suit CardGame::Card::GetSuit() const
{
    return suit_;
}

CardGame::Ranks CardGame::Card::GetRank() const
{
    return rank_;
}
