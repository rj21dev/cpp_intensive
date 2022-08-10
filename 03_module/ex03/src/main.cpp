#include "../inc/DiamondTrap.hpp"
#include <iomanip>

static void	log_separator(void) {

	std::cout << std:: endl << std::setw(83) << std::setfill('*') << "*\n" << std::endl;
}

int	main(void) {

	// Initialisation

	int const healing_potion = 20;
	log_separator();
	DiamondTrap bot_1("Warrior");
	log_separator();
	DiamondTrap bot_2("Paladin");

	// Show status
	
	log_separator();
	bot_1.whoAmI();
	bot_1.guardGate();
	bot_1.highFivesGyes();
	log_separator();
	bot_2.whoAmI();
	bot_2.guardGate();
	bot_2.highFivesGyes();
	log_separator();

	// Start battle

	bot_1.attack(bot_2.getName());
	bot_2.takeDamage(bot_1.getDamage());
	bot_1.attack(bot_2.getName());
	bot_2.takeDamage(bot_1.getDamage());
	bot_1.attack(bot_2.getName());
	bot_2.takeDamage(bot_1.getDamage());

	log_separator();
	bot_1.whoAmI();
	bot_2.whoAmI();
	log_separator();

	bot_2.attack(bot_1.getName());
	bot_1.takeDamage(bot_2.getDamage());
	bot_2.beRepaired(healing_potion);
	bot_2.attack(bot_1.getName());
	bot_1.takeDamage(bot_2.getDamage());
	bot_2.beRepaired(healing_potion);
	bot_2.attack(bot_1.getName());
	bot_1.takeDamage(bot_2.getDamage());
	bot_2.beRepaired(healing_potion);

	log_separator();
	bot_1.whoAmI();
	bot_2.whoAmI();
	log_separator();

	bot_2.attack(bot_1.getName());
	bot_1.takeDamage(bot_2.getDamage());

	log_separator();
	bot_1.whoAmI();
	bot_2.whoAmI();
	log_separator();

	return 0;
}