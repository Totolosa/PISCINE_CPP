#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
public :
	Cat( void );
	Cat( Cat const & );
	~Cat( void );

	virtual void	makeSound() const;
	std::string		getType();

	Cat & operator=( Cat const & rhs);
};

#endif