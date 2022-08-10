#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource() {

	std::cout << "Default constructor called (MateriaSource)" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src) {

	std::cout << "Copy constructor called (MateriaSource)" << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource() {
	
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
	std::cout << "Destructor called (MateriaSource)" << std::endl;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const & rightSide) {

	if (this == &rightSide)
		return *this;
	for (int i = 0; i < 4; i++) {
		if (_inventory[i])
			delete _inventory[i];
		if (rightSide._inventory[i])
			_inventory[i] = rightSide._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *m) {

	if (!m) {
		std::cout << "No materia" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			return;
		}
	}
	delete m;
	std::cout << "No more slots for materia" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {

	for (int i = 0; i < 4; i++) {
		if (!_inventory[i])
			continue;
		if (_inventory[i]->getType() == type)
			return _inventory[i]->clone();
	}
	std::cout << "Undefined materia type" << std::endl;
	return NULL;
}