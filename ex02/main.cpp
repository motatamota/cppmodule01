/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:55:16 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/09 22:55:16 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	str;
	std::string	*stringPTR;
	std::string	&stringREF = str;

	stringPTR = &str;
	str = "HI THIS IS BRAIN";
	std::cout << "Memorry" << std::endl;
	std::cout << "variable: " << &str << std::endl;
	std::cout << "pointer: " << &stringPTR << std::endl;
	std::cout << "reference: " << &stringREF << std::endl << std::endl;
	std::cout << "value" << std::endl;
	std::cout << "variable: " << str << std::endl;
	std::cout << "pointer: " << stringPTR << std::endl;
	std::cout << "*pointer: " << *stringPTR << std::endl;
	std::cout << "reference: " << stringREF << std::endl;
}
