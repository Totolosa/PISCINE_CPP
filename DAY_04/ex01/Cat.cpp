#include "Cat.hpp"

Cat::Cat ( void )
{
	std::cout << "Cat Default Construtor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat ( Cat const & copy )
{
	std::cout << "Cat Copy Construtor called" << std::endl;
	*this = copy;
}

Cat::~Cat ( void )
{
	std::cout << "Cat Destructor called" << std::endl;
	delete (brain);
}

void Cat::makeSound() const
{
	std::cout << "Miaou je suis un chat" << std::endl;
}

std::string	Cat::getType()
{
	return (type);
}

Cat &	Cat::operator=( Cat const & rhs)
{
	this->type = rhs.type;
	return (*this);
}
