#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main ()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	k->makeSound();
	meta2->makeSound();

	delete (meta);
	delete (i);
	delete (j);
	delete (k);
	delete (meta2);
	return 0;
}