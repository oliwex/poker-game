#pragma once
#ifndef PLAYER
#include <iostream>
#include <vector>
#include "Deck.h"
class Player
{
public:
	static int cash;
	/*struct {
		std::string firstCard;
		std::string secondCard;
	} hand;*/
	std::vector<Deck> hand;
	//int hand[2] = {firstCard, secondCard};
	int addCash(int x); //funkcja dodaj�ca pieni�dze do konta gracza - x - pula aktualnej rozgrywki
	int takeCash(int y); //funkcja odejmuj�ca pieni�dze z konta gracza - y - wysoko�� betu
	Card takeCard();
};
#endif // !PLAYER



