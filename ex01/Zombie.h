/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:55:07 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/09 22:55:07 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <iostream>

class Zombie
{
private:
	std::string name;

public:
	Zombie();
	~Zombie();
	Zombie	*newZombie(std::string str);
	void	randomChump(std::string str);
	void	announce(void);
	void	setName(std::string str);
	Zombie* zombieHorde( int N, std::string name);
};

#endif
