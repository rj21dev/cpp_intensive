#include <iostream>
#include "sample.hpp"

int main() {
	
	Sample instance1(42);
	Sample instance2(43);
	
	if (&instance1 == &instance1)
		std::cout << "instance1 and instance1 are physical equal" << std::endl;
	else
		std::cout << "instance1 and instance1 are not physical equal" << std::endl;
	if (&instance1 == &instance2)
		std::cout << "instance1 and instance2 are physical equal" << std::endl;
	else
		std::cout << "instance1 and instance2 are not physical equal" << std::endl;
	if (instance1.compare(&instance1) == 0)
		std::cout << "instance1 and instance1 are structurally equal" << std::endl;
	else
		std::cout << "instance1 and instance1 are not structurally equal" << std::endl;
	if (instance1.compare(&instance2) == 0)
		std::cout << "instance1 and instance2 are structurally equal" << std::endl;
	else
		std::cout << "instance1 and instance2 are not structurally equal" << std::endl;
	return 0;
}
