#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {

	protected:

		std::string	type;

	public:

		WrongAnimal();
		WrongAnimal(WrongAnimal const & src);
		~WrongAnimal();

		WrongAnimal&			operator=(WrongAnimal const & rightSide);

		std::string		getType() const;

		void			makeSound() const;

};

#endif