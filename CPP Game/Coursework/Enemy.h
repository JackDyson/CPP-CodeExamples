#pragma once
#include "pch.h"

class Enemy
{
public:
	int health;
	string name;
	string EnemyType[3] = { "Ghoul", "Zombie", "Skeleton" };
	Enemy(int h);
	~Enemy();
	void setHealth(int h);
};

