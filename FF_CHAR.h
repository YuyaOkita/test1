#pragma once




class FF_CHAR {
public:
	int hp;
	int atk;
	int def;

	FF_CHAR( int h, int a, int d);
	void CoutSt();
	void magic(int* eneH, int eneD);
	void phisic(int* eneH, int eneD);

};