// #include "Brain.hpp"
#include "Dog.hpp"

Dog::Dog ( void ) : Animal()
{
	std::cout << "Dog Default Construtor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog ( Dog const & copy ) : Animal()
{
	std::cout << "Dog Copy Construtor called" << std::endl;
	*this = copy;
}

Dog::~Dog ( void )
{
	std::cout << "Dog Destructor called" << std::endl;
	delete (brain);
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
