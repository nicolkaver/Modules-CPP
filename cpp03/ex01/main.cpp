#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap karl("Karl");

	karl.attack("Robot");
	std::cout << std::endl;
	karl.takeDamage(6);
	std::cout << std::endl;
	karl.beRepaired(4);
	std::cout << std::endl;
	karl.takeDamage(20);
	return 0;
}
