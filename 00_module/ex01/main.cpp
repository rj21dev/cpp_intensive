#include "PhoneBook.hpp"

static bool	isValidCommand(std::string command) {

	if (command.compare("ADD") == 0 || command.compare("add") == 0)
		return true;
	else if (command.compare("SEARCH") == 0 || command.compare("search") == 0)
		return true;
	else if (command.compare("EXIT") == 0 || command.compare("exit") == 0)
		return true;
	return false;	

}

int	main(void) {

	PhoneBook	myBook;
	std::string	command;

	std::cout << "Hello, this is a crappy awesome PhoneBook software" << std::endl;
	for (;;) {
		do {
			std::cout << "Enter the command (ADD, SEARCH, EXIT): ";
			std::getline(std::cin, command);
		} while (!isValidCommand(command));
		
		if (command.compare("ADD") == 0 || command.compare("add") == 0) {
			myBook.addContact();
		} else if (command.compare("SEARCH") == 0 || command.compare("search") == 0) {
			myBook.startSearch();
		} else if (command.compare("EXIT") == 0 || command.compare("exit") == 0) {
			std::cout << "Phone book was closed, all of contacts were destroyed." << std::endl;
			break;
		}
	}
	return 0;

}
