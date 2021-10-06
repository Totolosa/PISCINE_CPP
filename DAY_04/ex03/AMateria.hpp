#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria
{
	private :
		AMateria( void );
		AMateria & operator=( AMateria const & rhs);
	protected:
		std::string	type;
	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & copy);
		virtual ~AMateria( void );
		
		std::string const &		getType() const;
		virtual AMateria*		clone() const = 0;
		virtual void			use(ICharacter& target);

};

#endif