#include "conversion.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << CRED("Error: Wrong number of arguments !") << std::endl;
        return (1);
    }
    std::string arg(av[1]);
    if (!arg.size())
    {
        std::cout << CRED("Error: Empty string !") << std::endl;
        return (1);
    }
    int type = getType(arg);
    switch(type)
    {
        case CHAR:
            convertFromChar(arg);
            break;
        case INT:
            convertFromInt(arg);
            break;
        case FLOAT:
            convertFromDouble(arg);
            break;
        case DOUBLE:
            convertFromDouble(arg);
            break;
        default:
            std::cout << RED << "Error : the entered type cannot be converted !" << std::endl;
    };
    return (0);
}