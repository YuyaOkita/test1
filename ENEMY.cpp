#include <iostream>
using namespace std;
#include "ENEMY.h"


ENEMY::ENEMY(int h, int a, int d) {

	hp = h;
	atk = a;
	def = d;

}

void ENEMY::CoutSt() {

	cout << "�G" << endl;
	cout << "HP�@" << hp << endl;
	cout << "�U���́@" << atk << endl;
	cout << "�h��́@" << def << endl;
	cout << endl;

}




int  ENEMY::magic() {

	cout << "���@�̍U��!" << endl;

	int choose = rand() % 3;

	switch (choose) {
	case 0:cout << "10�_���[�W��^����!" << endl;
		return 10;
		break;

	case 1:cout << "15�_���[�W��^����!" << endl;

		return 15;
		break;

	case 2:cout << "�����hp��4�񕜂��Ă��܂���" << endl;

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
