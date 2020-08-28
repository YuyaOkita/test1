#pragma once

class ENEMY {
public:
	int hp;
	int atk;
	int def;

	ENEMY(int h, int a, int);
	void CoutSt();

	int magic();
	int phisic();
};