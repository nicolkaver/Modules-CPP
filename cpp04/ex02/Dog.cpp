#include "Dog.hpp"

Dog::Dog(void): AAnimal() {
    std::cout << "Default constructor called for Dog." << std::endl;
    this->type = "Dog";
}

Dog::Dog(std::string type): AAnimal(type) {
    std::cout << "Parametric constructor called for Dog." << std::endl;
    this->type = type;
}

Dog::Dog(Dog const & src): AAnimal(src) {
    std::cout << "Copy constructor called for Dog." << std::endl;
    *this = src;
}

Dog & Dog::operator=(Dog const & rhs) {
    std::cout << "Copy assignment operator called for Dog." << std::endl;
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

Dog::~Dog(void) {
    std::cout << "Destructor called for Dog." << std::endl;
}

void Dog::makeSound(void) const {
    std::cout << this->type << " makes a Dog sound." << std::endl;
}