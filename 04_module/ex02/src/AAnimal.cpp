#include "../inc/AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal") {

	std::cout << "Default constructor called (AAnimal)" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src) {

	std::cout << "Copy constructor called (AAnimal)" << std::endl;
	*this = src;
}

AAnimal::~AAnimal() {

	std::cout << "Destructor called (AAnimal)" << std::endl;
}

AAnimal&	AAnimal::operator=(AAnimal const & rightSide) {

	if (this == &rightSide)
		return *this;
	this->type = rightSide.type;
	return *this;
}

std::string	AAnimal::getType() const {

	return type;
}