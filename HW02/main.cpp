#include <iostream>
#include "Thief.h"
#include "Warrior.h"
#include "Magician.h"
#include "Archer.h"

using namespace std;

// 메인 함수
int main() {
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    int job_choice = 0;
    string nickname;

    Player* players = nullptr;
    Monster* Test_monster = nullptr;

    Test_monster = new Monster("몬스터");

    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;

    cout << "<전직 시스템>" << endl;
    cout << nickname << "님, 환영합니다!" << endl;
    cout << "* 원하시는 직업을 선택해주세요." << endl;

    for (int i = 0; i < 4; i++) {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    cout << "선택: ";
    cin >> job_choice;

    switch (job_choice) {
    case 1:
        players = new Warrior(nickname);

        break;
    case 2:
        players = new Magician(nickname);
        break;
    case 3:
        players = new Thief(nickname);
        break;
    case 4:
        players = new Archer(nickname);
        break;
    default:
        cout << "잘못된 입력입니다." << endl;
        return 1;
    }

    players->attack(Test_monster);
    Test_monster->attack(players);

    if (Test_monster->getHP() <= 0)
        cout << " 몬스터가 사망하였습니다 ";
    else
        Test_monster->printPlayerStatus();
    players->printPlayerStatus();


    if (players != nullptr)
        delete players;

    return 0;
}