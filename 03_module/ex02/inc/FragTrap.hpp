#ifndef FRAGTRAP_HPP
#define FRAGTRP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:

		FragTrap(std::string name);
		FragTrap(const FragTrap& src);
		~FragTrap();

		FragTrap&	operator=(const FragTrap& rightSide);

		void		highFivesGyes(void);
};

#endif