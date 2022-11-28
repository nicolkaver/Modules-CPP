#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("John Doe"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Parametric constructor called." << std::endl;
	return;
}


ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = src;
	return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called." << std::endl;
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
	std::cout << GREEN << "*****ClapTrap's DATA*****" << NC << std::endl;
	std::cout << "HIT POINTS: " << getHitPoints() << std::endl;
	std::cout << "ENERGY POINTS: " << getEnergyPoints() << std::endl;
	std::cout << GREEN << "*************************" << NC << std::endl;
	std::cout << std::endl;
}

// GETTER AND SETTERS

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void ClapTrap::setHitPoints(const unsigned int amount)
{
	this->_hitPoints = amount;
}

void ClapTrap::setEnergyPoints(const unsigned int amount)
{
	this->_energyPoints = amount;
}

void ClapTrap::setAttackDamage(const unsigned int amount)
{
	this->_attackDamage = amount;
}
