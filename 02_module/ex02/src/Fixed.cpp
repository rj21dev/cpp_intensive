#include "../inc/Fixed.hpp"
#include <iostream>

// Orthodox Canonical form
Fixed::Fixed() : rawBits(0) {

	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) {

	//std::cout << "Int constructor called" << std::endl;
	rawBits = num << fractionalBits;
}

Fixed::Fixed(const float num) {
	
	//std::cout << "Float constructor called" << std::endl;
	rawBits = roundf(num * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& copyFrom) {

	//std::cout << "Copy constructor called" << std::endl;
	*this = copyFrom;
}

Fixed& Fixed::operator=(Fixed const & rhs) {

	//std::cout << "Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return *this;
	rawBits = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed() {

	//std::cout << "Destructor called" << std::endl;
}

// Getter & Setter
int Fixed::getRawBits(void) const {

	return rawBits;
}

void Fixed::setRawBits(int const raw) {
	
	rawBits = raw;
}

// Comparison operators overload
bool	Fixed::operator>(Fixed const & rightSide) const {
	
	return this->rawBits > rightSide.rawBits;
}

bool	Fixed::operator<(Fixed const & rightSide) const {
	
	return this->rawBits < rightSide.rawBits;
}

bool	Fixed::operator>=(Fixed const & rightSide) const {

	return this->rawBits >= rightSide.rawBits;
}

bool	Fixed::operator<=(Fixed const & rightSide) const {

	return this->rawBits <= rightSide.rawBits;
}

bool	Fixed::operator==(Fixed const & rightSide) const {

	return this->rawBits == rightSide.rawBits;
}

bool	Fixed::operator!=(Fixed const & rightSide) const {

	return this->rawBits != rightSide.rawBits;
}

// Arithmetic operators overlosd
Fixed	Fixed::operator+(Fixed const & rightSide) const {

	return Fixed(this->toFloat() + rightSide.toFloat());
}

Fixed	Fixed::operator-(Fixed const & rightSide) const {

	return Fixed(this->toFloat() - rightSide.toFloat());
}

Fixed	Fixed::operator*(Fixed const & rightSide) const {

	return Fixed(this->toFloat() * rightSide.toFloat());
}

Fixed	Fixed::operator/(Fixed const & rightSide) const {

	return Fixed(this->toFloat() / rightSide.toFloat());
}

// Pre-increment, post-increment, pre-decrement, post-decrement;
Fixed&	Fixed::operator++(void) {

	rawBits++;
	return *this;
}

Fixed	Fixed::operator++(int) {

	Fixed	tmp = *this;
	rawBits++;
	return tmp;
}

Fixed&	Fixed::operator--(void) {

	rawBits--;
	return *this;
}

Fixed	Fixed::operator--(int) {

	Fixed	tmp = *this;
	rawBits--;
	return tmp;
}

// Insertion operator overload
std::ostream&	operator<<(std::ostream & out, Fixed const & rightSide)
{
	out << rightSide.toFloat();
	return (out);
}

// minimax
Fixed& 			Fixed::min(Fixed& a, Fixed& b) {

	return a < b ? a : b;
}

Fixed& 			Fixed::max(Fixed& a, Fixed& b) {
	
	return a > b ? a : b;
}

Fixed const &	Fixed::min(Fixed const & a, Fixed const & b) {

	return a < b ? a : b;
}

Fixed const &	Fixed::max(Fixed const & a, Fixed const & b) {

	return a > b ? a : b;
}

float	Fixed::toFloat(void) const {

	return (float)rawBits / (1 << fractionalBits);
}

int		Fixed::toInt(void) const {

	return rawBits >> fractionalBits;
}