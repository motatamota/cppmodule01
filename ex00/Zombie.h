#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <iostream>

class Zombie
{
private:
	std::string name;

public:
	Zombie(std::string str);
	~Zombie();
	Zombie	*newZombie(std::string str);
	void	randomChump(std::string str);
	void	announce(void);
};

#endif