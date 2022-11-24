#include "Fixed.hpp"

Fixed::Fixed(void): _value(0) {
    //std::cout << "Default constuctor called." << std::endl;
    //this->_value = 0; 
}

Fixed::Fixed(int const n): _value(n << Fixed::_bits) {
    //std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(float const n): _value(roundf(n * (1 << Fixed::_bits))) {
    //std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
    //std::cout << "Copy constructor called." << std::endl;
    *this = src;
    //this->_value= rhs.getRawBits();
}

Fixed::~Fixed(void) {
    //std::cout << "Destructor called." << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
    //std::cout << "Copy assignment operator called." << std::endl;
    if (this == &rhs)
        return (*this);
    this->_value= rhs.getRawBits();
    return (*this);
}

/********************************************/
//**** operators >, <, >=, <=, == et != ****//
/********************************************/

bool Fixed::operator>(Fixed const & rhs) const
{
	if (this->getRawBits() > rhs.getRawBits())
		return (1);
	return (0);	
}

bool Fixed::operator<(Fixed const & rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return(1);
	return (0);
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	if (this->getRawBits() >= rhs.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	if (this->getRawBits() <= rhs.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator==(Fixed const & rhs) const
{
	if (this->getRawBits() == rhs.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	if (this->getRawBits() != rhs.getRawBits())
		return (1);
	return (0);
}

/********************************************/
/***********operators *, -, +, // ***********/
/********************************************/

Fixed Fixed::operator*(Fixed const & rhs) const
{
	Fixed tmp(this->toFloat() * rhs.toFloat());
	return (tmp);
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	Fixed tmp(this->toFloat() - rhs.toFloat());
	return (tmp);
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	Fixed tmp(this->toFloat() + rhs.toFloat());
	return (tmp);
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	Fixed tmp(this->toFloat() / rhs.toFloat());
	return (tmp);
}

/*********************************************/
/**************++i, i++, --i, i--*************/
/*********************************************/

Fixed & Fixed::operator++(void)
{
	this->_value += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_value += 1;
	return (tmp);
}

Fixed & Fixed::operator--(void)
{
	this->_value -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_value -= 1;
	return (tmp);
}

/*********************************************/
/*******************min & max*****************/
/*********************************************/

Fixed & Fixed::min(Fixed & f1, Fixed & f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed const & Fixed::min(Fixed const & f1, Fixed const & f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed & Fixed::max(Fixed & f1, Fixed & f2)
{
	if (f1 < f2)
		return (f2);
	return (f1);
}

Fixed const & Fixed::max(Fixed const & f1, Fixed const & f2)
{
	if (f1 < f2)
		return (f2);
	return (f1);
}

/*********************************************/

int Fixed::getRawBits( void ) const
{
    return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
    this->_value = raw;
}

float Fixed::toFloat( void ) const
{
    float f;
    
    f = float(getRawBits()) / (1 << Fixed::_bits);
    return (f);
}

int Fixed::toInt( void ) const
{
    return (getRawBits() >> Fixed::_bits);
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	//std::cout << std:: endl << "RAW: " << rhs.getRawBits() << std::endl;
	//std::cout << std:: endl << "TOINT: " << rhs.toInt() << std::endl;
	//std::cout << std:: endl << "TOFLOAT: " << rhs.toFloat() << std::endl;
	return (o);
}
