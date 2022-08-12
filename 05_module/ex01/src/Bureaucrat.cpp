#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {

	name = "Default";
	grade = 150;
	std::cout << "Default constructor called (Bureaucrat)" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) {

	name = _name;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	grade = _grade;
	std::cout << "Parametric constructor called (Bureaucrat)" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {

	*this = src;
	std::cout << "Copy constructor called (Bureaucrat)" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const & assign) {

	if (this == &assign)
		return *this;
	name = assign.name;
	grade = assign.grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {

	std::cout << "Destructor called (Bureaucrat)" << std::endl;
}

std::string	Bureaucrat::getName() const {

	return name;
}

int	Bureaucrat::getGrade() const {

	return grade;
}

void Bureaucrat::incGrade() {

	if (grade == 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void Bureaucrat::decGrade() {

	if (grade == 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {

	return "Grade is too low. Min grade is 150";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {

	return "Grade is too high. Max grade is 1";
}

void	Bureaucrat::signForm(Form & target) {

	try {
		target.beSigned(*this);
		std::cout << name << " signed " << target.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << name << " couldn't sign " << target.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream & out, Bureaucrat const & obj) {

	return out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
}