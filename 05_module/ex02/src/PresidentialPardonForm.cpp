#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon", 25, 5) {

	target = "DefaultTarget";
	std::cout << "Default constructor called (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : Form("Presidential Pardon" , 25, 5) {

	target = _target;
	std::cout << "Parametric constructor called (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src) {

	target = src.target;
	std::cout << "Copy constructor called (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & assign) {
	if (this == &assign)
		return *this;
	target = assign.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {

	std::cout << "Destructor called (PresidentialPardonForm)" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	if (!this->getIsSigned())
		throw Form::IsNotSignedFormException();
	if (this->getGradeToExecute() < executor.getGrade())
		throw Form::GradeTooLowException();
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}