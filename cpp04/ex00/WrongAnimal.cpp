#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
    std::cout << "Default constructor called for WrongAnimal." << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type) {
    std::cout << "Parametric constructor called for WrongAnimal." << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {
    std::cout << "Copy constructor called for WrongAnimal." << std::endl;
    *this = src;
    return;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs) {
    std::cout << "Copy assignment operator called for WrongAnimal." << std::endl;
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "Destructor called for WrongAnimal." << std::endl;
}

void WrongAnimal::makeSound(void) const {
    std::cout << RED << this->type << " makes a WrongAnimal sound." << NC << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return (this->type);
}