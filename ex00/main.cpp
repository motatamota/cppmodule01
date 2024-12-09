/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:54:45 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/09 22:54:45 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.h"

int	main()
{
	Zombie	zombie("alice");
	Zombie *newzombie;

	std::cout << "standard test" << std::endl;
	zombie.announce();

	std::cout << std::endl << "new test" << std::endl;
	newzombie = zombie.newZombie("bob");
	newzombie->announce();

	std::cout << std::endl << "random test" << std::endl;
	zombie.randomChump("charly");
	std::cout << std::endl;
	delete newzombie;
}
