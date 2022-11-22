#include "Zombie.hpp"

Zombie::Zombie(void): _name("default")
{
    static int i = 1;
    std::cout << "The constructor was called for zombie no. " << i << std::endl << std::endl;
    i++;
}

Zombie::~Zombie(void) 
{
    static int i = 1;
    std::cout << "The destructor was called for zombie no. " << i << std::endl << std::endl;
    i++;
}

void Zombie::announce(void) const
{
    std::cout << this->getName() << ": ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void) const
{
    return (this->_name);
}

bool Zombie::setName(std::string name)
{
    if (name.empty())
        return false;
    this->_name = name;
    return true;
}