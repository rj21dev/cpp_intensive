#include <iostream>
#include "sample.hpp"

Sample::Sample() {
	std::cout << "Constructor called" << std::endl;
	this->val = 0;
	std::cout << "this->val = " << this->val << std::endl;
	this->_val = 0;
	std::cout << "this->_val = " << this->_val << std::endl;
	return;
}

Sample::~Sample() {
	std::cout << "Destructor called" << std::endl;
	return;
}

void Sample::foo() {
	std::cout << "Public foo called" << std::endl;
}

void Sample::_foo() {
	std::cout << "Private _foo called" << std::endl;
}
