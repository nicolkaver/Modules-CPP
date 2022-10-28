#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::~Zombie(void)
{
    std::cout << this->_name << std::endl;
}

void Zombie::announce(std::string name)
{
    std::cout<< this->_name << ":";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void) const
{
    return (this->_name);
}