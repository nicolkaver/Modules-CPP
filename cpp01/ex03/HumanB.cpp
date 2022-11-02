#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {}

HumanB::~HumanB(void) {}

void HumanB::attack(void) const
{
    std::cout << this->getName() << " attacks with their " << getWeapon().getType() << std::endl;
}

Weapon&	HumanB::getWeapon(void) const
{
	return (*(this->_weapon));
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

std::string HumanB::getName(void) const
{
    return (this->_name);
}