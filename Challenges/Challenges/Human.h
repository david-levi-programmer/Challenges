#pragma once

#include "Player.h"

class Human : public Player
{

public:

	int Stats();

	virtual void Attack(const Player& otherPlayer);

};