#include "../inc/FragTrap.hpp"

int	main(void) {

	FragTrap warrior("Warrior");
	warrior.highFivesGyes();
	warrior.attack("Sorcer");
	warrior.takeDamage(5);
	warrior.attack("Sorcer");
	warrior.takeDamage(10);
	warrior.beRepaired(6);
	warrior.attack("Sorcer");
	warrior.takeDamage(50);
	warrior.beRepaired(7);
	warrior.attack("Sorcer");
	warrior.takeDamage(20);
	warrior.beRepaired(5);
	warrior.attack("Sorcer");
	warrior.takeDamage(30);
	warrior.beRepaired(5);
	for (int i = 0; i < 93; i++)
		warrior.attack("Sorcer");
	warrior.takeDamage(20);
	warrior.beRepaired(10);

	return 0;
}