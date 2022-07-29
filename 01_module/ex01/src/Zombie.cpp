#include "../inc/Zombie.hpp"
#include <iostream>

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << this->name << ": (destroed)" << std::endl;
}

void	Zombie::announce(void) {

	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {

	this->name = name;
}
