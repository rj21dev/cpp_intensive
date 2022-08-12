#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include <iostream>

static void	log_separator(std::string text = "*") {

	std::string border = "";
	for (int i = 0; i < 84 / 2 - (int)text.length() / 2; i++)
		border += "*";
	std::cout << std:: endl << border << " " << text << " " << border << "*\n" << std::endl;
}

int	main() {

	{
		log_separator();
		
		Bureaucrat				admin("Admin", 150);
		Bureaucrat				user("User", 115);
		PresidentialPardonForm	ppf(user.getName());
		RobotomyRequestForm		rrf(user.getName());
		ShrubberyCreationForm	scf(user.getName());

		log_separator("Test 1 (signed - KO, exec - KO)");

		admin.signForm(ppf);
		user.executeForm(ppf);
		admin.signForm(rrf);
		user.executeForm(rrf);
		admin.signForm(scf);
		user.executeForm(scf);

		log_separator();
	}
	{
		log_separator();
		
		Bureaucrat				admin("Admin", 15);
		Bureaucrat				user("User", 148);
		PresidentialPardonForm	ppf(user.getName());
		RobotomyRequestForm		rrf(user.getName());
		ShrubberyCreationForm	scf(user.getName());

		log_separator("Test 2 (signed - OK, exec - KO)");

		admin.signForm(ppf);
		user.executeForm(ppf);
		admin.signForm(rrf);
		user.executeForm(rrf);
		admin.signForm(scf);
		user.executeForm(scf);

		log_separator();
	}
	{
		log_separator();
		
		Bureaucrat				admin("Admin", 20);
		Bureaucrat				user("User", 4);
		PresidentialPardonForm	ppf(user.getName());
		RobotomyRequestForm		rrf(user.getName());
		ShrubberyCreationForm	scf(user.getName());

		log_separator("Test 3 (signed - OK, exec - OK)");

		admin.signForm(ppf);
		user.executeForm(ppf);
		admin.signForm(rrf);
		user.executeForm(rrf);
		admin.signForm(scf);
		user.executeForm(scf);

		log_separator();
	}

	return 0;
}