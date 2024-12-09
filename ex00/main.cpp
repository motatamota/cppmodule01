# include "Zombie.h"

int	main()
{
	Zombie	zombie("alice");
	Zombie *newzombie;

	std::cout << "standard test" << std::endl;
	zombie.announce();

	std::cout << std::endl << "new test" << std::endl;
	newzombie = zombie.newZombie("bob");
	newzombie->announce();

	std::cout << std::endl << "random test" << std::endl;
	zombie.randomChump("charly");
	std::cout << std::endl;
	delete newzombie;
}
