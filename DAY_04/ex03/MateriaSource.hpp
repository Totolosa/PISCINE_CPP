#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const & copy );
		virtual ~MateriaSource();

		virtual void		learnMateria(AMateria* m);
		virtual AMateria*	createMateria(std::string const & type);
		virtual int			getNbMat( void ) const;

		MateriaSource &	operator=( MateriaSource const & rhs);

	protected :
		AMateria	*source[4];
		int			nb_mat;
};

#endif