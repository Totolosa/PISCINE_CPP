#include "ScavTrap.hpp"

/*
**		CONSTRUCTORS / DESTRUCTORS
*/

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	_Hitpoint = 100;
	_Energy_points = 50;
	_Attack_damage = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	_Hitpoint = 100;
	_Energy_points = 50;
	_Attack_damage = 20;
}

ScavTrap::ScavTrap( ScavTrap const & copy ) : ClapTrap()
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

/*
**		MEMBERS FUNCTIONS
*/

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << _Name << " attack " << target << ", causing " << _Attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << _Name << " take " << amount << " point of damage!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap " << _Name << " is repaired by " << amount << " life points!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _Name << " have enterred in Gate keeper mode" << std::endl;
}

/*
**		OPERATION OVERLOADS
*/

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs)
{
	this->_Name = rhs._Name;
	this->_Hitpoint = rhs._Hitpoint;
	this->_Energy_points = rhs._Energy_points;
	this->_Attack_damage = rhs._Attack_damage;
	return *this;
}