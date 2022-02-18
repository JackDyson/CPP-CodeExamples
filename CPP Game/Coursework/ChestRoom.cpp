#include "ChestRoom.h"

ChestRoom::ChestRoom(Monk* Player)
{
	p = Player;
	pch rnd;
	defPowChance = rnd.RandomIntBetween(0, 1);
	item = rnd.RandomIntBetween(0, 1);
}
ChestRoom::~ChestRoom()
{

}
void ChestRoom::EnterRoom()
{
	if (defPowChance == 1)
	{
		cout << "You look inside the chest and find a new " << powList[item] << "!" << endl << endl;
		PowerPickup();
	}
	else
	{
		cout << "You look inside the chest and find a new " << defList[item] << "!" << endl << endl;
		DefencePickup();
	}
}
void ChestRoom::PowerPickup()
{
	int playerPower = p->power;
	playerPower = playerPower + 5;
	p->power = playerPower;
}
void ChestRoom::DefencePickup()
{
	int playerDefence = p->defence;
	playerDefence = playerDefence + 5;
	p->defence = playerDefence;
}