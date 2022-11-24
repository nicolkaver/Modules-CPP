#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << GREEN << a << NC << std::endl;
	std::cout << GREEN << ++a << NC << std::endl;
	std::cout << GREEN << a << NC << std::endl;
	std::cout << a++ << std::endl;
	std::cout << GREEN << a << NC << std::endl;
	std::cout << GREEN << b << NC << std::endl;
	std::cout << GREEN << Fixed::max( a, b ) << NC << std::endl;

	/*Fixed const c(Fixed(5.0f));
	std::cout << c * c << std::endl;*/
	return (0);
}
