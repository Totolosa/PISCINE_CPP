#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
public :
	Cat( void );
	Cat( Cat const & );
	~Cat( void );

	virtual void	makeSound() const;
	std::string		getType();

	Cat & operator=( Cat const & rhs);

private :
	Brain	*brain;
};

#endif