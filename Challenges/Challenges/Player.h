#pragma once

class Player
{

public:
	
	int m_health;

	void Attack(const Player& otherPlayer);

protected:

	int m_attackPower;

};