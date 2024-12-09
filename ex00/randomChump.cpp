#include "Zombie.h"

void	Zombie::randomChump(std::string str)
{
	Zombie	zombie(str);

	zombie.announce();
}