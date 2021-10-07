#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public :
		Dog( void );
		Dog( Dog const & );
		virtual ~Dog( void );

		virtual void		makeSound() const;
		std::string const &	getIdea(int idx) const;
		void				setIdea(std::string newIdea, int idx);

		Dog & operator=( Dog const & rhs);

	private :
		Brain *brain;
};

#endif