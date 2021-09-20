#include "Zombie.hpp"

int main()
{
	Zombie felix_le_chat("Felix le chat");
	felix_le_chat.announce();
	Zombie* rene_la_taupe = newZombie("Rene la taupe");
	randomChump("Regis le con");
	delete rene_la_taupe;
	return (0);
}