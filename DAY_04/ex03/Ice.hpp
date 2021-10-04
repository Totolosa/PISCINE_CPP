#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	protected:
		std::string	type;
	public:
		Ice();
		Ice(std::string const & type);
		Ice(Ice const & copy);
		~Ice( void );
		
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

		Ice & operator=( Ice const & rhs);
};

#endif