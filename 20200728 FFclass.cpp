#include <iostream>
#include <ctime>
using namespace std;
#include "FF_CHAR.h"
#include "ENEMY.h"



int main() {
	srand((unsigned int)time(NULL));

	int cpu = 0;

	int pinput;

	int n;

	int* farray = NULL;


	cin >> n;

	farray = new int[n];
;

		for (int i = 0; i < n; i++) {
			FF_CHAR farray[i] = 
			FF_CHAR(rand() % 11 + 20, rand() % 3 + 3, rand() % 6),
			};
		}

	for (int i = 0; i < 3; i++) {
		a[i].CoutSt();
	}

	ENEMY v(rand() % 100 + 50, rand() % 5 + 5, rand() % 6);
	v.CoutSt();


	while (true) {

		for (int i = 0; i < n; i++) {

			cout << "player" << i+1 << "のターン" << endl << "魔法：0、攻撃：1" << endl;

			cin >> pinput;


			if (pinput == 0) {
				cout << "魔法の攻撃" << endl;

				 a[i].magic(&v.hp, v.def);

				
			}
			else if (pinput == 1) {
				cout << "こうげき！" << endl;
				
				a[i].phisic(&v.hp, v.def);

			}

		}




		cout << endl << "cpu2のターン" << endl << endl;

		cpu = rand() % 2;

		



		//ffst[0].secret;//privateなのでエラーになる


	}
}