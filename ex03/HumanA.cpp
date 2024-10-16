#include "HumanA.h"

HumanA::HumanA(std::string newname, Weapon &obj) : name(newname), weapon(obj)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
