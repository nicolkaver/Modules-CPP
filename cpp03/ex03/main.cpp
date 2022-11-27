#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap robert("CLAP");
	ScavTrap karl("SCAV");
	FragTrap mark("FRAG");
	DiamondTrap ed("DIAMOND");

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

	ed.print();
	ed.attack("Robot4");
	std::cout << std::endl;
	ed.takeDamage(10);
	std::cout << std::endl;
	ed.beRepaired(2);
	std::cout << std::endl;
	ed.takeDamage(100);
	std::cout << std::endl;
	ed.print();

	return 0;
}
