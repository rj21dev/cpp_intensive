#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include <iostream>

static void	log_separator(std::string text = "*") {

	std::string border = "";
	for (int i = 0; i < 84 / 2 - (int)text.length() / 2; i++)
		border += "*";
	std::cout << std:: endl << border << " " << text << " " << border << "*\n" << std::endl;
}

int	main() {

	log_separator("TEST 1 (wrong init)");
	{
		try {
			Form test("Test1", -42, 50);
			std::cout << test << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}

	log_separator("TEST 2 (wrong init)");
	{
		try {
			Form test("Test2", 42, 155);
			std::cout << test << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}

	log_separator("TEST 3 (sign fail)");
	{
		try {
			Bureaucrat bur("Manager", 120);
			std::cout << bur << std::endl;
			Form form("42F", 110, 150);
			std::cout << form << std::endl;
			try {
				bur.signForm(form);
			}
			catch (std::exception & e){
				std::cerr << e.what() << std::endl;
			}
			std::cout << form << std::endl;
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}

	log_separator("TEST 4 (sign success)");
	{
		try {
			Bureaucrat bur("Manager", 100);
			std::cout << bur << std::endl;
			Form form("42F", 110, 150);
			std::cout << form << std::endl;
			try {
				bur.signForm(form);
			}
			catch (std::exception & e){
				std::cerr << e.what() << std::endl;
			}
			std::cout << form << std::endl;
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	log_separator();
	return 0;
}