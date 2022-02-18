#pragma once

#include "pch.h"
#include "Monk.h"
#include "Enemy.h"

class Battle
{
private:
	string inputA[4] = { "ATTACK","Attack","A","a" };//list of allowed inputs for Attack
	string inputD[4] = { "DEFEND","Defend","D","d" };//list of allowed inputs for Defend
	bool defending;
	Enemy* Opponent;
	Monk* Player;
public:
	Battle(Monk* p, Enemy* o);
	~Battle();
	void Attack();//player attack
	void Defend();//player defend
	void EAttack();//Enemy attack
	void StartBattle();
};

