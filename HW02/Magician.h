#include "Monster.h"

class  Magician : public Player
{
public:
	Magician(string name) : Player(name)
	{
		nickname = name;
		job_name = " 마법사 ";
		HP = 15;
		MP = 40;
		power = 15;
		accuracy = 3;
		speed = 2;
	}

	void attack(Monster* monster)
	{
		int Data = monster->getDefence() - power;
		if (Data <= 1)
			monster->setHP(monster->getHP() - 1);
		else
			monster->setHP(monster->getHP() - Data);

		cout << " 마법사가 마법 화살을 발사.." << endl;
	}
}; 
