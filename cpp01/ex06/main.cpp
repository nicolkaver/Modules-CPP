#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	std::string str;
	
	if (ac != 2)
	{
		std::cout << RED << "Error : Incorrect number of arguments." << NC << std::endl;
		return (1);
	}
	str.assign(av[1]);
	if (str.size() == 0)
	{
		std::cout << "Error : Please don't enter an empty string." << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}
