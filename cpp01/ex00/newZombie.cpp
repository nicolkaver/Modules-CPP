#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie* newZombie = new Zombie(_name);
    return (newZombie);
}