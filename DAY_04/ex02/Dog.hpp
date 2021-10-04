#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
public :
	Dog( void );
	Dog( Dog const & );
	~Dog( void );

	virtual void	makeSound() const;
	std::string		getType();

	Dog & operator=( Dog const & rhs);

private :
	Brain *brain;
};

#endif