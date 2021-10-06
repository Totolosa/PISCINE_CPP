#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const & copy);
		virtual ~Ice( void );
		
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

		Ice & operator=( Ice const & rhs);
};

#endif