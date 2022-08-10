#include "../inc/AMateria.hpp"

AMateria::AMateria() : _type("Default") {

	std::cout << "Default constructor called (AMateria)" << std::endl;
}

AMateria::AMateria(std::string const & type) {

	std::cout << "Parametric constructor called (AMateria)" << std::endl;
	_type = type;
}

AMateria::AMateria(AMateria const & src) {

	std::cout << "Copy constructor called (AMateria)" << std::endl;
	*this = src;
}

AMateria::~AMateria() {

	std::cout << "Destructor called (AMateria)" << std::endl;
}

AMateria&	AMateria::operator=(AMateria const &rightSide) {
	if (this == &rightSide)
		return *this;
	_type = rightSide._type;
	return *this;
}

std::string const &	AMateria::getType() const {

	return _type;
} 

void	AMateria::use(ICharacter& target) {

	std::cout << "Amateria used on " << target.getName() << std::endl;
}