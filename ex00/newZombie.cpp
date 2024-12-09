#include "Zombie.h"

Zombie	*Zombie::newZombie(std::string str)
{
	Zombie	*zombie;

	zombie = new Zombie(str);
	return (zombie);
}