#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {}

Ice::Ice(std::string const & type): type(type) {}

Ice::Ice(Ice const & src)//: AMateria(src) 
{
    this->type = src.type;
}

Ice & Ice::operator=(Ice const & rhs) {
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

Ice::~Ice(void) {}

Ice* Ice::clone() const {
    Ice *ret = new Ice;
    return (ret);
}

void Ice::use(ICharacter& target) {
	std::cout << GREEN "*shoots an ice bolt at " << target.getName() << "*" << NC << std::endl;
}
