#include "AAnimal.hpp"

AAnimal::AAnimal(void) {
    std::cout << "Default constructor called for AAnimal." << std::endl;
    this->type = "AAnimal";
}

AAnimal::AAnimal(std::string type) {
    std::cout << "Parametric constructor called for AAnimal." << std::endl;
    this->type = type;
}

AAnimal::AAnimal(AAnimal const & src) {
    std::cout << "Copy constructor called for AAnimal." << std::endl;
    *this = src;
    //return (*this);
    return;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs) {
    std::cout << "Copy assignment operator called for AAnimal." << std::endl;
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

AAnimal::~AAnimal(void) {
    std::cout << "Destructor called for AAnimal." << std::endl;
}

void AAnimal::makeSound(void) const {
    std::cout << GREEN << this->type << " makes an AAnimal sound." << NC << std::endl;
}

std::string AAnimal::getType(void) const {
    return (this->type);
}