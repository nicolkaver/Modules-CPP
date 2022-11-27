#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Default constructor called for Cat." << std::endl;
    this->type = "Cat";
}

Cat::Cat(std::string type) {
    std::cout << "Parametric constructor called for Cat." << std::endl;
    this->type = type;
}

Cat::Cat(Cat const & src): Animal(src) {
    std::cout << "Copy constructor called for Cat." << std::endl;
    *this = src;
}

Cat & Cat::operator=(Cat const & rhs) {
    std::cout << "Copy assignment operator called for Cat." << std::endl;
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

Cat::~Cat(void) {
    std::cout << "Destructor called for Cat." << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << this->type << " makes a Cat sound." << std::endl;
}