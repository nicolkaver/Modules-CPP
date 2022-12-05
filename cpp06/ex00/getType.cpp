#include "conversion.hpp"

bool isItChar(std::string & str) {
    return (str.length() == 1 && !std::isdigit(str[0]));
}

bool isItInt(std::string & str) {
    char *end;
    long int num;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return false;
    }
    num = strtol(str.c_str(), &end, 10);
    return (num >= std::numeric_limits<int>::min()
		&& num <= std::numeric_limits<int>::max());
}

bool isItDouble(std::string & str)
{
    char *end;
    errno = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]) || str[i] != '.')
            return false;
    }
    if (str == "nan" || str == "+inf" || str == "-inf")
        return true;
    double d = std::strtod(str.c_str(), &end);
    std::cout << d << std::endl;
    if (!end[0] || errno == ERANGE)
        return false;
    return true;
}

bool isItFloat(std::string & str)
{
    char *end;
    double input;

    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]) || str[i] != '.' || str[i] != 'f')
            return false;
    }
    input = strtod(str.c_str(), &end);
    if (str == "nanf" || str == "inff" || str == "-inff")
        return true;
    if (std::string(end) != "f" || std::abs(input) > std::numeric_limits<float>::max())
        return false;
    return true;
}

int getType(std::string & str)
{
    if (isItChar(str))
        return (CHAR);
    else if (isItInt(str))
        return (INT);
    else if (isItFloat(str))
        return (FLOAT);
    else if (isItDouble(str))
        return (DOUBLE);
    return (-1);
}