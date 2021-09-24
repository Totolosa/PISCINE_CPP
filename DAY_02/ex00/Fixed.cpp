#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixed(0), _fractional_bits(8)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & rhs ) : _fractional_bits(8)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed = rhs.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed = raw;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed = rhs.getRawBits();
	this->_fractional_bits = rhs._fractional_bits;
	return (*this);
}

std::ostream &	operator<<(std::ostream & out, Fixed const & rhs)
{
	out << rhs.getRawBits() << std::endl;
	return (out);
}