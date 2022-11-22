#include "Zombie.hpp"

Zombie *newZombie( std::string name )
{
    Zombie *newZombie = new Zombie(name);
    if (!newZombie)
    {
        std::cout << RED << "Allocation failed" << NC << std::endl;
        return (NULL);
    }
    return (newZombie);
}