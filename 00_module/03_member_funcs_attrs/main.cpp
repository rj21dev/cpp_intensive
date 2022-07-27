#include <iostream>
#include "sample.hpp"

int main() {
	
	Sample instance;

	instance.val = 42;
	std::cout << "instance.val = " << instance.val << std::endl;

	instance.foo();

	return 0;
}
