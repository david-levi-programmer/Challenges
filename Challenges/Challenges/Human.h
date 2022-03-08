#pragma once
#include "Player.h"
class Human : public Player
{

public:

	virtual void Attack(const Player& otherPlayer);

private:

};