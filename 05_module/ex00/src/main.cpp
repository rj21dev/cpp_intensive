#include "../inc/Bureaucrat.hpp"
#include <iostream>

static void	log_separator(std::string text = "*") {

	std::string border = "";
	for (int i = 0; i < 84 / 2 - (int)text.length(); i++)
		border += "*";
	std::cout << std:: endl << border << " " << text << " " << border << "*\n" << std::endl;
}

int	main() {

	log_separator("TEST 1");
	{
		try {
			Bureaucrat test("Test1", -42);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	log_separator("TEST 2");
	{
		try {
			Bureaucrat test("Test2", 220);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	log_separator("TEST 3");
	{
		Bureaucrat test("Test3", 42);

		std::cout << test << std::endl;
		try {
			test.incGrade();
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << test << std::endl;
	}
	log_separator("TEST 4");
	{
		Bureaucrat test("Test4", 21);

		std::cout << test << std::endl;
		try {
			test.decGrade();
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << test << std::endl;
	}
	log_separator("TEST 5");
	{
		Bureaucrat test("Test5", 1);

		std::cout << test << std::endl;
		try {
			test.incGrade();
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << test << std::endl;
	}
	log_separator("TEST 6");
	{
		Bureaucrat test("Test6", 150);

		std::cout << test << std::endl;
		try {
			test.decGrade();
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << test << std::endl;
	}
	
	return 0;
}