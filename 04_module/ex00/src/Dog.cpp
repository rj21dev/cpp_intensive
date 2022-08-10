#include "../inc/Dog.hpp"

Dog::Dog() {

	this->type = "Dog";
	std::cout << "Default constructor called (Dog)" << std::endl;
}

Dog::Dog(Dog const & src) : Animal() {

	std::cout << "Copy constructor called (Dog)" << std::endl;
	*this = src;
}

Dog::~Dog() {

	std::cout << "Destructor called (Dog)" << std::endl;
}

Dog&	Dog::operator=(Dog const & rightSide) {

	if (this == &rightSide)
		return *this;
	this->type = rightSide.type;
	return *this;
}

void	Dog::makeSound() const {

	std::cout << "Dog sound" << std::endl;
}