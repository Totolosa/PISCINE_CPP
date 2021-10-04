#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	public :
		Character( void );
		Character( std::string name );
		Character( Character const & copy );
		virtual ~Character();

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		Character &	operator=( Character const & rhs);

	private :
		AMateria	*stuff[4];
};

#endif