#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public :
	WrongCat( void );
	WrongCat( WrongCat const & );
	~WrongCat( void );

	void	makeSound() const;
	std::string		getType();

	WrongCat & operator=( WrongCat const & rhs);
};

#endif