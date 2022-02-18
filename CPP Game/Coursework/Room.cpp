#include "Room.h"

Room::Room(Monk* Player)
{
	p = Player;
	EnemyRoom enemyRoom(p);
	ChestRoom chestRoom(p);
	
	randomRoomSelect(enemyRoom, chestRoom);
}
Room::~Room()
{

}
void Room::randomRoomSelect(EnemyRoom enemyRoom, ChestRoom chestRoom)
{
	pch rnd;
	int n = rnd.RandomIntBetween(0, 2);
	if (n == 0)
	{
		cout << "The room is empty" << endl;
		if (p->health < 100)
		{
			rnd.delay(1);
			cout << "Your health is low, would you like to heal?" << endl;
			if (rnd.inputLoopYN() == "yes")
			{
				p->health = p->health + 30;
				if (p->health > 100)
				{
					p->health = 100;
				}
				rnd.delay(1);
				cout << "You healed 30 health points" << endl << endl;
				rnd.delay(1);
				cout << "Your health is now " << p->health << endl;
			}
		}
	}
	else if (n == 1)
	{
		cout << "You come across a room with a single chest in the centre" << endl;
		rnd.delay(1);
		cout << "Will you open it?" << endl;
		rnd.delay(1);
		string playerAnswer = rnd.inputLoopYN();
		if (playerAnswer.compare("yes") == 0)
		{
			rnd.delay(1);
			cout << "..." << endl;
			rnd.delay(1);
			cout << "..." << endl;
			rnd.delay(1);
			cout << "..." << endl;
			rnd.delay(1);
			chestRoom.EnterRoom();

		}
		else
		{
			cout << "You decide it's best to leave this one alone and move on" << endl;
			rnd.delay(1);
		}
	}
	else if (n == 2)
	{
		cout << endl;
		enemyRoom.BeginBattle();
	}
	enemyRoom.~EnemyRoom();
	chestRoom.~ChestRoom();
	this->~Room();
}
