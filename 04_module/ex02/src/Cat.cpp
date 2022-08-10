#include "../inc/Cat.hpp"

Cat::Cat() {

	std::cout << "Default constructor called (Cat)" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const & src) : AAnimal() {

	std::cout << "Copy constructor called (Cat)" << std::endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
}

Cat::~Cat() {
	
	delete brain;
	std::cout << "Destructor called (Cat)" << std::endl;
}

Cat&	Cat::operator=(Cat const & rightSide) {

	if (this == &rightSide)
		return *this;
	this->type = rightSide.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*rightSide.brain);
	return *this;
}

void	Cat::makeSound() const {

	std::cout << "Cat sound" << std::endl;
}

void	Cat::thinking(int i) {

	std::cout << type << " have idea - " << brain->getIdea(i) << std::endl;
}