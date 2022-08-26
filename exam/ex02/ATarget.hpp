#pragma once

#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget {

protected:

	std::string	type;

public:

	ATarget();
	ATarget(std::string const & _type);
	ATarget(ATarget const & src);
	ATarget& operator=(ATarget const & assign);
	virtual ~ATarget();

	std::string const &	getType() const;

	virtual ATarget*	clone() const = 0;

	void				getHitBySpell(ASpell const & ref) const;
};