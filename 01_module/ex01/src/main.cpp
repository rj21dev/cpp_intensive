#include <iostream>
#include "../inc/Zombie.hpp"

int	main(void) {

	Zombie* horde;

	horde = zombieHorde(10, "Undead");

	for (int i = 0; i < 10; i++) {
		std::cout << i + 1 << "\t";
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}
