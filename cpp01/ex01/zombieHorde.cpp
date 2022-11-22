#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
    {
        std::cout << RED << "You need to have at least one zombie !" << NC << std::endl;
        return (NULL);
    }
    Zombie *zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombies[i].setName(name);
    return (zombies);
}