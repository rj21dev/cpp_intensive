#include "../inc/ClapTrap.hpp"

int	main(void) {

	ClapTrap bot("Desepticon");

	std::cout << std::endl;
	bot.attack("Optimus Prime");
	bot.takeDamage(3);
	bot.beRepaired(2);
	bot.attack("Optimus Prime");
	bot.beRepaired(2);
	bot.takeDamage(4);
	bot.beRepaired(1);
	bot.attack("Optimus Prime");
	bot.beRepaired(2);
	bot.takeDamage(6);
	bot.attack("Optimus Prime");
	bot.beRepaired(2);
	bot.takeDamage(4);
	bot.beRepaired(2);
	bot.attack("Optimus Prime");
	bot.takeDamage(8);
	bot.beRepaired(2);
	bot.attack("Optimus Prime");
	bot.takeDamage(4);
	std::cout << std::endl;

	return 0;
}