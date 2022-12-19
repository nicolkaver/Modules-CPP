#include "conversion.hpp"

bool convertWords(std::string & str)
{
    if (str == "-inf" || str == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return (1);
	}
	if (str == "+inf" || str == "+inff" || str == "inf" || str == "inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return (1);
	}
	if (str == "nan" || str == "nanf")
	{
		std::cout << "char: impossible" << std::endl;		
        std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return (1);
	}
	return (0);
}

void convertFromChar(std::string & str)
{
    char c(str[0]);
    std::cout << "char: ";
    std::isprint(c) ? std::cout << "'" << c << "'" << std::endl : std::cout << "Non displayable" << std::endl;

    int i = static_cast<int>(c);
    std::cout << "int: " << i << std::endl;

    float f = static_cast<float>(c);
    std::cout << "float: " << f << ".0f" << std::endl;

    double d = static_cast<double>(c);
    std::cout << "double: " << d << ".0" << std::endl;
}

void convertFromInt(std::string & str)
{
    int i = static_cast<int>(std::strtol(str.c_str(), NULL, 10));
    
    char c = static_cast<char>(i);
    std::cout << "char: ";
    if (i < std::numeric_limits<char>::min() || i > std::numeric_limits<char>::max())
        std::cout << "impossible" << std::endl;
    else if (!std::isprint(c))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << c << "'" << std::endl;

    std::cout << "int: " << i << std::endl;
    
    float f = static_cast<float>(i);
    std::cout << "float: " << f << ".0f" << std::endl;

    double d = static_cast<double>(i);
    std::cout << "double: " << d << ".0" << std::endl;
}

void convertFromDouble(std::string & str)
{
    if (convertWords(str))
        return ;
    double d = std::strtod(str.c_str(), NULL);
    char c = static_cast<char>(d);
    std::cout << "char: ";
    if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
        std::cout << "impossible" << std::endl;
    else if (!std::isprint(c))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << c << "'" << std::endl;

    int i = static_cast<int>(d);
    std::cout << "int: ";
    if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
        std::cout << "impossible" << std::endl;
    else
        std::cout << i << std::endl;

    float f = static_cast<float>(d);
    std::cout << "float: ";
    if (floor(f) == f)
        std::cout << f << ".0f" << std::endl;
    else
        std::cout << f << "f" << std::endl;

    std::cout << "double: ";
    if (floor(d) == d)
        std::cout << d << ".0" << std::endl;
    else
        std::cout << d << std::endl;
}