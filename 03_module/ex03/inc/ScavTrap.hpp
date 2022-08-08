#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {

	protected:

		static unsigned int const	hitPoints = 100;
		static unsigned int const	energyPoints = 50;
		static unsigned int const	attackDamage = 20;
	
	public:
	
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& src);
		~ScavTrap();

		ScavTrap&	operator=(const ScavTrap& rightSide);

		void		attack(const std::string& target);
		void		guardGate();
};

#endif