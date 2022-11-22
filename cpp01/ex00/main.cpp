#include "Zombie.hpp"

int main(void)
{
    std::cout << std::endl << "First zombie \033[4mMichel\033[0m, created manually" << std::endl;
    Zombie michel("Michel");
    if (!michel.getName().empty())
        michel.announce();
    std::cout << std::endl << "Second zombie \033[4mLouis\033[0m, created with the function newZombie" << std::endl;
    Zombie *louis = newZombie("Louis");
    if (!louis->getName().empty())
        louis->announce();
    delete louis;
    std::cout << std::endl << "Third zombie \033[4mAdam\033[0m, created with the function randomChump" << std::endl;
    randomChump("Adam");
    return (0);
}