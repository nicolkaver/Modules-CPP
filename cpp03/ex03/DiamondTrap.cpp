#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("Default"), ScavTrap(), FragTrap() {
	std::cout << "Default constructor called for DiamondTrap" << std::endl;
	this->name = "Default";
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() {
	std::cout << "Parametric constructor called for DiamondTrap" << std::endl;
	this->name = name;
	//ClapTrap::name = name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

/*DiamondTrap::DiamondTrap(DiamondTrap const & src) {
	std::cout << "Copy constructor called for DiamondTrap." << std::endl;
	*this = src;
	return;
}*/

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
