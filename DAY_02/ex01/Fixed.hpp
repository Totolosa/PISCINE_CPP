#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
public:
	Fixed( void );
	Fixed( int const );
	Fixed( float const );
	Fixed( Fixed const & rhs );
	~Fixed( void );

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

	Fixed&	operator=( Fixed const & rhs);

private :
	int _fixed;
	int _fractional_bits;
};

std::ostream &	operator<<(std::ostream & out, Fixed const & rhs);

#endif