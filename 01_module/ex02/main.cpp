#include <iostream>
#include <string>

int	main(void) {

	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Address of str:\t\ti\t" << &str << std::endl;
	std::cout << "Address in sringPtr:\t\t" << stringPTR << std::endl;
	std::cout << "Address of stringRef:\t\t" << &stringREF << std::endl << std::endl;
	
	std::cout << "Value of str:\t\t\t" << str << std::endl;
	std::cout << "Value pointed to by sringPtr:\t" << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringRef:\t" << stringREF << std::endl;

	return 0;
}











