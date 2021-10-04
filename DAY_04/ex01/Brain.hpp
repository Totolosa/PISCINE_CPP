#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
public :
	Brain( void );
	Brain( Brain const & );
	~Brain( void );

	Brain & operator=( Brain const & rhs);

	std::string ideas[100];
};

#endif