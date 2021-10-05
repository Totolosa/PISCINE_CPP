#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
// using std::cout;
// using std::endl;


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	std::cout << "nb_mat in MateriaSource src = " << src->getNbMat() << std::endl;
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	if ((tmp = src->createMateria("caca")) == 0)
		std::cout << "caca doent exist" << std::endl; 
	me->equip(new Ice);
	me->equip(new Ice);
	me->equip(new Ice);
	me->equip(new Ice);
	
	AMateria* newCure =  new Cure;
	std::cout << newCure->getType() << std::endl;
	delete newCure;

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(14, *bob);

	Character b;
	Character c(b);
	std::cout << c.getName() << std::endl;

	delete bob;
	delete me;
	delete src;
	return 0;
}