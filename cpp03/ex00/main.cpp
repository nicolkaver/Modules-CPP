#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap karl("Karl");

	karl.print();
	karl.attack("Robot");
	std::cout << std::endl;
	karl.takeDamage(2);
	std::cout << std::endl;
	karl.beRepaired(4);
	std::cout << std::endl;
	karl.takeDamage(20);
	std::cout << std::endl;
	karl.print();
	return 0;
}
