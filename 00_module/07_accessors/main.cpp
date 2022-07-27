#include <iostream>
#include "sample.hpp"

int main() {
	
	Sample instance;
	
	instance.setVal(42);	
	std::cout << "instance.val = " << instance.getVal() << std::endl;

	return 0;
}
