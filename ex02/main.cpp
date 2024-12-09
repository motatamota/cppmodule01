#include <iostream>
#include <string>

int	main()
{
	std::string	str;
	std::string	*stringPTR;
	std::string	&stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::cout << "Memorry" << std::endl;
	std::cout << "variable: " << &str << std::endl;
	std::cout << "pointer: " << &stringPTR << std::endl;
	std::cout << "reference: " << &stringREF << std::endl << std::endl;
	std::cout << "value" << std::endl;
	std::cout << "variable: " << str << std::endl;
	std::cout << "pointer: " << *stringPTR << std::endl;
	std::cout << "reference: " << stringREF << std::endl;
}