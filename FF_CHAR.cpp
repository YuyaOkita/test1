#include <iostream>
using namespace std;
#include "FF_CHAR.h"




FF_CHAR::FF_CHAR( int h, int a, int d) {
	hp = h;
	atk= a;
	def = d;

}

void FF_CHAR::CoutSt() {
	cout << "HP�F" << hp << endl;
	cout << "�U���́F" << atk << endl;
	cout << "�h��́F" << def << endl;
}


void  FF_CHAR::magic(int* eneH, int eneD) {


	int choose = rand() % 3;

	switch (choose) {
	case 0:cout << "10�_���[�W��^����!" << endl;
		cout << eneD << "�_���[�W�h���ꂽ�I" << endl;
		cout <<* eneH << "��";
		
		*eneH -=  10 - eneD;
		cout  <<* eneH << endl;
		break;

	case 1:cout << "15�_���[�W��^����!" << endl;
		cout << eneD << "�_���[�W�h���ꂽ�I" << endl;
		cout <<* eneH << "��";
	
		*eneH -= 15 - eneD;
		cout <<* eneH << endl;
		
		 break;

	case 2:cout << "hp��4�񕜂���" << endl;
		
		cout << hp << "��";
		
		hp += 4;
		cout << hp << endl;
		
		break;
	}
}

void FF_CHAR::phisic(int* eneH, int eneD) {
	
	int random = rand() % 10;

	if (random == 0) {
		cout << "��S�I" << endl << atk * 2 << "�_���[�W��^����" << endl;
		cout << eneD << "�_���[�W�h���ꂽ" << endl;
		cout <<* eneH << "��";

		* eneH -= atk * 2 - eneD;
		cout <<* eneH << endl;
	}
	else{
		cout << atk << "�_���[�W��^����" << endl;
		cout << eneD << "�_���[�W�h���ꂽ" << endl;
		cout <<* eneH << "��";

		* eneH -= atk - eneD;
		cout <<* eneH << endl;
		
	}
}
