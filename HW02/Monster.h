#pragma once
#include <iostream>
#include "Player.h"

using namespace std;

class Player;


class Monster
{
public:
    Monster(string Set_Name)
    {
        nickname = Set_Name;
        power = 30;
        HP = 10;
        defence = 10;
        speed = 10;
    }

    
    void printPlayerStatus()
    {
        {
            cout << endl;
            cout << " 이름 :  " <<  nickname<< endl;
            cout << " HP : " << HP << endl;
            cout << " Power : " << power << endl;
            cout << " 방어력 : " << defence << endl;
            cout << " 속도 : " << speed << endl;
        }
    }

    // getter 함수
    string getNickname() { return nickname; }
    int getHP() { return HP; }
    int getPower() { return power; }
    int getDefence() { return defence; }
    int getSpeed() { return speed; }

    

    // setter 함수
    void setNickname(string Name) { nickname = Name; }
    void setHP(int set_HP) { HP = set_HP; }
    void setPower(int set_power) { power = set_power; }
    void setDefence(int set_defence) { defence = set_defence; }
    void setSpeed(int set_speed) { speed = set_speed; }

    void attack(Player* player)
    {
        int Data = player->getDefence() - power;
        if (Data <= 1)
            player->setHP(player->getHP() - 1);
        else
            player->setHP(player->getHP() - Data);


        cout << " 몬스터가 팔을 휘두릅니다..." << endl;
    }


protected:
    string nickname;
    int HP;
    int power;
    int defence;
    int speed;

};

