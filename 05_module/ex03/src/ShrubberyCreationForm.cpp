#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Presidential Pardon", 145, 137) {

	target = "DefaultTarget";
	std::cout << "Default constructor called (ShrubberyCreationForm)" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Form("Shrubbery Creation" , 145, 137) {

	target = _target;
	std::cout << "Parametric constructor called (ShrubberyCreationForm)" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src) {

	target = src.target;
	std::cout << "Copy constructor called (ShrubberyCreationForm)" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & assign) {
	if (this == &assign)
		return *this;
	target = assign.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

	std::cout << "Destructor called (ShrubberyCreationForm)" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	std::string shrubbery = "\t\t____________ ¶¶¶_______¶¶¶¶\n \
		__________¶¶¶¶¶¶¶¶¶¶__¶¶¶¶¶¶\n \
		_________ ¶¶____¶¶¶¶__¶¶__¶¶¶\n \
		_________¶¶¶¶¶¶¶___¶¶¶¶¶____¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n \
		________¶¶__¶¶¶_____¶¶¶________¶_¶____¶¶¶¶¶\n \
		________¶¶_________________¶¶¶¶¶___¶¶¶¶¶__¶\n \
		________¶¶__________________¶¶¶¶___¶¶¶¶___¶\n \
		______¶__ ¶_________________¶¶¶___________¶¶\n \
		_____¶¶_¶¶¶_______________________________¶¶¶\n \
		_¶¶¶¶¶¶¶¶¶_________¶____________________¶__¶¶\n \
		¶¶¶¶___¶¶______¶¶¶¶¶______¶_¶¶¶_________¶¶¶¶¶¶¶\n \
		¶¶_______________¶¶_______¶¶¶¶______________¶¶¶¶\n \
		¶¶¶________________________¶¶_________________¶¶\n \
		_¶¶¶ _________________¶¶__________________¶____¶¶\n \
		__¶¶ _____¶________¶¶¶¶¶_______________¶¶¶¶¶___¶¶\n \
		__¶¶ __¶¶¶¶_________¶¶¶¶________________¶¶¶¶____¶¶\n \
		_¶¶___¶¶¶¶¶______________________________¶¶_____¶¶\n \
		¶¶¶_____¶¶_____¶¶¶_¶¶¶¶¶¶_¶¶¶¶_¶¶¶___¶¶________¶¶¶\n \
		¶¶ ______________¶_¶___¶¶__¶_¶_¶¶¶¶¶¶¶¶_______¶¶¶¶\n \
		¶¶¶_____¶¶¶¶¶¶¶¶___¶¶___¶_¶¶¶_¶¶_¶¶¶¶¶______¶¶¶¶\n \
		_¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶__¶¶__¶_¶¶¶¶¶____¶¶¶¶¶¶¶¶¶¶¶\n \
		___¶¶¶¶________¶¶¶¶¶_¶¶¶¶___¶¶______¶¶¶¶¶¶¶¶\n \
		_________________¶¶¶__¶¶¶_¶¶¶\n \
		__________________¶¶______¶¶\n \
		__________________¶¶__¶¶__¶¶¶¶¶¶¶¶¶¶\n \
		______________ ¶¶¶¶¶_¶¶¶¶_¶¶¶¶_¶¶¶¶¶¶¶¶\n \
		__________¶¶¶¶¶¶¶¶¶__¶¶___¶________¶¶¶¶¶¶¶¶¶¶\n \
		__¶¶¶¶¶¶¶¶¶¶¶¶ ___¶¶__¶___¶____________¶¶¶¶¶¶¶¶¶¶\n \
		¶¶¶¶¶¶¶¶¶¶_______¶¶¶______¶______________________\n \
		________________ ¶¶_______¶¶_____________________\n \
		________________¶¶________¶¶¶____________________\n \
		______________¶¶¶__¶¶¶¶__¶¶_¶J¶__________________\n \
		______________¶¶__¶¶__¶¶__¶__¶K¶________________\n \
		____________ ¶¶__¶¶____¶¶_¶___¶¶_________________\n";
	
	if (!this->getIsSigned())
		throw Form::IsNotSignedFormException();
	if (this->getGradeToExecute() < executor.getGrade())
		throw Form::GradeTooLowException();

	std::string filename = target + "_shrubbery";
	std::ofstream file(filename.c_str());
	if (file.is_open()) {
		file << shrubbery;
		file.close();
	}
	else
		std::cerr << "Error opening file" << std::endl;
}