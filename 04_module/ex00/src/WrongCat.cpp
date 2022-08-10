#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() {

	this->type = "WrongCat";
	std::cout << "Default constructor called (WrongCat)" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal() {

	std::cout << "Copy constructor called (WrongCat)" << std::endl;
	*this = src;
}

WrongCat::~WrongCat() {

	std::cout << "Destructor called (WrongCat)" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const & rightSide) {

	if (this == &rightSide)
		return *this;
	this->type = rightSide.type;
	return *this;
}

void	WrongCat::makeSound() const {

	std::cout << "WrongCat sound" << std::endl;
}