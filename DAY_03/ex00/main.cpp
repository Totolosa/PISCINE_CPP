#include "Claptrap.hpp"

int main ()
{
	ClapTrap a;
	ClapTrap b("Michel");
	ClapTrap c = a;

	a.attack("son geniteur qui lui a donne ce nom");
	a.takeDamage(10);
	a.beRepaired(10);
	b.attack("son geniteur qui lui a donne ce nom");
	b.takeDamage(10);
	b.beRepaired(10);
	c.attack("son geniteur qui lui a donne ce nom");
	c.takeDamage(10);
	c.beRepaired(10);

	return 0;
}