#include "MateriaSource.hpp"

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : nb_mat(0) {}

MateriaSource::MateriaSource(MateriaSource const& src) : nb_mat(0) {
	*this = src;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < nb_mat; i++)
		delete source[i];
}

void 		MateriaSource::learnMateria(AMateria* m) {
	if (nb_mat < 4) {
		source[nb_mat] = m;
		nb_mat++;
	}
	else
		delete m;
}

AMateria* 	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < nb_mat; i++)
		if (source[i]->getType() == type)
			return (source[i]->clone());
	return 0;
}

int			MateriaSource::getNbMat() const {
	return (nb_mat);
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& rhs) {
	nb_mat = rhs.nb_mat;
	for (int i = 0; rhs.nb_mat; i++)
		source[i] = rhs.source[i]->clone();
	return *this;
}
