#include "../inc/Harl.hpp"

int	main(int argc, char **argv) {

	if (argc != 2) {
		std::cout << "Usage: ./harlFilter <level (DEBUG, INFO, WARNING, ERROR)>" << std::endl;
		return 1;
	}
	
	Harl karl;
	karl.complain(argv[1]);

	return 0;
}