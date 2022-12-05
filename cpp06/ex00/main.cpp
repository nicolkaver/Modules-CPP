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
            std::cout << "CHAR\n"; //fall through
            convertFromChar(arg);
            break;
        case INT:
            std::cout << "INT\n"; //fall through
            convertFromInt(arg);
            break;
        case FLOAT:
            std::cout << "FLOAT\n"; // fall through;
            convertFromDouble(arg);
            break;
        case DOUBLE:
            std::cout << "DOUBLE\n"; //fall through
            convertFromDouble(arg);
            break;
        default:
            std::cout << "DEFAULT\n"; //fall through
            std::cout << RED << "Error : the entered type cannot be converted !" << std::endl;
    };
    return (0);
}