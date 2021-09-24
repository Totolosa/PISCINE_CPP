#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
public:
	Fixed( void );
	Fixed( Fixed const & rhs );
	~Fixed( void );

	int getRawBits(void) const;
	void setRawBits(int const raw); 

	Fixed&	operator=( Fixed const & rhs);

private :
	int _fixed;
	int _fractional_bits;
};

std::ostream &	operator<<(std::ostream & out, Fixed const & rhs);

#endif