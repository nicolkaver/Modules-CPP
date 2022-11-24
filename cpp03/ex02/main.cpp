#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap robert("CLAP");
	ScavTrap karl("SCAV");
	FragTrap mark("FRAG");

	robert.print();
	robert.attack("Robot1");
	std::cout << std::endl;
	robert.takeDamage(6);
	std::cout << std::endl;
	robert.beRepaired(4);
	std::cout << std::endl;
	robert.takeDamage(20);
	std::cout << std::endl;
	robert.print();

	mark.highFivesGuys();

	karl.print();
	karl.attack("Robot2");
	std::cout << std::endl;
	karl.takeDamage(6);
	std::cout << std::endl;
	karl.beRepaired(4);
	std::cout << std::endl;
	karl.takeDamage(20);
	std::cout << std::endl;
	karl.guardGate();
	karl.print();

	mark.print();
	mark.attack("Robot3");
	std::cout << std::endl;
	mark.takeDamage(200);
	mark.highFivesGuys();
	return 0;
}
