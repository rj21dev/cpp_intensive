#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <unistd.h>
#include <cstdlib>

class RobotomyRequestForm : public Form {

	private:

		std::string	target;

	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		RobotomyRequestForm& operator=(RobotomyRequestForm const & assign);
		~RobotomyRequestForm();

		void	execute(Bureaucrat const & executor) const;
};

#endif