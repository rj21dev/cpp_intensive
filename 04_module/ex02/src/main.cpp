#include "../inc/AAnimal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Brain.hpp"
#include <iomanip>

static void	log_separator(void) {

	std::cout << std:: endl << std::setw(83) << std::setfill('*') << "*\n" << std::endl;
}

int	main(void) {

	{
		Dog basic;
		std::cout << std::endl;
		{
			Dog tmp = basic;
		}
		std::cout << std::endl;
	}
	log_separator();

	int const n = 10;
	AAnimal* arr[n];

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0)
			arr[i] = new Cat();
		else
			arr[i] = new Dog();
	}

	log_separator();
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i]->thinking(rand() % 100);
		arr[i]->makeSound();
	}
	log_separator();

	for (int i = 0; i < n; i++)
		delete arr[i];

	return 0;
}