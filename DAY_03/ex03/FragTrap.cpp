#include "FragTrap.hpp"

/*
**		CONSTRUCTORS / DESTRUCTORS
*/

FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
	_Hitpoint = 100;
	_Energy_points = 100;
	_Attack_damage = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor called" << std::endl;
	_Hitpoint = 100;
	_Energy_points = 100;
	_Attack_damage = 30;
}

FragTrap::FragTrap( FragTrap const & copy ) : ClapTrap()
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

/*
**		MEMBERS FUNCTIONS
*/

void	FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << _Name << " attack " << target << ", causing " << _Attack_damage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << _Name << " take " << amount << " point of damage!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap " << _Name << " is repaired by " << amount << " life points!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _Name << " make a high five request, don't ask me I don't ask me what it means." << std::endl;
}

/*
**		OPERATION OVERLOADS
*/

FragTrap &	FragTrap::operator=( FragTrap const & rhs)
{
	this->_Name = rhs._Name;
	this->_Hitpoint = rhs._Hitpoint;
	this->_Energy_points = rhs._Energy_points;
	this->_Attack_damage = rhs._Attack_damage;
	return *this;
}