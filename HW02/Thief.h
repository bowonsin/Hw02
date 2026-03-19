#include "Monster.h"


class  Thief : public Player
{
public:
	Thief(string name) : Player(name)
	{
		nickname = name;
		job_name = " 도적 ";
		HP = 25;
		MP = 15;
		power = 6;
		accuracy = 11;
		speed = 14;

	}
	void attack(Monster* monster)
	{
		int Data = monster->getDefence() - power;
		if (Data <= 1)
			monster->setHP(monster->getHP() - 1);
		else
			monster->setHP(monster->getHP() - Data);


		cout << " 도적이 단검을 휘두릅니다.." << endl;
	}
};
