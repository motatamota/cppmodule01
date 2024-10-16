#ifndef HUMANB_H
# define HUMANB_H
# include "Weapon.h"

class	HumanB
{
private:
	std::string	name;
	Weapon		*weapon;

public:
	HumanB(std::string newname);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &newweapon);
};

#endif