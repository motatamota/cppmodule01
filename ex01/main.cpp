# include "Zombie.h"

int	main()
{
	Zombie	zombie;
	Zombie	*zombies;
	int		n;

	zombie.setName("father");
	std::cout << "How many zombies?: ";
	std::cin >> n;
	zombies = zombie.zombieHorde(n, "child");
	delete [] zombies;
}