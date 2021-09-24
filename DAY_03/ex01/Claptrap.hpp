#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
public :
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const & );
	~ClapTrap( void );

	ClapTrap & operator=( ClapTrap const & rhs);
	
	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string	_Name;
	int			_Hitpoint;
	int			_Energy_points;
	int			_Attack_damage;
};

#endif