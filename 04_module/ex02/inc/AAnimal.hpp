#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal {

	protected:

		std::string	type;

	public:

		AAnimal();
		AAnimal(AAnimal const & src);
		virtual ~AAnimal();

		AAnimal&			operator=(AAnimal const & rightSide);

		std::string		getType() const;

		virtual void	makeSound() const = 0;
		virtual void	thinking(int i) = 0;
};

#endif