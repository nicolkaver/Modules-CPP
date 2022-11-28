#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {}

Cure::Cure(std::string const & type): type(type) {}

Cure::Cure(Cure const & src): type(src.getType()) { //AMateria(src) {
    //this->type = src.type;
}

Cure & Cure::operator=(Cure const & rhs) {
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

Cure::~Cure(void) {}

Cure* Cure::clone() const {
    Cure* ret = new Cure;
    return (ret);    
}

void Cure::use(ICharacter& target) {
	std::cout << GREEN << "* heals " << target.getName() << "'s wounds *" << NC << std::endl;
}
