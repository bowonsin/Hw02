#pragma once
#include <iostream>
#include <string>

using namespace std;

class Monster;

class Player {
public:
    Player(string set_nickname)
    {
        job_name = " 직업 ";
        level = 0;
        nickname = set_nickname;
        power = 30;
        HP = 10;
        MP = 0;
        defence = 10;
        speed = 10;
        accuracy = 0;

    }

    virtual void attack(Monster* monster) = 0;
    void printPlayerStatus()
    {
        {
            cout << endl;
            cout << " 직업 :  " << job_name << endl;
            cout << " 이름 :  " << nickname<< endl;
            cout << " Level  : " << level << endl;
            cout << " HP : " << HP << endl;
            cout << " MP : " << MP << endl;
            cout << " Power : " << power << endl;
            cout << " 방어력 : " << defence << endl;
            cout << " 명중률 : " << accuracy << endl;
            cout << " 속도 : " << speed << endl;
        }
    }

    // getter 함수
    string getJobName() { return job_name; }
    string getNickname() { return nickname; }
    int getLevel() { return level; }
    int getHP() { return HP; }
    int getMP() { return MP; }
    int getPower() { return power; }
    int getDefence() { return defence; }
    int getAccuracy() { return accuracy; }
    int getSpeed() { return speed; }

    // setter 함수
    void setNickname(string Name) { nickname = Name; }
    void setHP(int set_HP) { HP = set_HP; }
    void setMP(int set_MP) { MP = set_MP; }
    void setPower(int set_power) {power = set_power;}
    void setDefence(int set_defence) { defence = set_defence; }
    void setAccuracy(int set_accuracy) { accuracy = set_accuracy; }
    void setSpeed(int set_speed) { speed = set_speed; }

   

protected:
    string job_name;
    string nickname;
    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int accuracy;
    int speed;
};