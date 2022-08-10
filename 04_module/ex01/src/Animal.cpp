#include "../inc/Animal.hpp"

Animal::Animal() : type("Animal") {

	std::cout << "Default constructor called (Animal)" << std::endl;
}

Animal::Animal(Animal const & src) {

	std::cout << "Copy constructor called (Animal)" << std::endl;
	*this = src;
}

Animal::~Animal() {

	std::cout << "Destructor called (Animal)" << std::endl;
}

Animal&	Animal::operator=(Animal const & rightSide) {

	if (this == &rightSide)
		return *this;
	this->type = rightSide.type;
	return *this;
}

std::string	Animal::getType() const {

	return type;
}

void	Animal::makeSound() const {

	std::cout << "Animal sound" << std::endl;
}

void	Animal::thinking(int i) {

	(void)i;
}