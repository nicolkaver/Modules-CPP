#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Default constructor called for Cat." << std::endl;
    this->type = "Cat";
    _brain = new Brain;
}

Cat::Cat(std::string type) {
    std::cout << "Parametric constructor called for Cat." << std::endl;
    this->type = type;
    _brain = new Brain;
}

Cat::Cat(Cat const & src): Animal(src) {
    std::cout << "Copy constructor called for Cat." << std::endl;
    this->type = src.type;
    *this->_brain = *src._brain;
}

Cat & Cat::operator=(Cat const & rhs) {
    std::cout << "Copy assignment operator called for Cat." << std::endl;
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    *this->_brain = *rhs._brain;
    return (*this);
}

Cat::~Cat(void) {
    std::cout << "Destructor called for Cat." << std::endl;
    delete _brain;
}

void Cat::makeSound(void) const {
    std::cout << this->type << " makes a Cat sound." << std::endl;
}

Brain* Cat::getBrain(void) const {
    return (this->_brain);
}
