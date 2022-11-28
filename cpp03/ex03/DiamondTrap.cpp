#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(void) 
{
	std::cout << "Default constructor called for DiamondTrap" << std::endl;
	this->name = "Default";
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	//this->energyPoints = ScavTrap::energyPoints;
	ScavTrap::initEnergy();
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "Parametric constructor called for DiamondTrap" << std::endl;
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	ScavTrap::initEnergy();
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) {
	std::cout << "Copy constructor called for DiamondTrap." << std::endl;
	*this = src;
	return;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs) {
	if (this == &rhs)
		return (*this);
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "Destructor called for DiamondTrap." << std::endl;
}

void DiamondTrap::attack(const std::string & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << DiamondTrap::name << std::endl;
	std::cout << "My ClapTrap's name is " << ClapTrap::name << std::endl;
}
