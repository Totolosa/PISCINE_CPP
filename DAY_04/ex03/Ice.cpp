#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice ( void ) : AMateria("ice") {}

Ice::Ice (Ice const & copy) : AMateria(copy) {
	*this = copy;
}

Ice::~Ice( void ) {}

AMateria*	Ice::clone() const {
	AMateria *newIce = new Ice;
	return newIce;
}

void Ice::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice & Ice::operator=( Ice const & rhs) {
	(void)rhs;
	return *this;
}