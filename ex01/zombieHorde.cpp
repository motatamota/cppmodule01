#include "Zombie.h"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*zombies;
	int		n;

	zombies = new Zombie[N];
	n = 0;
	while (n < N)
	{
		(zombies + n)->setName(name);
		n++;
	}
	return (zombies);
}
