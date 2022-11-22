#include "Fixed.hpp"

Fixed::Fixed(void): _value(0) {
    std::cout << "Default constuctor called." << std::endl;
    //this->_value = 0; 
}

Fixed::Fixed(Fixed const & src) {
    std::cout << "Copy constructor called." << std::endl;
    *this = src;
    //this->_value= rhs.getRawBits();
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called." << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
    std::cout << "Copy assignment operator called." << std::endl;
    if (this == &rhs)
        return (*this);
    this->_value= rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
    this->_value = raw;
}