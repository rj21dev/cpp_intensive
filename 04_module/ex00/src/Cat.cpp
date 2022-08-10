#include "../inc/Cat.hpp"

Cat::Cat() {

	this->type = "Cat";
	std::cout << "Default constructor called (Cat)" << std::endl;
}

Cat::Cat(Cat const & src) : Animal() {

	std::cout << "Copy constructor called (Cat)" << std::endl;
	*this = src;
}

Cat::~Cat() {

	std::cout << "Destructor called (Cat)" << std::endl;
}

Cat&	Cat::operator=(Cat const & rightSide) {

	if (this == &rightSide)
		return *this;
	this->type = rightSide.type;
	return *this;
}

void	Cat::makeSound() const {

	std::cout << "Cat sound" << std::endl;
}