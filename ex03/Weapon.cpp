/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:55:32 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/09 22:55:32 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(std::string newtype)
{
	type = newtype;
}

Weapon::~Weapon()
{
}

std::string	&Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string newtype)
{
	type = newtype;
}
