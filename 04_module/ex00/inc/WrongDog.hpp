#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {

	public:

		WrongDog();
		WrongDog(WrongDog const & src);
		~WrongDog();

		WrongDog&	operator=(WrongDog const & rightSide);

		void	makeSound() const;

};

#endif