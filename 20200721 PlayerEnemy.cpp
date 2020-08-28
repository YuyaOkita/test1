#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int PARTY_NUM = 3;

class PLAYER {
	public:
	

		int hp[PARTY_NUM];
		int GetHp(int i);
		void SetHp(int i, int value);

		int atk[PARTY_NUM];
		int GetAtk(int i);
		void SetAtk(int i, int value);

		int def[PARTY_NUM];
		int GetDef(int i);
		void SetDef(int i, int value);

		PLAYER();
		
		
	void magic(int h1);
	void phisic(int atk);

private:
	void CheckIndex(int i);
};

int PLAYER::GetHp(int i) {
	CheckIndex(i);
	return hp[i];
}

void PLAYER::SetHp(int i, int value) {
	CheckIndex(i);
	hp[i] = value;
}


int PLAYER::GetAtk(int i) {
	CheckIndex(i);
	return atk[i];
}

void PLAYER::SetAtk(int i, int value) {
	CheckIndex(i);
	atk[i] = value;
}

int PLAYER::GetDef(int i) {
	CheckIndex(i);
	return def[i];
}

void PLAYER::SetDef(int i, int value) {
	CheckIndex(i);
	def[i] = value;
}

void PLAYER::CheckIndex(int i) {
	if (0 <= i && i < PARTY_NUM) {
		//正常
	}
	else {
		cout << "インデックスが不正です" << endl
			<< "値：" << i << endl;;
		exit(EXIT_FAILURE);
	}
}


void PLAYER::magic(int h1) {

	cout << "魔法の攻撃!" << endl;

	int choose = rand() % 3;

	switch (choose) {
	case 0:cout << "10ダメージを与えた!" << endl;
		cout << def << "ダメージカットされた" << hp << "→";
		hp -= 10 - def;
		cout << hp << endl; break;

	case 1:cout << "15ダメージを与えた!" << endl;
		cout << def << "ダメージカットされた" << hp << "→";
		hp -= 15 - def;
		cout << hp << endl; break;

	case 2:cout << "hpを4回復した" << endl;
		cout << h1 << "→";
		h1 += 4; 
		cout << h1 << endl;
		break;
	}
}

void PLAYER::phisic(int atk) {

	cout << "こうげき！" << endl;

	int choose = rand() % 10;

	if (choose == 0) {

		cout << "会心の一撃！" << endl;
		cout << atk * 2 << "ダメージを与えた!" << endl;
		cout << def << "ダメージカットされた" << hp << "→";		
		hp -= (atk * 2) - def;
		cout << hp << endl;
	}
	else {
		cout << atk << "ダメージを与えた!" << endl;
		cout << def << "ダメージカットされた" << hp << "→";
		hp -= atk - def;
		cout << hp << endl;
	}

}



int main() {
	srand((unsigned int)time(NULL));

	PLAYER player;


	
	for (int i = 0; i < 3; i++) {

		player.GetHp(i);
		player.SetHp(i, rand() % 11 + 20);
		cout << 
	}


	while(true) {
		
		cout << "cpu1のターン" << endl << endl;
		
		a_cpu = rand() % 2;

		switch (a_cpu) {
		case 0:ffst[1].magic(ffst[0].hp); break;
		case 1:ffst[1].phisic(ffst[0].atk); break;
		}

		cout << endl << "cpu2のターン" << endl << endl;

		b_cpu = rand() % 2;

		switch (b_cpu) {

		case 0:ffst[0].magic(ffst[1].hp); break;
		case 1:ffst[0].phisic(ffst[1].atk); break;
			
		}
		cout << endl;

		if (ffst[0].hp < 0) {
			cout << "cpu2の勝利" << endl;
			break;
		}
		else if (ffst[1].hp < 0) {
			cout << "cpu1の勝利" << endl;
			break;
		}

	}



	//ffst[0].secret;//privateなのでエラーになる


}