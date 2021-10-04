#include "WrongCat.hpp"

WrongCat::WrongCat ( void )
{
	std::cout << "WrongCat Default Construtor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat ( WrongCat const & copy )
{
	std::cout << "WrongCat Copy Construtor called" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat ( void )
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Miaou je suis un chat" << std::endl;
}

std::string	WrongCat::getType()
{
	return (type);
}

WrongCat &	WrongCat::operator=( WrongCat const & rhs)
{
	this->type = rhs.type;
	return (*this);
}
