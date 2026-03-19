#pragma once
#include "Monster.h"

class  Archer : public Player
{
public:
	Archer(string name) : Player(name)
	{
		nickname = name;
		job_name = " 궁수 ";
		HP = 20;
		MP = 20;
		power = 7;
		accuracy = 13;
		speed = 8;
	}
	void attack(Monster* monster)
	{
		int Data = monster->getDefence() - power;
		if (Data <= 1)
			monster->setHP(monster->getHP() - 1);
		else
			monster->setHP(monster->getHP() - Data);

		cout << " 궁수가 화살을 쏩니다..." << endl;
	}
};
