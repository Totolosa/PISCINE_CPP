#include "Claptrap.hpp"

/*
**		CONSTRUCTORS / DESTRUCTORS
*/

ClapTrap::ClapTrap( void ) : _Name("Roger"), _Hitpoint(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _Name(name), _Hitpoint(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & copy )
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

/*
**		MEMBERS FUNCTIONS
*/

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _Name << " attack " << target << ", causing " << _Attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _Name << " take " << amount << " point of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _Name << " is repaired by " << amount << " life points!" << std::endl;
}

/*
**		OPERATION OVERLOADS
*/

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs)
{
	this->_Name = rhs._Name;
	this->_Hitpoint = rhs._Hitpoint;
	this->_Energy_points = rhs._Energy_points;
	this->_Attack_damage = rhs._Attack_damage;
	return *this;
}