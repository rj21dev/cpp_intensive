#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {

	std::cout << "Default constructor called (WrongAnimal)" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {

	std::cout << "Copy constructor called (WrongAnimal)" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "Destructor called (WrongAnimal)" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & rightSide) {

	if (this == &rightSide)
		return *this;
	this->type = rightSide.type;
	return *this;
}

std::string	WrongAnimal::getType() const {

	return type;
}

void	WrongAnimal::makeSound() const {

	std::cout << "WrongAnimal sound" << std::endl;
}