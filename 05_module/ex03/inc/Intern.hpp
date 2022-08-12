#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

class Intern {

	public:

		Intern();
		Intern(Intern const & src);
		Intern& operator=(Intern const & assign);
		~Intern();

		Form*	makeForm(std::string formName, std::string formTarget);

		class UnknownFormException : public std::exception {

			public:

				virtual const char* what() const throw();
		};
};

#endif