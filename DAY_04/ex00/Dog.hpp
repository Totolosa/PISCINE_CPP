#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
public :
	Dog( void );
	Dog( Dog const & );
	~Dog( void );

	virtual void	makeSound() const;
	std::string		getType();

	Dog & operator=( Dog const & rhs);
};

#endif