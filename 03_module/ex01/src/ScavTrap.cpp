#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() {

	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Default constructor called (ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Parametric constructor called (ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
	
	*this = src;
	std::cout << "Copy constructor called (ScavTrap)" << std::endl;
}

ScavTrap::~ScavTrap() {

	std::cout << "Destructor called (ScavTrap)" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & rightSide) {

	std::cout << "Allignment operator called (ScavTrap)" << std::endl;
	if (this == &rightSide)
		return *this;
	this->_name = rightSide._name;
	this->_hitPoints = rightSide._hitPoints;
	this->_energyPoints = rightSide._energyPoints;
	this->_attackDamage = rightSide._attackDamage;
	return *this;
}

void	ScavTrap::guardGate() {

	std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode" << std::endl;
}

void		ScavTrap::attack(const std::string& target) {

	if (!_hitPoints) {

		std::cout << "ScavTrap " << this->_name << " is dead. RIP" << std::endl;
		return;
	}
	if (_energyPoints > 0) {

		std::cout << "ScavTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "ScavTrap " << this->_name << ": Not enogh EP" << std::endl;
}