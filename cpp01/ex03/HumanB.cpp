#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {}

HumanB::~HumanB(void) {}

void HumanB::attack(void) const
{
    std::string name = getName();
    Weapon weaponx = getWeapon();
    if (name.empty() || weaponx.getType().empty())
    {
        std::cout << RED << "Sorry, you cannot enter an empty string." << NC << std::endl;
        return ;
    }
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