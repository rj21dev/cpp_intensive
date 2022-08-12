#include "../inc/Intern.hpp"

Intern::Intern() {

	std::cout << "Default constructor called (Intern)" << std::endl;
}

Intern::Intern(Intern const & src) {

	*this = src;
	std::cout << "Default constructor called (Intern)" << std::endl;
}

Intern& Intern::operator=(Intern const & assign) {

	if (this == &assign)
		return *this;
	return *this;
}

Intern::~Intern() {

	std::cout << "Destructor called (Intern)" << std::endl;
}

static Form* getPPF(std::string target) { return new PresidentialPardonForm(target); }
static Form* getRRF(std::string target) { return new RobotomyRequestForm(target); }
static Form* getSCF(std::string target) { return new ShrubberyCreationForm(target); }

Form*	Intern::makeForm(std::string formName, std::string formTarget) {

	Form* (*funcs[3])(std::string) = { getPPF, getRRF, getSCF };
	std::string names[3] = { "PresidentialPardon", "RobotomyRequest", "ShrubberyCreation" };
	for (int i = 0; i < 3; i++)
		if (formName == names[i]) {
			std::cout << "Intern creates " << formName << std::endl;
			return funcs[i](formTarget);
		}
	throw Intern::UnknownFormException();
}

const char* Intern::UnknownFormException::what() const throw() { return ("unknown form"); }