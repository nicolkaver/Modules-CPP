#include "Replace.hpp"

int argsErr(void)
{
    std::cout << "Error: Wrong number of arguments" << std::endl;
    std::cout << "Format: ./Replace filename s1 s2" << std::endl;
    return (1);
}

int main(int ac, char **av)
{
    Replace sed;

    if (ac != 4)
        return (argsErr());
    
    return (0);
}