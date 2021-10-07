#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main ()
{
	Dog basic;
	basic.setIdea("mais nooooooon!", 10);
	{
		Dog tmp = basic;
		std::cout << tmp.getIdea(10) << std::endl;
	}
	std::cout << basic.getIdea(10) << std::endl;
	Dog basic2(basic);
	std::cout << basic2.getIdea(10) << std::endl;
	
	int		n = 2;
	Animal	**table = new Animal*[n];
	
	for (int i = 0; i < n ; i++)
	{
		table[i++] = new Cat();
		table[i] = new Dog();
		// table[++i] = new Animal;
	}

	for (int i = 0; i < n; i++)
		std::cout << *(table[i]) << std::endl;
	
	for (int i = 0; i < n; i++)
		table[i]->makeSound();

	for (int i = 0; i < n; i++)
		delete table[i];

	delete [] table;
}