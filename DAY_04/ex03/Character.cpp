#include "Character.hpp"

Character::Character( void ) : name("Default"), nb_mat(0) {}

Character::Character( std::string newName ) : name(newName) , nb_mat(0) {}

Character::Character( Character const & copy ) {
	*this = copy;
}

Character::~Character() {
	for (int i = 0; i < nb_mat; i++)
		delete stuff[i];
}

std::string const & Character::getName() const {
	return name;
}

void Character::equip(AMateria* m) {
	if (nb_mat < 4 && m) {
		stuff[nb_mat] = m;
		nb_mat++;
	}
	else
		delete m;
}

void Character::unequip(int idx) {
	if (nb_mat > 0 && idx >= 0 && idx < 4) {
		for (int i = idx; i < 3; i++)
			stuff[i] = stuff[i + 1];
		nb_mat--;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < nb_mat)
		stuff[idx]->use(target);
}

Character &	Character::operator=( Character const & rhs) {
	name = rhs.name;
	nb_mat = rhs.nb_mat;
	for (int i = 0; i < rhs.nb_mat; i++)
		stuff[i] = rhs.stuff[i]->clone();
	return (*this);
}