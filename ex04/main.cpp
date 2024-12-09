/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:55:41 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/09 22:55:41 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	myreplace(std::string str, char **av)
{
	unsigned long	n;
	unsigned long	pos;
	std::ofstream	o_file;
	std::string		file_name;
	std::string		src;
	std::string		dest;
	std::string		ans;

	file_name = *(av + 1);
	file_name +=  + ".replace";
	src = *(av + 2);
	dest = *(av + 3);
	o_file.open(file_name.c_str());
	n = 0;
	std::cout << str;
	while (n < str.size())
	{
		pos = str.find(src, n);
		if (pos == n)
		{
			ans = ans + dest;
			n += src.size();
		}
		else
		{
			ans = ans + str[n];
			n++;
		}
	}
	o_file << ans;
}

int	main(int ac, char **av)
{
	char			c;
	std::ifstream	s_file;
	std::string		str;

	if (ac != 4)
	{
		std::cout << "Error: Not appropriate arguments." << std::endl;
		return (1);
	}
	s_file.open(*(av + 1));
	if (s_file.fail())
	{
		std::cout << "Error: "<< *(av + 1) <<"Not appropriate filename." << std::endl;
		return (2);
	}
	s_file >> std::noskipws >> c;
	while (!s_file.eof())
	{
		str = str + c;
		s_file >> std::noskipws >> c;
	}
	s_file.close();
	myreplace(str, av);
	return (0);
}
