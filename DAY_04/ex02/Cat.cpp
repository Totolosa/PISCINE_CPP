#include "Cat.hpp"

Cat::Cat ( void ) : Animal("Cat")
{
	std::cout << "Cat Default Construtor called" << std::endl;
	brain = new Brain();
}

Cat::Cat ( Cat const & copy ) : Animal(copy)
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

std::string const &	Cat::getIdea(int idx) const {
	return (brain->ideas[idx]);
}

void Cat::setIdea(std::string newIdea, int idx) {
	brain->ideas[idx] = newIdea;
}

Cat &	Cat::operator=( Cat const & rhs)
{
	type = rhs.getType();
	brain = new Brain;
	*brain = *(rhs.brain);
	return (*this);
}
