#include "Zombie.hpp"

int main(void)
{
    Zombie *zombies = zombieHorde(3, "Michel");
    for (int i = 0; i < 3; i++)
    {
        zombies[i].announce();
        std::cout << std::endl;
    }
    delete [] zombies;
    return (0);
}