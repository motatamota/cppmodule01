#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.h"

class	HumanA
{
private:
	std::string	name;
	Weapon		&weapon;

public:
	HumanA(std::string newname, Weapon &obj);
	~HumanA();
	void	attack();
};

#endif