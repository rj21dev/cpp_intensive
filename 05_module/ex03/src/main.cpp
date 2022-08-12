#include "../inc/Intern.hpp"
#include <iostream>

static void	log_separator(std::string text = "*") {

	std::string border = "";
	for (int i = 0; i < 84 / 2 - (int)text.length() / 2; i++)
		border += "*";
	std::cout << std:: endl << border << " " << text << " " << border << "*\n" << std::endl;
}

int	main() {

	log_separator("TEST 1 (makeForm - OK)");
	{
		Intern		intern;
		Bureaucrat	signer("Signer", 10);
		Bureaucrat	executor("Executor", 5);
		Form*		anyForm = NULL;

		log_separator();
		try {
			anyForm = intern.makeForm("ShrubberyCreation", executor.getName());
			signer.signForm(*anyForm);
			executor.executeForm(*anyForm);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
		log_separator();
		if (anyForm)	
			delete anyForm;
	}

	log_separator("TEST 2 (makeForm - KO)");
	{
		Intern		intern;
		Bureaucrat	signer("Signer", 10);
		Bureaucrat	executor("Executor", 5);
		Form*		anyForm = NULL;

		log_separator();
		try {
			anyForm = intern.makeForm("Shlyapa", executor.getName());
			signer.signForm(*anyForm);
			executor.executeForm(*anyForm);
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
		log_separator();
		if (anyForm)
			delete anyForm;
	}

	return 0;
}