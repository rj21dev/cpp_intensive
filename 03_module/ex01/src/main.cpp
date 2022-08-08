#include "../inc/ScavTrap.hpp"

int	main(void) {

	ScavTrap gk("Gate Keeper");
	gk.guardGate();
	gk.attack("Raider");
	gk.takeDamage(5);
	gk.attack("Raider");
	gk.takeDamage(10);
	gk.beRepaired(6);
	gk.attack("Raider");
	gk.takeDamage(50);
	gk.beRepaired(7);
	gk.attack("Raider");
	gk.takeDamage(20);
	gk.beRepaired(5);
	gk.attack("Raider");
	gk.takeDamage(30);
	gk.beRepaired(5);
	for (int i = 0; i < 42; i++)
		gk.attack("Raider");
	gk.beRepaired(5);
	gk.takeDamage(90);
	gk.beRepaired(10);

	return 0;
}