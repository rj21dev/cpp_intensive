#include "../inc/Dog.hpp"

Dog::Dog() {

	std::cout << "Default constructor called (Dog)" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const & src) : AAnimal() {

	std::cout << "Copy constructor called (Dog)" << std::endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
}

Dog::~Dog() {

	delete brain;
	std::cout << "Destructor called (Dog)" << std::endl;
}

Dog&	Dog::operator=(Dog const & rightSide) {

	if (this == &rightSide)
		return *this;
	this->type = rightSide.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*rightSide.brain);
	return *this;
}

void	Dog::makeSound() const {

	std::cout << "Dog sound" << std::endl;
}

void	Dog::thinking(int i) {

	std::cout << type << " have idea - " << brain->getIdea(i) << std::endl;
}