#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal ( void ) : type("")
{
	std::cout << "WrongAnimal Default Construtor called" << std::endl;
}

WrongAnimal::WrongAnimal ( std::string typeName ) : type(typeName)
{
	std::cout << "WrongAnimal Construtor called" << std::endl;
}

WrongAnimal::WrongAnimal ( WrongAnimal const & copy )
{
	std::cout << "WrongAnimal Copy Construtor called" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal ( void )
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Je suis un WrongAnimal" << std::endl;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

std::ostream &	operator<<( std::ostream & out, WrongAnimal const & rhs)
{
	out << rhs.getType();
	return (out);
}
