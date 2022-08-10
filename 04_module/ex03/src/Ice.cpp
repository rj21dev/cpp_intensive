#include "../inc/Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Default constructor called (Ice)" << std::endl;

}

Ice::Ice(Ice const & src) : AMateria(src) {

	std::cout << "Copy constructor called (Ice)" << std::endl;
	*this = src;
}

Ice::~Ice() {
	std::cout << "Destructor called (Ice)" << std::endl;
}

Ice&	Ice::operator=(Ice const & rightSide) {
	if (this == &rightSide)
		return *this;
	_type = rightSide._type;
	return *this;
}

AMateria*	Ice::clone() const {

	return new Ice(*this);
}

void	Ice::use(ICharacter& target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}