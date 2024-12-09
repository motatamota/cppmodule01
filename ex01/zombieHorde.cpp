/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:55:13 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/09 22:55:13 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*zombies;
	int		n;

	zombies = new Zombie[N];
	n = 0;
	while (n < N)
	{
		(zombies + n)->setName(name);
		n++;
	}
	return (zombies);
}
