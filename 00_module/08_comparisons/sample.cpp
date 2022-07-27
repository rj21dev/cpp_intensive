#include <iostream>
#include "sample.hpp"

Sample::Sample(int val) : val(val) {
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample() {
	std::cout << "Destructor called" << std::endl;
	return;
}

int Sample::getVal(void) const {
	return this->val;
}

int Sample::compare(Sample *that) const {
	if (this->val < that->val)
		return -1;
	else if (this->val > that->val)
		return 1;
	return 0;
}
