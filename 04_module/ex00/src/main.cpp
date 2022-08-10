#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/WrongDog.hpp"

int	main(void) {

	std::cout << "***** TRUE POLYMORPHISM *****" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		j->makeSound();
		i->makeSound();
		meta->makeSound();

		delete i;
		delete j;
		delete meta;
	}

	std::cout << "\n***** WRONG POLYMORPHISM *****" << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* j = new WrongDog();
		const WrongAnimal* i = new WrongCat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		j->makeSound();
		i->makeSound();
		meta->makeSound();

		delete i;
		delete j;
		delete meta;
	}

	return 0;
}