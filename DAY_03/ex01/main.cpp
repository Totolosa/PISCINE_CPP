#include "ScavTrap.hpp"

int main ()
{
	ScavTrap a;
	ScavTrap b("Michel");
	ScavTrap c = a;

	a.attack("son geniteur qui lui a donne ce nom");
	a.takeDamage(10);
	a.beRepaired(10);
	a.guardGate();
	b.attack("son geniteur qui lui a donne ce nom");
	b.takeDamage(10);
	b.beRepaired(10);
	b.guardGate();
	c.attack("son geniteur qui lui a donne ce nom");
	c.takeDamage(10);
	c.beRepaired(10);
	c.guardGate();

	return 0;
}