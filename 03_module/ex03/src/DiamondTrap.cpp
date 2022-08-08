#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "lol"), ScavTrap(name + "kek") {

	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "Default constructor called (DiamondTrap)" << std::endl;
	std::cout << _name << " " << _hitPoints << " " << _energyPoints << " " << _attackDamage << " " << FragTrap::_attackDamage <<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) : ClapTrap(src), FragTrap(src), ScavTrap(src) {
	
	*this = src;
	std::cout << "Copy constructor called (DiamondTrap)" << std::endl;
}

DiamondTrap::~DiamondTrap() {

	std::cout << "Destructor called (DiamondTrap)" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & rightSide) {

	std::cout << "Allignment operator called (DiamondTrap)" << std::endl;
	if (this == &rightSide)
		return *this;
	// this->_name = rightSide._name;
	// this->_hitPoints = rightSide._hitPoints;
	// this->_energyPoints = rightSide._energyPoints;
	// this->_attackDamage = rightSide._attackDamage;
	*this = rightSide;
	return *this;
}

void	DiamondTrap::whoAmI() {

	// std::cout << "FragTrap " << this->_name << " is giving high five" << std::endl;
}