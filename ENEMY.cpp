#include <iostream>
using namespace std;
#include "ENEMY.h"


ENEMY::ENEMY(int h, int a, int d) {

	hp = h;
	atk = a;
	def = d;

}

void ENEMY::CoutSt() {

	cout << "“G" << endl;
	cout << "HP@" << hp << endl;
	cout << "UŒ‚—Í@" << atk << endl;
	cout << "–hŒä—Í@" << def << endl;
	cout << endl;

}




int  ENEMY::magic() {

	cout << "–‚–@‚ÌUŒ‚!" << endl;

	int choose = rand() % 3;

	switch (choose) {
	case 0:cout << "10ƒ_ƒ[ƒW‚ð—^‚¦‚½!" << endl;
		return 10;
		break;

	case 1:cout << "15ƒ_ƒ[ƒW‚ð—^‚¦‚½!" << endl;

		return 15;
		break;

	case 2:cout << "‘ŠŽè‚Ìhp‚ð4‰ñ•œ‚µ‚Ä‚µ‚Ü‚Á‚½" << endl;

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
