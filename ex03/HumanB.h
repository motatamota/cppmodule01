/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:55:27 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/09 22:55:27 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
