#pragma once

#include "pch.h"
#include "Monk.h"

class EmptyRoom
{
public:
	Monk* p;
	EmptyRoom(Monk* Player);
	void Heal();//heal when in an empty room
};

