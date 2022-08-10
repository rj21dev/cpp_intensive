#include "../inc/WrongDog.hpp"

WrongDog::WrongDog() {

	this->type = "WrongDog";
	std::cout << "Default constructor called (WrongDog)" << std::endl;
}

WrongDog::WrongDog(WrongDog const & src) : WrongAnimal() {

	std::cout << "Copy constructor called (WrongDog)" << std::endl;
	*this = src;
}

WrongDog::~WrongDog() {

	std::cout << "Destructor called (WrongDog)" << std::endl;
}

WrongDog&	WrongDog::operator=(WrongDog const & rightSide) {

	if (this == &rightSide)
		return *this;
	this->type = rightSide.type;
	return *this;
}

void	WrongDog::makeSound() const {

	std::cout << "WrongDog sound" << std::endl;
}