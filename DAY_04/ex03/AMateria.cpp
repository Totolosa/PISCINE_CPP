#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria(void) {}

AMateria::AMateria(std::string const & typeName) : type(typeName) {}

AMateria::AMateria(AMateria const& copy) {
	*this = copy;
}

AMateria::~AMateria(void) {}

std::string const & AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
}

AMateria&	AMateria::operator=(AMateria const& rhs){
	(void)rhs;
	return *this;
}
