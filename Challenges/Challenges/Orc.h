#pragma once

#include "Player.h"

class Orc : public Player
{

public:

	int Stats();

	virtual void Attack(const Player& otherPlayer);

};