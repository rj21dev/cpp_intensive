#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

	private:

		Brain *brain;

	public:

		Cat();
		Cat(Cat const & src);
		virtual ~Cat();

		Cat&	operator=(Cat const & rightSide);

		void	makeSound() const;
		void	thinking(int i);

};

#endif