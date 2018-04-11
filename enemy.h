#pragma once
class enemy
{
public:
	enemy();
	~enemy();

	int enemyHP;

	void pathFinding();
	void collision();
};

