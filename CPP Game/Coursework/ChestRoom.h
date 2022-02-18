#pragma once

#include "pch.h"
#include "Monk.h"

class ChestRoom
{
private:
	int defPowChance;
	int item;
	Monk* p;
	string defList[2] = { "Helmet", "Sheild" };
	string powList[2] = { "Sword", "dagger" };
public:
	ChestRoom(Monk* Player);
	~ChestRoom();
	void EnterRoom();
	void PowerPickup();//increase power when you get a specific chest item
	void DefencePickup();//increase defence when you get a specific chest item
};

