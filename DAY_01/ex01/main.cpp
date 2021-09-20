#include "Zombie.hpp"

int main()
{
	int nbr = 5;
	
	Zombie* horde = zombieHorde(nbr, "Un nouvel utilisateur de Tiktok");
	for (int i = 0; i < nbr; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}