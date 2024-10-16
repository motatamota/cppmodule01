#include "HumanB.h"

HumanB::HumanB(std::string newname) : name(newname), weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &newweapon)
{
	weapon = &newweapon;
}
