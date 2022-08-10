#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {

	private:

		std::string	ideas[100];

	public:

		Brain();
		Brain(Brain const & src);
		~Brain();

		Brain&	operator=(Brain const & rightSide);

		std::string	getIdea(int i);
};

#endif