#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Presidential Pardon", 72, 45) {

	target = "DefaultTarget";
	std::cout << "Default constructor called (RobotomyRequestForm)" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form("Robotomy Request" , 72, 45) {

	target = _target;
	std::cout << "Parametric constructor called (RobotomyRequestForm)" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src) {

	target = src.target;
	std::cout << "Copy constructor called (RobotomyRequestForm)" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & assign) {
	if (this == &assign)
		return *this;
	target = assign.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {

	std::cout << "Destructor called (RobotomyRequestForm)" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	if (!this->getIsSigned())
		throw Form::IsNotSignedFormException();
	if (this->getGradeToExecute() < executor.getGrade())
		throw Form::GradeTooLowException();
	srand(time(NULL));
	std::cout << "Bzzz..." << std::endl;
	sleep(1);
	std::cout << "Bzzz... Bzzz..." << std::endl;
	sleep(1);
	std::cout << "Bzzz... Bzzzz... Bzzz..." << std::endl;
	sleep(1);
	if (rand() % 2)
		std::cout << target << " has been robotomized succesfully" << std::endl;
	else
		std::cout << "robotomy failed" << std::endl;
}