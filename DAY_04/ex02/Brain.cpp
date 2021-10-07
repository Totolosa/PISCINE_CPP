#include "Brain.hpp"

Brain::Brain ( void )
{
	std::cout << "Brain Default Construtor called" << std::endl;
}

Brain::Brain ( Brain const & copy )
{
	std::cout << "Brain Copy Construtor called" << std::endl;
	*this = copy;
}

Brain::~Brain ( void )
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain &	Brain::operator=( Brain const & rhs)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = rhs.ideas[i];
	return (*this);
}
