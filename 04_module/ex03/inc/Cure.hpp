#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

	public:

		Cure();
		Cure(Cure const & src);
		virtual ~Cure();

		Cure&	operator=(Cure const & rightSide);

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif