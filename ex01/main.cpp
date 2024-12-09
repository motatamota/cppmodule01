# include "Zombie.h"

int	main()
{
	Zombie	zombie;
	Zombie	*zombies;
	int		n;
	int		l;

	zombie.setName("father");
	std::cout << "How many zombies?: ";
	std::cin >> n;
	zombies = zombie.zombieHorde(n, "child");
	l = 0;
	while (l < n)
	{
		zombies[l].announce();
		l++;
	}
	delete [] zombies;
}
