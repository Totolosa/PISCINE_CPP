#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA( void );

	void setWeapon( Weapon &weapon);
	void attack( void ) const;

private:
	std::string	_name;
	Weapon		&_Weapon;
};

#endif