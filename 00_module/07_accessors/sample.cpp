#include <iostream>
#include "sample.hpp"

Sample::Sample() {
	std::cout << "Constructor called" << std::endl;
	this->val = 0;
	std::cout << "this->val = " << this->val << std::endl;
	return;
}

Sample::~Sample() {
	std::cout << "Destructor called" << std::endl;
	return;
}

int Sample::getVal(void) {
	return this->val;
}

void Sample::setVal(int val) {
	this->val = val;
}
