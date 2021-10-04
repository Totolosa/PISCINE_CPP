#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
public :
	WrongAnimal( void );
	WrongAnimal( std::string name );
	WrongAnimal( WrongAnimal const & );
	virtual ~WrongAnimal( void );

	void	makeSound() const;
	std::string		getType() const;

	WrongAnimal & operator=( WrongAnimal const & rhs);

protected :
	std::string	type;
};

std::ostream &	operator<<( std::ostream & lhs, WrongAnimal const & rhs);

#endif