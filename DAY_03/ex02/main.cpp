#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
	ClapTrap a;

	a.attack("son geniteur qui lui a donne ce nom");
	a.takeDamage(10);
	a.beRepaired(10);
	a.get_info();

	FragTrap b("Michel");
	b.attack("son geniteur qui lui a donne ce nom");
	b.takeDamage(20);
	b.beRepaired(20);
	b.highFivesGuys();
	b.get_info();

	FragTrap c = b;
	c.attack("son geniteur qui lui a donne ce nom");
	c.takeDamage(30);
	c.beRepaired(30);
	c.highFivesGuys();
	c.get_info();

	return 0;
}