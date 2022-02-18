#pragma once

#include "pch.h"
#include "Monk.h"
#include "Battle.h"

class EnemyRoom
{
public:
	Monk* p;
	EnemyRoom(Monk* Player);
	~EnemyRoom();
	void BeginBattle();
};

