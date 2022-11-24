#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("John Doe") {
	std::cout << "Default constructor called for ClapTrap" << std::endl;
	this->name = "John Doe";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	return;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Parametric constructor called for ClapTrap." << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	return;
}


ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Copy constructor called for ClapTrap." << std::endl;
	*this = src;
	return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called for ClapTrap." << std::endl;
}

void ClapTrap::attack(const std::string & target)
{
	if (this->getHitPoints() == 0 || this->getEnergyPoints() == 0)
	{
		std::cout << RED << this->getName() << "does not have enough strength to attack !" << NC << std::endl;
		return ;
	}
	std::cout << GREEN << this->getName() << " attacks " << target;
	std::cout << " causing " << this->getAttackDamage() << " points of damage." << NC <<std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
	this->takeDamage(2);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (getHitPoints() <= amount)
	{
		setHitPoints(0);
		std::cout << RED << this->getName() << " died because he had no hit points left !" << NC << std::endl;
	}
	else
	{
		std::cout << GREEN << this->getName() << " has obtained " << amount << " points of damage." << NC << std::endl;
		setHitPoints(getHitPoints() - amount);
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHitPoints() == 0 || this->getEnergyPoints() == 0)
	{
		std::cout << RED << this->getName() << " does not have enough strength to get repaired !";
		std::cout << NC << std::endl;
		return ;
	}
	std::cout << GREEN << this->getName() << " is being repaired and obtains ";
	std::cout << amount << " brand new hit points." << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
	setHitPoints(getHitPoints() + amount);
}

void ClapTrap::print(void)
{
	std::cout << GREEN << "*****ClapTrap " << getName() << "'s DATA*****" << NC << std::endl;
	std::cout << "HIT POINTS: " << getHitPoints() << std::endl;
	std::cout << "ENERGY POINTS: " << getEnergyPoints() << std::endl;
	std::cout << GREEN << "*************************************" << NC << std::endl;
	std::cout << std::endl;
}

// GETTER AND SETTERS

std::string ClapTrap::getName(void) const
{
	return (this->name);
}

unsigned int ClapTrap::getHitPoints(void) const
{
	return (this->hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
	return (this->energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void) const
{
	return (this->attackDamage);
}

void ClapTrap::setHitPoints(const unsigned int amount)
{
	this->hitPoints = amount;
}

void ClapTrap::setEnergyPoints(const unsigned int amount)
{
	this->energyPoints = amount;
}

void ClapTrap::setAttackDamage(const unsigned int amount)
{
	this->attackDamage = amount;
}
