#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <cmath>
# include <cstring>
# include <cstdlib>
# include <cerrno>
# include <limits>
# include <cctype>

# define CHAR 0
# define INT 1
# define DOUBLE 2
# define FLOAT 3

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define BLUE "\033[1;34m"
# define NC "\033[0m"
# define CBLUE(x) BLUE x NC
# define CRED(x) RED x NC

// GET TYPE
int getType(std::string &);
bool isChar(std::string &);
bool isItChar(std::string &);
bool isItInt(std::string &);
bool isItFloat(std::string &);

//PRINT CONVERSION
void convertFromChar(std::string &);
void convertFromInt(std::string &);
void convertFromFloat(std::string &);
void convertFromDouble(std::string &);
bool convertWords(std::string & str);

#endif