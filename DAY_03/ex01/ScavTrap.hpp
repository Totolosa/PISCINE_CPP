#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "Claptrap.hpp"

class ScavTrap : public ClapTrap
{
public :
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & );
	~ScavTrap( void );

	void	guardGate();

	ScavTrap & operator=( ScavTrap const & rhs);
	
	// void	attack(std::string const & target);
	// void	takeDamage(unsigned int amount);
	// void	beRepaired(unsigned int amount);

// private :
// 	std::string	_Name;
// 	int			_Hitpoint;
// 	int			_Energy_points;
// 	int			_Attack_damage;
};

#endif