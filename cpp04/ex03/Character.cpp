#include "Character.hpp"

Character::Character(std::string name): _name(name) {
    for(int i = 0; i < 4; i++)
	{
		this->_inventory[i] = 0;
	}
}

Character::Character(Character const & src) : ICharacter(src) {
	this->_name = src._name + "_copy";
	for(int i = 0; i < 4; i++)
	{
		if ((src._inventory)[i])
			(this->_inventory)[i] = (src._inventory[i])->clone();
	}
}

Character::~Character(void) {
    for (int i = 0; i < 4; i++)
	{
		if (getInventory(i))
			delete getInventory(i);
	}
}

Character & Character::operator=(Character const & rhs) {
    if (this == &rhs)
        return (*this);
    this->_name = rhs._name;
    for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (rhs._inventory[i])
			this->_inventory[i] = (rhs._inventory[i])->clone();
	}
    return (*this);
}

std::string const & Character::getName(void) const {
    return (this->_name);
}

void Character::equip(AMateria* m) {
    int i = 0;

    if (!m)
    {
        std::cout << RED << "No materia to equip !" << NC << std::endl;
        return;
    }
    while (getInventory(i) != 0 && i < 4)
        i++;
    if (i >= 4)
    {
        std::cout << RED << "There is only space for 4 materia !" << NC << std::endl;
        return;
    }
    (this->_inventory)[i] = m;
	std::cout << GREEN << getName() << " has equipped materia " << m->getType() << " at index " << i << NC << std::endl;
}

void Character::unequip(int idx) {
    if (idx < 0 || idx >= 4)
		std::cout << RED << "There is nothing to unequip at index " << idx << "." << NC << std::endl;
	else if (!getInventory(idx))
		std::cout << RED << "Index " << idx << " is empty so " << getName() << " cannot unequip it" << NC << std::endl;
	else
	{
		AMateria *mat = getInventory(idx);
		std::cout << GREEN << getName() << " has unequipped " << mat->getType() << " at index "<< idx << "." << NC << std::endl;
		this->_inventory[idx] = 0;
	}
}
void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= 4 || !getInventory(idx))
	{
		std::cout << RED << "Nothing found to use at index " << idx << "." << NC << std::endl;
		return ;
	}
	//std::cout << GREEN << getName() << ":" << NC << std::endl;
	(getInventory(idx))->use(target);
}

AMateria* Character::getInventory(int idx) const {
    return ((this->_inventory)[idx]);
}
