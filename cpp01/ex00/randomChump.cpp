#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie randomChump = Zombie(name);
    if (!name.empty())
        randomChump.announce();
}