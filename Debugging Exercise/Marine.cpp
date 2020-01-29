#include "Marine.h"
#include "Entity.h"

Marine::Marine()
{
	health = 45;
}

Marine::~Marine()
{
}

int Marine::attack()
{
	return 6;
}

void Marine::takeDamage(int damage)
{
	health -= damage;
	if (health < 0)
	{
		health = 0;
	}
}
