#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

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