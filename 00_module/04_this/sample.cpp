#include <iostream>
#include "sample.hpp"

Sample::Sample() {
	std::cout << "Constructor called" << std::endl;
	this->val = 42;
	std::cout << "instance->val = " << this->val << std::endl;
	this->foo();
	return;
}

Sample::~Sample() {
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::foo() {
	std::cout << "Member function foo called" << std::endl;
}
