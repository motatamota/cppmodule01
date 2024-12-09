#include "Zombie.h"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << name << ": GoooodbyeeeeeE" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string str)
{
	name = str;
}