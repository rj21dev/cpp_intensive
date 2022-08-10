#include "../inc/Cure.hpp"

Cure::Cure() : AMateria("Cure") {
	std::cout << "Default constructor called (Cure)" << std::endl;

}

Cure::Cure(Cure const & src) {

	std::cout << "Copy constructor called (Cure)" << std::endl;
	*this = src;
}

Cure::~Cure() {
	std::cout << "Destructor called (Cure)" << std::endl;
}

Cure&	Cure::operator=(Cure const & rightSide) {
	if (this == &rightSide)
		return *this;
	_type = rightSide._type;
	return *this;
}

AMateria*	Cure::clone() const {

	return new Cure(*this);
}

void	Cure::use(ICharacter& target) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}