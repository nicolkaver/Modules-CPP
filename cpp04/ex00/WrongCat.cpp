#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
    std::cout << "Default constructor called for WrongCat." << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(std::string type) {
    std::cout << "Parametric constructor called for WrongCat." << std::endl;
    this->type = type;
}

WrongCat::WrongCat(WrongCat const & src): WrongAnimal(src) {
    std::cout << "Copy constructor called for WrongCat." << std::endl;
    *this = src;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs) {
    std::cout << "Copy assignment operator called for WrongCat." << std::endl;
    if (this == &rhs)
        return (*this);
    this->type = rhs.type;
    return (*this);
}

WrongCat::~WrongCat(void) {
    std::cout << "Destructor called for WrongCat." << std::endl;
}

void WrongCat::makeSound(void) const {
    std::cout << this->type << " makes a WrongCat sound." << std::endl;
}