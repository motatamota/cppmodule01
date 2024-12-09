/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:54:48 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/09 22:54:48 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie	*Zombie::newZombie(std::string str)
{
	Zombie	*zombie;

	zombie = new Zombie(str);
	return (zombie);
}
