/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:54:59 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/09 22:54:59 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.h"

int	main()
{
	Zombie	zombie;
	Zombie	*zombies;
	int		n;
	int		l;

	zombie.setName("father");
	std::cout << "How many zombies?: ";
	std::cin >> n;
	zombies = zombie.zombieHorde(n, "child");
	l = 0;
	while (l < n)
	{
		zombies[l].announce();
		l++;
	}
	delete [] zombies;
}
