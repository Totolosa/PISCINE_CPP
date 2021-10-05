#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure ( void ) : AMateria("cure") {}

Cure::Cure (Cure const & copy) : AMateria(copy) {
	*this = copy;
}

Cure::~Cure( void ) {}

AMateria*	Cure::clone() const {
	AMateria *newCure = new Cure;
	return newCure;
}

void Cure::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure & Cure::operator=( Cure const & rhs) {
	(void)rhs;
	return *this;
}