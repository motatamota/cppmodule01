/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:55:34 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/09 22:55:34 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon
{
private:
	std::string	type;

public:
	Weapon(std::string newtype);
	~Weapon();
	std::string	&getType();
	void		setType(std::string newtype);
};

#endif
