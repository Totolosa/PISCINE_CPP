#include "Dog.hpp"

Dog::Dog ( void ) : Animal("Dog")
{
	std::cout << "Dog Default Construtor called" << std::endl;
	brain = new Brain();
}

Dog::Dog ( Dog const & copy ) : Animal(copy)
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

std::string const &	Dog::getIdea(int idx) const {
	return (brain->ideas[idx]);
}

void Dog::setIdea(std::string newIdea, int idx) {
	brain->ideas[idx] = newIdea;
}

Dog &	Dog::operator=( Dog const & rhs)
{
	type = rhs.getType();
	brain = new Brain;
	*brain = *(rhs.brain);
	return (*this);
}
