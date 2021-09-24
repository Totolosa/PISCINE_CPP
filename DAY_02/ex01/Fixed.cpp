#include "Fixed.hpp"

/*
**		CONSTRUCTOR
*/

Fixed::Fixed( void ) : _fixed(0), _fractional_bits(8)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & rhs ) : _fractional_bits(8)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed::Fixed( int const integer ) : _fractional_bits(8)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = integer * (1 << _fractional_bits);
}

Fixed::Fixed( float const floating ) : _fractional_bits(8)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = std::roundf(floating * (1 << _fractional_bits));
}

/*
**		DESTRUCTOR
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/*
**		GETERS/SETERS
*/

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed);
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_fixed = raw;
}

/*
**		METHODS
*/

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixed / (1 << _fractional_bits));
}

int		Fixed::toInt(void) const
{
	return (this->_fixed / (1 << _fractional_bits));
}

/*
**		OPERATION OVERLOAD
*/

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed = rhs.getRawBits();
	return (*this);
}

std::ostream &	operator<<(std::ostream & out, Fixed const & rhs)
{
	out << rhs.toFloat();
	return (out);
}