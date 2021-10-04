#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
// # include "ICharater.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & copy);
		~AMateria( void );
		
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		AMateria & operator=( AMateria const & rhs);
};

#endif