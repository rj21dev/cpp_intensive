#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

	protected:

		static unsigned int const	hitPoints = 100;
		static unsigned int const	energyPoints = 100;
		static unsigned int const	attackDamage = 30;

	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& src);
		~FragTrap();

		FragTrap&	operator=(const FragTrap& rightSide);

		void		highFivesGyes(void);
};

#endif