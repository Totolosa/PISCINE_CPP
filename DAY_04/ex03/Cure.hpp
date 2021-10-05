#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const & copy);
		virtual ~Cure( void );
		
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

		Cure & operator=( Cure const & rhs);
};

#endif