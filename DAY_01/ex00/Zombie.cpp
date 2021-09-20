#include "Zombie.hpp"

Zombie::Zombie( std::string name) : _name(name)
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << _name << " is dead, SHEH" << std::endl;
	return ;
}

void Zombie::announce( void ) const
{
	std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}