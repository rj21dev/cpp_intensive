#include "../inc/HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}
HumanB::~HumanB() {}

void	HumanB::attack() {

	if (this->weapon)
		std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their fist" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {

	this->weapon = &weapon;
}