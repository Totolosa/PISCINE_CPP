#include "DiamondTrap.hpp"

/*
**		CONSTRUCTORS / DESTRUCTORS
*/

DiamondTrap::DiamondTrap( void ) : ClapTrap(), ScavTrap(), FragTrap()
{
	Claptrap_Name = ClapTrap::_Name + "_clap_name";
	_Hitpoint = 100;
	_Energy_points = 50;
	_Attack_damage = 30;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	Claptrap_Name = name + "_clap_name";
	_Hitpoint = 100;
	_Energy_points = 50;
	_Attack_damage = 30;
	std::cout << "DiamondTrap Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & copy ) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

/*
**		MEMBERS FUNCTIONS
*/

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "DiamondTrap " << _Name << " take " << amount << " point of damage!" << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << "DiamondTrap " << _Name << " is repaired by " << amount << " life points!" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name is \"" << _Name << "\", my ClapTrap name is \"" << Claptrap_Name
		<< "\" but my real name is the Real Slim Shady." << std::endl;
}

/*
**		OPERATION OVERLOADS
*/

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs)
{
	this->_Name = rhs._Name;
	this->_Hitpoint = rhs._Hitpoint;
	this->_Energy_points = rhs._Energy_points;
	this->_Attack_damage = rhs._Attack_damage;
	this->Claptrap_Name = rhs.Claptrap_Name;
	return *this;
}