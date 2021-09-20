#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::~HumanB( void )
{
	return ;
}

void HumanB::setWeapon (Weapon &weapon)
{
	this->_Weapon = &weapon;
	return ;
}

void HumanB::attack( void ) const
{
	std::cout << _name << " attacks with his " << _Weapon->getType() << std::endl;
	return ;
}