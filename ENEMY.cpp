#include <iostream>
using namespace std;
#include "ENEMY.h"


ENEMY::ENEMY(int h, int a, int d) {

	hp = h;
	atk = a;
	def = d;

}

void ENEMY::CoutSt() {

	cout << "敵" << endl;
	cout << "HP　" << hp << endl;
	cout << "攻撃力　" << atk << endl;
	cout << "防御力　" << def << endl;
	cout << endl;

}




int  ENEMY::magic() {

	cout << "魔法の攻撃!" << endl;

	int choose = rand() % 3;

	switch (choose) {
	case 0:cout << "10ダメージを与えた!" << endl;
		return 10;
		break;

	case 1:cout << "15ダメージを与えた!" << endl;

		return 15;
		break;

	case 2:cout << "相手のhpを4回復してしまった" << endl;

		return -4;

		break;
	}
}

int ENEMY::phisic() {

	int random = rand() % 10;

	if (random == 0) {
		return atk * 2;
	}
	else {
		return atk;
	}
}
