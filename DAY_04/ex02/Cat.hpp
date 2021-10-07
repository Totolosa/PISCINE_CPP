#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public :
		Cat( void );
		Cat( Cat const & );
		virtual ~Cat( void );

		virtual void		makeSound() const;
		std::string const &	getIdea(int idx) const;
		void				setIdea(std::string newIdea, int idx);

		Cat & operator=( Cat const & rhs);

	private :
		Brain	*brain;
};

#endif