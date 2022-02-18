#include "Monk.h"

Monk::Monk(int h)
{
	health = h;
	power = 50;
	defence = 10;
}
void Monk::setHealth(int h)
{
	health = h;
}