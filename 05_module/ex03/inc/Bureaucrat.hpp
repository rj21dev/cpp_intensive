#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {

	private:

		std::string	name;
		int			grade;

	public:

		Bureaucrat();
		Bureaucrat(std::string _name, int _grade);
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat& operator=(Bureaucrat const & assign);
		~Bureaucrat();

		std::string	getName() const;
		int			getGrade() const;

		void		incGrade();
		void		decGrade();

		void		signForm(Form & form);
		void		executeForm(Form & form);

		class GradeTooLowException : public std::exception {
			
			public:

				virtual const char* what() const throw();
		};
		
		class GradeTooHighException : public std::exception {
			
			public:

				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream & out, Bureaucrat const & obj);

#endif