#include "Fixed.hpp"

/*
**		CONSTRUCTOR
*/

Fixed::Fixed( void ) : _fixed(0), _fractional_bits(8)
{
}

Fixed::Fixed( Fixed const & rhs ) : _fractional_bits(8)
{
	*this = rhs;
}

Fixed::Fixed( int const integer ) : _fractional_bits(8)
{
	this->_fixed = integer * std::pow(2, _fractional_bits);
}

Fixed::Fixed( float const floating ) : _fractional_bits(8)
{
	this->_fixed = std::roundf(floating * std::pow(2, _fractional_bits));
}

/*
**		DESTRUCTOR
*/

Fixed::~Fixed()
{
}

/*
**		GETERS/SETERS
*/

int Fixed::getRawBits(void) const
{
	return (this->_fixed);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
}

/*
**		METHODS
*/

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixed / std::powf((float)2, (float)_fractional_bits));
}

int		Fixed::toInt(void) const
{
	return (this->_fixed / std::pow(2, _fractional_bits));
}

void	Fixed::compare(Fixed const & rhs, std::string f1, std::string f2) const
{
	if (*this > rhs)
		std::cout << f1 << " > " << f2 << std::endl;
	if (*this < rhs)
		std::cout << f1 << " < " << f2 << std::endl;
	if (*this >= rhs)
		std::cout << f1 << " >= " << f2 << std::endl;
	if (*this <= rhs)
		std::cout << f1 << " <= " << f2 << std::endl;
	if (*this == rhs)
		std::cout << f1 << " == " << f2 << std::endl;
	if (*this != rhs)
		std::cout << f1 << " != " << f2 << std::endl;
}

Fixed&	Fixed::min(Fixed & lhs, Fixed & rhs)
{
	if (lhs > rhs)
		return rhs;
	return lhs;
}

Fixed const &	Fixed::min(Fixed const & lhs, Fixed const & rhs)
{
	if (lhs > rhs)
		return rhs;
	return lhs;
}

Fixed&	Fixed::max(Fixed & lhs, Fixed & rhs)
{
	if (lhs < rhs)
		return rhs;
	return lhs;
}

Fixed const &	Fixed::max(Fixed const & lhs, Fixed const & rhs)
{
	if (lhs < rhs)
		return rhs;
	return lhs;
}

/*
**		OPERATION OVERLOAD
*/

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	this->_fixed = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	if (getRawBits() > rhs.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	if (getRawBits() < rhs.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	if (getRawBits() >= rhs.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	if (getRawBits() <= rhs.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	if (getRawBits() == rhs.getRawBits())
		return (1);
	return (0);
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	if (getRawBits() != rhs.getRawBits())
		return (1);
	return (0);
}

Fixed	Fixed::operator+( Fixed const & rhs) const
{
	return (Fixed(toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-( Fixed const & rhs) const
{
	return (Fixed(toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*( Fixed const & rhs) const
{
	return (Fixed(toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/( Fixed const & rhs) const
{
	return (Fixed(toFloat() / rhs.toFloat()));
}

Fixed&	Fixed::operator++()
{
	this->_fixed++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed&	Fixed::operator--()
{
	this->_fixed--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return temp;
}

std::ostream &	operator<<(std::ostream & out, Fixed const & rhs)
{
	out << rhs.toFloat();
	return (out);
}