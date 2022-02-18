#include "Battle.h"

Battle::Battle(Monk* p, Enemy* o)
{
	Player = p;
	Opponent = o;
	defending = false;
}
Battle::~Battle()
{

}

void Battle::Attack()//player attack
{
	int enemyHealth = Opponent->health;
	int attackPower = Player->power;
	enemyHealth = enemyHealth - attackPower;
	Opponent->setHealth(enemyHealth);
}
void Battle::Defend()//player defend
{
	this->defending = true;
}
void Battle::EAttack()//Enemy attack
{
	int PlayerDefence = Player->defence;
	if (this->defending)
	{
		PlayerDefence = PlayerDefence*2;
	}
	int AttackPower = 40 - PlayerDefence;
	int playerHealth = Player->health - AttackPower;
	Player->setHealth(playerHealth);
}
void Battle::StartBattle()
{
	pch rnd;
	cout << endl;
	cout << "///////////////////////////////////////////////////" << endl;
	cout << "////////////////// BEGIN BATTLE ///////////////////" << endl;
	cout << "///////////////////////////////////////////////////" << endl;
	cout << endl << endl;
	rnd.delay(1);
	while (Opponent->health > 0)
	{
		int chanceToHit = rnd.RandomIntBetween(1, 2);
		cout << "Would you like to attack or defend?" << endl;;
		string userAnswer = rnd.inputLoopAD();
		if (userAnswer == "attack")
		{
			rnd.delay(1);
			cout << "..." << endl;
			rnd.delay(1);
			cout << "..." << endl;
			rnd.delay(1);
			cout << "..." << endl;
			rnd.delay(1);
			if (chanceToHit == 1)
			{
				Attack();
				cout << "You hit the " << Opponent->name << "!" << endl;
			}
			else
			{
				cout << "The " << Opponent->name << " dodged your attack!" << endl;
			}
			cout << endl;
			rnd.delay(1);
			if (Opponent->health > 0)
			{
				cout << "The " << Opponent->name << " has " << Opponent->health << " health left" << endl;
			}
			else
			{
				cout << "You killed the " << Opponent->name << endl;
			}
			cout << endl;
		}
		else
		{
			rnd.delay(1);
			if (chanceToHit == 1)
			{
				Defend();
				cout << "You brace yourself for impact" << endl;
			}
			else
			{
				cout << "You tried to defend but the " << Opponent->name << " was too quick!" << endl;
			}
		}
		rnd.delay(1);
		if (Opponent->health > 0)
		{
			int enemyChance = rnd.RandomIntBetween(1, 2);
			if (enemyChance == 1)
			{
				EAttack();
				cout << "The " << Opponent->name << " hit you!" << endl;
			}
			else
			{
				cout << "You managed to dodge their attack!" << endl;
			}
			cout << endl;
		}
		rnd.delay(1);
		cout << "You now have " << Player->health << " health remaining" << endl << endl;
		rnd.delay(1);
		this->defending = false;
		if (Player->health <= 0)
		{
			cout << endl << "You start to black out" << endl;
			rnd.delay(1);
			cout << "..." << endl;
			rnd.delay(1);
			cout << "..." << endl;
			rnd.delay(1);
			cout << "..." << endl;
			rnd.delay(1);
			cout << "You realise you have lost, there is nothing you can do to get back up" << endl << endl;
			rnd.delay(2);
			cout << "///////////////////////////////////////////////////" << endl;
			cout << "/////////////////// GAME OVER /////////////////////" << endl;
			cout << "///////////////////////////////////////////////////" << endl;
			rnd.delay(2);
			exit(1);
		}
	}
}