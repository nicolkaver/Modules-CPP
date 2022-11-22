#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define NC "\033[0m"

class Fixed
{
    public:
        Fixed(void);
        Fixed(int const n);
        Fixed(float const n);
        Fixed(Fixed const & src);
        ~Fixed(void);

        Fixed & operator=(Fixed const & rhs);
	
	// operators >, <, >=, <=, == et !=
	bool operator>(Fixed const & rhs) const;
	bool operator<(Fixed const & rhs) const;
	bool operator>=(Fixed const & rhs) const;
	bool operator<=(Fixed const & rhs) const;
	bool operator==(Fixed const & rhs) const;
	bool operator!=(Fixed const & rhs) const;

	//*, -, +, /
	Fixed operator*(Fixed const & rhs) const;
	Fixed operator-(Fixed const & rhs) const;
	Fixed operator+(Fixed const & rhs) const;
	Fixed operator/(Fixed const & rhs) const;

	//++i, i++, --i, i--
	Fixed & operator++(void);
	Fixed operator++(int n);
	Fixed & operator--(void);
	Fixed operator--(int n);

	//min & max
	static Fixed & min(Fixed & f1, Fixed & f2);
	static Fixed const & min(Fixed const & f1, Fixed const & f2);
	static Fixed & max(Fixed & f1, Fixed & f2);
	static Fixed const & max(Fixed const & f1, Fixed const & f2);

        int getRawBits( void ) const;
        void setRawBits( int const raw );

        float toFloat( void ) const;
        int toInt( void ) const;

    private:
        int _value; // integer part (exponent bits)
        const static int _bits = 8; //fractional part (mantissa bits)
};

#endif

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);
