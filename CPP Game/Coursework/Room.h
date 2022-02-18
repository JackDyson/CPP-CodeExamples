#pragma once

#include "pch.h"
#include "EnemyRoom.h"
#include "EmptyRoom.h"
#include "ChestRoom.h"

class Room
{
public:
	Monk* p;
	Room(Monk* Player);
	~Room();
	void randomRoomSelect(EnemyRoom, ChestRoom);
};

