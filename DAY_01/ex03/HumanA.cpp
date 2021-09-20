#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _Weapon(weapon)
{
	return ;
}

HumanA::~HumanA( void )
{
	return ;
}

void HumanA::setWeapon (Weapon &weapon)
{
	this->_Weapon = weapon;
	return ;
}

void HumanA::attack( void ) const
{
	std::cout << _name << " attacks with his " << _Weapon.getType() << std::endl;
	return ;
}