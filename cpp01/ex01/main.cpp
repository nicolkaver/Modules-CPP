#include "Zombie.hpp"

int main(void)
{
    int n_zombies = 5;
    std::string name = "LOL";
    if (!name.empty())
    {
        Zombie *zombies = zombieHorde(n_zombies, name);
        if (!zombies)
            return (1);
        for (int i = 0; i < n_zombies; i++)
        {
            zombies[i].announce();
            std::cout << std::endl;
        }
        delete [] zombies;
    }
    else
        std::cout << RED << "Zombies' name cannot stay empty !" << NC << std::endl;
    return (0);
}