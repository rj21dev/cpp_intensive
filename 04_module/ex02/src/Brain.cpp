#include "../inc/Brain.hpp"

Brain::Brain() {

	std::string samples[6] = {

		"wanna eat",
		"wanna sleep",
		"wanna run",
		"wanna play",
		"wanna fight",
		"wanna hunt"
	};
	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
		ideas[i] = samples[rand() % 6];
	}
	std::cout << "Default constructor called (Brain)" << std::endl;
}

Brain::Brain(Brain const & src) {

	for (int i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
	std::cout << "Copy constructor called (Brain)" << std::endl;
}

Brain::~Brain() {

	std::cout << "Destructor called (Brain)" << std::endl;
}

Brain&	Brain::operator=(Brain const & rightSide) {

	if (this == &rightSide)
		return *this;
	for (int i = 0; i < 100; i++)
		ideas[i] = rightSide.ideas[i];
	return *this;
}

std::string	Brain::getIdea(int i) {

	if (i >= 0 && i < 100)
		return ideas[i];
	return "Brain Error";
}