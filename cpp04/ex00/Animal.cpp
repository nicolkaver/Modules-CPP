#include "Animal.hpp"

Animal::Animal(void) {
    std::cout << "Default constructor called for Animal." << std::endl;
    this->type = "Animal";
}

Animal::Animal(std::string type) {
    std::cout << "Parametric constructor called for Animal." << std::endl;
    this->type = type;
}

Animal::Animal(Animal const & src) {
    std::cout << "Copy constructor called for Animal." << std::endl;
    *this = src;
    return;
}

Animal & Animal::operator=(Animal const & rhs) {
    std::cout << "Copy assignment operator called for Animal." << std::endl;
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

Animal::~Animal(void) {
    std::cout << "Destructor called for Animal." << std::endl;
}

void Animal::makeSound(void) const {
    std::cout << GREEN << this->type << " makes an Animal sound." << NC << std::endl;
}

std::string Animal::getType(void) const {
    return (this->type);
}
