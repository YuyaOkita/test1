#include <iostream>
using namespace std;
#include "FF_CHAR.h"




FF_CHAR::FF_CHAR( int h, int a, int d) {
	hp = h;
	atk= a;
	def = d;

}

void FF_CHAR::CoutSt() {
	cout << "HP：" << hp << endl;
	cout << "攻撃力：" << atk << endl;
	cout << "防御力：" << def << endl;
}


void  FF_CHAR::magic(int* eneH, int eneD) {


	int choose = rand() % 3;

	switch (choose) {
	case 0:cout << "10ダメージを与えた!" << endl;
		cout << eneD << "ダメージ防がれた！" << endl;
		cout <<* eneH << "→";
		
		*eneH -=  10 - eneD;
		cout  <<* eneH << endl;
		break;

	case 1:cout << "15ダメージを与えた!" << endl;
		cout << eneD << "ダメージ防がれた！" << endl;
		cout <<* eneH << "→";
	
		*eneH -= 15 - eneD;
		cout <<* eneH << endl;
		
		 break;

	case 2:cout << "hpを4回復した" << endl;
		
		cout << hp << "→";
		
		hp += 4;
		cout << hp << endl;
		
		break;
	}
}

void FF_CHAR::phisic(int* eneH, int eneD) {
	
	int random = rand() % 10;

	if (random == 0) {
		cout << "会心！" << endl << atk * 2 << "ダメージを与えた" << endl;
		cout << eneD << "ダメージ防がれた" << endl;
		cout <<* eneH << "→";

		* eneH -= atk * 2 - eneD;
		cout <<* eneH << endl;
	}
	else{
		cout << atk << "ダメージを与えた" << endl;
		cout << eneD << "ダメージ防がれた" << endl;
		cout <<* eneH << "→";

		* eneH -= atk - eneD;
		cout <<* eneH << endl;
		
	}
}
