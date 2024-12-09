/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:55:22 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/09 22:55:22 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
