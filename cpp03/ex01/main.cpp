#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap robert("Robot no. 1");
	ScavTrap karl("Robot no. 3");

	robert.print();
	robert.attack("Robot");
	std::cout << std::endl;
	robert.takeDamage(6);
	std::cout << std::endl;
	robert.beRepaired(4);
	std::cout << std::endl;
	robert.takeDamage(20);
	std::cout << std::endl;
	robert.print();

	karl.print();
	karl.attack("Robot no. 4");
	std::cout << std::endl;
	karl.takeDamage(6);
	std::cout << std::endl;
	karl.beRepaired(4);
	std::cout << std::endl;
	karl.takeDamage(20);
	std::cout << std::endl;
	karl.guardGate();
	karl.print();
	return 0;
}
