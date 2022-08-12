#include "../inc/Form.hpp"

Form::Form() : name("Default"), gradeToSign(150), gradeToExecute(150) {

	isSigned = false;
	std::cout << "Default constructor called (Form)" << std::endl;
}

Form::Form(std::string _name, int _gradeToSign, int _gradeToExecute) : name(_name),	gradeToSign(_gradeToSign), gradeToExecute(_gradeToExecute) {

	isSigned = false;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	std::cout << "Parametric constructor called (Form)" << std::endl;
}

Form::Form(Form const & src) : name(src.name), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute) {

	isSigned = src.isSigned;
	std::cout << "Copy constructor called (Form)" << std::endl;
}

Form& Form::operator=(Form const & assign) {

	if (this == &assign)
		return *this;
	isSigned = assign.isSigned;
	return *this;
}

Form::~Form() {
	
	std::cout << "Destructor called (Form)" << std::endl;
}

std::string	Form::getName() const {

	return name;
}

bool	Form::getIsSigned() const {

	return isSigned;
}

int	Form::getGradeToSign() const {
	
	return gradeToSign;
}

int	Form::getGradeToExecute() const {

	return gradeToExecute;
}

void Form::beSigned(Bureaucrat & b) {

	if (gradeToSign < b.getGrade())
		throw Form::GradeTooLowException();
	isSigned = true;
}

const char* Form::GradeTooLowException::what() const throw() {

	return "grade is too low";
}

const char* Form::GradeTooHighException::what() const throw() {

	return "grade is too high";
}

const char* Form::IsNotSignedFormException::what() const throw() {

	return "the form is not signed";
}

std::ostream& operator<<(std::ostream & out, Form const & obj) {

	return out << "Form: " << obj.getName() << ", isSigned: " << obj.getIsSigned()
				<< ", gradeToSign: " << obj.getGradeToSign() << ", gradeToExecute: " << obj.getGradeToExecute();
}