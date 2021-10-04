#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
public :
	Animal( void );
	Animal( std::string name );
	Animal( Animal const & );
	virtual ~Animal( void );

	virtual void	makeSound() const;
	std::string		getType() const;

	Animal & operator=( Animal const & rhs);

protected :
	std::string	type;
};

std::ostream &	operator<<( std::ostream & lhs, Animal const & rhs);

#endif