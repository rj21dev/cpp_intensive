#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:

		std::string const	name;
		bool				isSigned;
		int const			gradeToSign;
		int const			gradeToExecute;

	public:

		Form();
		Form(std::string _name, int _gradeToSign, int _gradeToExecute);
		Form(Form const & src);
		Form& operator=(Form const & assign);
		~Form();

		std::string	getName() const;
		bool		getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;

		void		beSigned(Bureaucrat & b);

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream & out, Form const & obj);

#endif