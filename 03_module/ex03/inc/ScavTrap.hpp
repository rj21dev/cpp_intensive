#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {

	public:
	
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& src);
		~ScavTrap();

		ScavTrap&	operator=(const ScavTrap& rightSide);

		void		attack(const std::string& target);
		void		guardGate();
};

#endif