#include "Dog.hpp"

Dog::Dog ( void )
{
	std::cout << "Dog Default Construtor called" << std::endl;
	type = "Dog";
}

Dog::Dog ( Dog const & copy )
{
	std::cout << "Dog Copy Construtor called" << std::endl;
	*this = copy;
}

Dog::~Dog ( void )
{
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Wouf wouf je suis un chien" << std::endl;
}

std::string	Dog::getType()
{
	return (type);
}

Dog &	Dog::operator=( Dog const & rhs)
{
	this->type = rhs.type;
	return (*this);
}
