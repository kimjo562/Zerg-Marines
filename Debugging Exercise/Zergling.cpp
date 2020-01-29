#include "Zergling.h"
#include "Entity.h"

Zergling::Zergling()
{
	health = 35;
}

Zergling::~Zergling()
{
}

int Zergling::attack()
{
	return 5;
}

void Zergling::takeDamage(int damage)
{
	health -= damage;
	if (health < 0)
	{
		health = 0;
	}
}
