#include "Zombie.hpp"

Zombie::Zombie(void): _name("default")
{
    std::cout << "The constructor was called" << std::endl << std::endl;
}

Zombie::~Zombie(void) 
{
    std::cout << "The destructor was called for " << getName() << std::endl << std::endl;
}

void Zombie::announce(void) const
{
    std::cout << this->getName() << ":";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void) const
{
    return (this->_name);
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}