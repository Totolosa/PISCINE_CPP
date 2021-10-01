#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "Claptrap.hpp"

class FragTrap : virtual public ClapTrap
{
public :
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const & );
	~FragTrap( void );

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	highFivesGuys(void);

	FragTrap & operator=( FragTrap const & rhs);
};

#endif