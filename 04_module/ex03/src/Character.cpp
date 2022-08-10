#include "../inc/Character.hpp"

Character::Character() {

	std::cout << "Default constructor called (Character)" << std::endl;
	_name = "Default";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name) {

	std::cout << "Parametric constructor called (Character)" << std::endl;
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const & src) {

	std::cout << "Copy constructor called (Character)" << std::endl;
	_name = src._name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = src._inventory[i];
}

Character::~Character() {

	std::cout << "Destructor called (Character)" << std::endl;
}

Character&	Character::operator=(Character const & rightSide) {

	if (this == &rightSide)
		return *this;
	_name = rightSide._name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = rightSide._inventory[i];
	return *this;
}

std::string const & Character::getName() const {

	return _name;
}

void	Character::equip(AMateria* m) {

	if (!m) {
		std::cout << "Fail to equip" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			return;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

void	Character::unequip(int idx) {

	if (idx < 0 || idx >= 4 || !_inventory[idx]) {
		std::cout << "Fail to unequip" << std::endl;
		return;
	}
	_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {

	if (idx < 0 || idx >= 4 || !_inventory[idx]) {
		std::cout << "Nothing to use" << std::endl;
		return;
	}
	_inventory[idx]->use(target);
}