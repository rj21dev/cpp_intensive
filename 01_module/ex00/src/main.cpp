#include <iostream>
#include "../inc/Zombie.hpp"

int	main(void) {

	Zombie* zomb;

	randomChump("Fedya");
	zomb = newZombie("Vasya");
	zomb->announce();
	delete zomb;
	return 0;
}
