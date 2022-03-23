#pragma once

#include "Player.h"

class Elf : public Player
{

public:

	int Stats();

	virtual void Attack(const Player& otherPlayer);

};