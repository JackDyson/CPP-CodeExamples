#include "Enemy.h"

Enemy::Enemy(int h)
{
	this->health = h;
	pch rnd;
	this->name = EnemyType[rnd.RandomIntBetween(0, 2)];// selects a random name for the enemy
}
Enemy::~Enemy()
{
	
}
void Enemy::setHealth(int h)
{
	this ->health = h;
}
