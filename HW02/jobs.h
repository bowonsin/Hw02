#include "Monster.h"



class Warrior : public Player
{
public:
	Warrior(string name) : Player(name)
	{
		nickname = name;
		job_name = " 전사 ";
		HP = 40;
		MP = 5;
		power = 12;
		accuracy = 7;
		speed = 4;
	}
	void attack(Monster* monster)
	{
		int Data = monster->getDefence() - power;
		if (Data <= 1)
			monster->setHP(monster->getHP() - 1);
		else
			monster->setHP(monster->getHP() - Data);

		cout << " 전사가 검을 휘두릅니다." << endl;
	}
}; #pragma once
