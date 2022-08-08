#include "../inc/FragTrap.hpp"

FragTrap::FragTrap() {

	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Default constructor called (FragTrap)" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Parametric constructor called (FragTrap)" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) {
	
	*this = src;
	std::cout << "Copy constructor called (FragTrap)" << std::endl;
}

FragTrap::~FragTrap() {

	std::cout << "Destructor called (FragTrap)" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const & rightSide) {

	std::cout << "Allignment operator called (FragTrap)" << std::endl;
	if (this == &rightSide)
		return *this;
	this->_name = rightSide._name;
	this->_hitPoints = rightSide._hitPoints;
	this->_energyPoints = rightSide._energyPoints;
	this->_attackDamage = rightSide._attackDamage;
	return *this;
}

void	FragTrap::highFivesGyes(void) {

	std::cout << "FragTrap " << this->_name << " is giving high five" << std::endl;
}