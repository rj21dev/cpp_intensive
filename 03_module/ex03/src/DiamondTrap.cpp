#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {

	_name = "Default";
	ClapTrap::_name += "_clap_name";
	_hitPoints = FragTrap::hitPoints;
	_energyPoints = ScavTrap::energyPoints;
	_attackDamage = FragTrap::attackDamage;
	std::cout << "Default constructor called (DiamondTrap)" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {

	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitPoints = FragTrap::hitPoints;
	_energyPoints = ScavTrap::energyPoints;
	_attackDamage = FragTrap::attackDamage;
	std::cout << "Parametric constructor called (DiamondTrap)" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) {
	
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
	this->ClapTrap::_name = rightSide.ClapTrap::_name;
	this->_name = rightSide._name;
	this->_hitPoints = rightSide._hitPoints;
	this->_energyPoints = rightSide._energyPoints;
	this->_attackDamage = rightSide._attackDamage;
	return *this;
}

void	DiamondTrap::whoAmI() {

	std::cout << "Name: " << _name << " (" << ClapTrap::_name << ") - ";
	std::cout << "HP: " << _hitPoints << ", EP: " << _energyPoints << ", DMG: " << _attackDamage << std::endl;
}