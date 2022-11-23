#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {}

HumanB::~HumanB(void) {}

void HumanB::attack(void) const
{
    if (!this->_weapon)
    {
	std::cout << RED << "No weapon, no attack !!!" << NC << std::endl;
    	return;
    }
    if (getName().empty() || getWeapon().getType().empty())
    {
        std::cout << RED << "Sorry, you cannot enter an empty string." << NC << std::endl;
        return ;
    }
    std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
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
