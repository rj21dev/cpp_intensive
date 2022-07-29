#include <string>
#include <iostream>

void	byPtr(std::string* str) {

	*str += " and ponies";
}

void	byConstPtr(const std::string* str) {

	std::cout << *str << std::endl;
}

void	byRef(std::string& str) {

	str += " and ponies";
}

void	byConstRef(const std::string& str) {

	std::cout << str << std::endl;
}

int	main(void) {

	std::string	str = "i like butterflies";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "i like otters";
	
	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);
	return 0;
}