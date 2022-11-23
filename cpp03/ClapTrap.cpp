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
	if (this->getHitPoints() <= 0 || this->getEnergyPoints() == 0)
	{
		std::cout << RED << this->getName() << "does not have enough strength to attack !" << NC << std::endl;
		return ;
	}
	std::cout << GREEN << "ClapTrap " << this->getName() << " attacks " << target;
	std::cout << "causing " << this->getAttackDamage() << " points of damage" << NC <<std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
	this->takeDamage(2);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->setDamagePoints(getDamagePoints() + amount);
	std::cout << GREEN << "ClapTrap " << this->getName() << " has obtained " << amount << " damage points,";
	std::cout << "amounting thus to a total of " << this->getDamagePoints() << NC << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHitPoints() <= 0 || this->getEnergyPoints() == 0)
	{
		std::cout << RED << "ClapTrap " << this->getName() << " does not have enough strength to get repaired !";
		std::cout << NC << std::endl;
		return ;
	}
	std::cout << GREEN << "ClapTrap " << this->getName() << " is being repaired and obtains ";
	std::cout << amount << " brand new hit points." << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
	setHitPoints(getHitPoints() + amount);
}

// GETTER AND SETTERS

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

int ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void setHitPoints(int amount)
{
	this->_hitPoints = amount;
}

void setEnergyPoints(int amount)
{
	this->_energyPoints = amount;
}

void setAttackDamage(int amount)
{
	this->_attackDamage = amount;
}


//Fixed operator-(Fixed const & rhs) const;
//Fixed operator+(Fixed const & rhs) const;

