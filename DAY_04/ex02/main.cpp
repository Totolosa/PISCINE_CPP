#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main ()
{
	int		n = 10;
	Animal	**table = new Animal*[n];
	
	for (int i = 0; i < n ; i++)
	{
		table[i++] = new Cat();
		table[i] = new Dog();
	}

	for (int i = 0; i < n; i++)
		std::cout << *(table[i]) << std::endl;

	for (int i = 0; i < n; i++)
		delete table[i];

	delete [] table;

	// Animal doesntwork;
}