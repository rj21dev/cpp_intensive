#include "../inc/Fixed.hpp"
#include <iostream>

Fixed::Fixed() : rawBits(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) {

	std::cout << "Int constructor called" << std::endl;
	rawBits = num << fractionalBits;
}

Fixed::Fixed(const float num) {
	
	std::cout << "Float constructor called" << std::endl;
	rawBits = roundf(num * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& copyFrom) {

	std::cout << "Copy constructor called" << std::endl;
	*this = copyFrom;
}

Fixed& Fixed::operator=(Fixed const & rhs) {

	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return *this;
	rawBits = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {

	return rawBits;
}

void Fixed::setRawBits(int const raw) {
	
	rawBits = raw;
}

float	Fixed::toFloat(void) const {

	return (float)rawBits / (1 << fractionalBits);
}

int		Fixed::toInt(void) const {

	return rawBits >> fractionalBits;
}

std::ostream&	operator<<(std::ostream & out, Fixed const & rhs)
{
	out << rhs.toFloat();
	return (out);
}