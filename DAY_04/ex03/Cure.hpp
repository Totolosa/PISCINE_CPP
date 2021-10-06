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
		
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

		Cure & operator=( Cure const & rhs);
};

#endif