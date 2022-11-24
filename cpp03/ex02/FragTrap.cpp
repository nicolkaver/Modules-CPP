#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "Default constructor called fot FragTrap." << std::endl;
	this->name = "Jane Doe";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	return;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "Parametric constructor called for FragTrap." << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	return;
}


FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "Copy constructor called for FragTrap." << std::endl;
	*this = src;
	return;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

FragTrap::~FragTrap(void) {
	std::cout << "Destructor called for FragTrap." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::string str;

	while (str.compare("HIGH FIVE"))
	{
		std::cout << GREEN << this->getName() << ": GUYS, GIVE ME A HIGH FIVE PLS !" << NC << std::endl;
		getline(std::cin, str);
	}
	std::cout << std::endl;	
}
