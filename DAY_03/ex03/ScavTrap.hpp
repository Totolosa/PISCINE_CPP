#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "Claptrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public :
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & );
	~ScavTrap( void );

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	guardGate();

	ScavTrap & operator=( ScavTrap const & rhs);
};

#endif