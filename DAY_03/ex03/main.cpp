#include "DiamondTrap.hpp"

int main ()
{
	DiamondTrap a;
	DiamondTrap b("Lilian-Kevin");
	DiamondTrap c = b;

	c.get_info();
	c.attack("Roger");
	c.guardGate();
	c.highFivesGuys();
	c.whoAmI();
	a.whoAmI();

	return 0;
}