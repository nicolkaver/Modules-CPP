#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "Default constructor called fot ScavTrap." << std::endl;
	this->name = "Jane Doe";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "Parametric constructor called for ScavTrap." << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	return;
}


ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout << "Copy constructor called for ScavTrap." << std::endl;
	*this = src;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Destructor called for ScavTrap." << std::endl;
}

void ScavTrap::attack(const std::string & target)
{
	if (this->getHitPoints() == 0 || this->getEnergyPoints() == 0)
	{
		std::cout << RED << this->getName() << " is dead ☠ !" << NC << std::endl;
		return ;
	}
	std::cout << GREEN << this->getName() << " attacks " << target << std::endl;
	std::cout << "This action has caused his target  " << this->getAttackDamage() << " points of damage." << NC <<std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}

void ScavTrap::guardGate(void)
{
	std::cout << BLUE << this->getName() << " is now in gate guarding mode." << NC << std::endl;
	std::cout << std::endl;
}
