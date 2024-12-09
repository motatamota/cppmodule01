#include "Zombie.h"

Zombie::Zombie(std::string str) : name(str)
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