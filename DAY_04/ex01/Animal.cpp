#include "Animal.hpp"

Animal::Animal ( void ) : type("Default")
{
	std::cout << "Animal Default Construtor called" << std::endl;
}

Animal::Animal ( std::string typeName ) : type(typeName)
{
	std::cout << "Animal Construtor called" << std::endl;
}

Animal::Animal ( Animal const & copy )
{
	std::cout << "Animal Copy Construtor called" << std::endl;
	*this = copy;
}

Animal::~Animal ( void )
{
	std::cout << "Animal Destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "Je suis un Animal" << std::endl;
}

Animal &	Animal::operator=( Animal const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

std::ostream &	operator<<( std::ostream & out, Animal const & rhs)
{
	out << rhs.getType();
	return (out);
}
