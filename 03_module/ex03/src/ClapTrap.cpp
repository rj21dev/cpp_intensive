#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap() {

	_name = "Default";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Default constructor called (ClapTrap)" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {

	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Parametric constructor called (ClapTrap)" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
	
	*this = src;
	std::cout << "Copy constructor called (ClapTrap)" << std::endl;
}

ClapTrap::~ClapTrap() {

	std::cout << "Destructor called (ClapTrap)" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & rightSide) {

	std::cout << "Allignment operator called (ClapTrap)" << std::endl;
	if (this == &rightSide)
		return *this;
	this->_name = rightSide._name;
	this->_hitPoints = rightSide._hitPoints;
	this->_energyPoints = rightSide._energyPoints;
	this->_attackDamage = rightSide._attackDamage;
	return *this;
}

void		ClapTrap::attack(const std::string& target) {

	if (!_hitPoints) {

		std::cout << "ClapTrap " << this->_name << " is dead. RIP" << std::endl;
		return;
	}
	if (_energyPoints > 0) {

		std::cout << "ClapTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "ClapTrap: Not enogh EP" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount) {

	if (!_hitPoints) {

		std::cout << "ClapTrap " << this->_name << " is dead. RIP" << std::endl;
		return;
	}
	if (amount < _hitPoints)
		_hitPoints -= amount;
	else
		_hitPoints = 0;
	std::cout << "ClapTrap " << this->_name << " has taken -";
	std::cout << amount << "HP of damage";
	if (_hitPoints <= 0) {

		std::cout << " and died" << std::endl;
		return;
	}
	std:: cout << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount) {

	if (!_hitPoints) {

		std::cout << "ClapTrap " << this->_name << " is dead. RIP" << std::endl;
		return;
	}
	if (_energyPoints > 0) {

		std::cout << "ClapTrap " << this->_name << " is repaired himself +" << amount << "HP" << std::endl;
		_energyPoints--;
		_hitPoints += amount;
	}
	else
		std::cout << "ClapTrap: Not enogh EP" << std::endl;
}