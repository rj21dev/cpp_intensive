#include "../inc/Fixed.hpp"
#include <iostream>

Fixed::Fixed() : rawBits(0) {

	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& copyFrom) {

	std::cout << "Copy constructor called" << std::endl;
	*this = copyFrom;
}
Fixed& Fixed::operator=(Fixed const & rightSide) {

	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &rightSide)
		return *this;
	rawBits = rightSide.getRawBits();
	return *this;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return rawBits;
}

void Fixed::setRawBits(int const raw) {
	
	rawBits = raw;
}