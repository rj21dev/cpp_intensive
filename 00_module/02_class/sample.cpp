#include <iostream>
#include "sample.hpp"

Sample::Sample() {
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample() {
	std::cout << "Destructor called" << std::endl;
	return;
}
