#include "Zombie.hpp"

int main(void)
{
    
    std::cout << std::endl << "First zombie \033[4mMichel\033[0m, created manually" << std::endl;
    Zombie michel("Michel");
    michel.announce();
    std::cout << std::endl << "Second zombie Louis, created with the function newZombie" << std::endl;
    Zombie *louis = newZombie("Louis");
    louis->announce();
    delete louis;
    std::cout << std::endl << "Third zombie Adam, created with the function randomChump" << std::endl;
    randomChump("Adam");
    return (0);
}