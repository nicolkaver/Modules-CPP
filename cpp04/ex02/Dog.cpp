#include "Dog.hpp"

Dog::Dog(void): AAnimal() {
    std::cout << "Default constructor called for Dog." << std::endl;
    this->type = "Dog";
    _brain = new Brain();
}

Dog::Dog(std::string type): AAnimal(type) {
    std::cout << "Parametric constructor called for Dog." << std::endl;
    this->type = type;
    _brain = new Brain();
}

Dog::Dog(Dog const & src): AAnimal(src) {
    std::cout << "Copy constructor called for Dog." << std::endl;
    this->type = src.type;
}

Dog & Dog::operator=(Dog const & rhs) {
    std::cout << "Copy assignment operator called for Dog." << std::endl;
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    this->_brain = rhs._brain;
    return (*this);
}

Dog::~Dog(void) {
    std::cout << "Destructor called for Dog." << std::endl;
    delete _brain;
}

void Dog::makeSound(void) const {
    std::cout << this->type << " makes a Dog sound." << std::endl;
}

Brain* Dog::getBrain(void) const {
    return (this->_brain);
}
