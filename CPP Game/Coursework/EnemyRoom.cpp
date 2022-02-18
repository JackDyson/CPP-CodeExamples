#include "EnemyRoom.h"

EnemyRoom::EnemyRoom(Monk* Player)
{
	p = Player;
}

EnemyRoom::~EnemyRoom()
{

}

void EnemyRoom::BeginBattle()
{
	pch rnd;
	Enemy Opponent(rnd.RandomIntBetween(50, 100));
	cout << "You come face to face with a " << Opponent.name << endl;
	rnd.delay(1);
	cout << "They have " << Opponent.health << " health" << endl;
	Battle battle(p, &Opponent);
	battle.StartBattle();
}