#include "AMateria.hpp"

AMateria::AMateria(void): type("default") {}

AMateria::AMateria(std::string const & type): type(type) {}

AMateria::AMateria(AMateria const & src) {
    this->type = src.type;
}

AMateria & AMateria::operator=(AMateria const & rhs) {
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

AMateria::~AMateria(void) {}

std::string const & AMateria::getType() const {
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << GREEN << "AMateria has been used on " << target.getName() << "." << NC << std::endl;
}
