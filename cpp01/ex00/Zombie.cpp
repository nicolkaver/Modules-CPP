#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) 
{
    if (this->getName().empty())
        std::cout << RED << "Constructor called but name is missing" << NC << std::endl;
    else
        std::cout << "The constructor was called for " << name << std::endl;
}

Zombie::~Zombie(void) 
{
    if (this->getName().empty())
        std::cout << RED << "Destructor called but name is missing" << NC << std::endl;
    else
        std::cout << "The destructor was called for " << getName() << std::endl << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->getName() << ": ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void) const
{
    return (this->_name);
}