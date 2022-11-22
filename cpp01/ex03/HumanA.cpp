#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) {}

HumanA::~HumanA(void) {}

void HumanA::attack(void) const
{
    std::string name = getName();
    Weapon &weaponx = getWeapon();
    if (name.empty() || weaponx.getType().empty())
    {
        std::cout << RED << "Sorry, you cannot enter an empty string." << NC << std::endl;
        return ;
    }
    std::cout << this->getName() << " attacks with their " << getWeapon().getType() << std::endl;
}

Weapon&	HumanA::getWeapon(void) const
{
	return (this->_weapon);
}

std::string HumanA::getName(void) const
{
    return (this->_name);
}