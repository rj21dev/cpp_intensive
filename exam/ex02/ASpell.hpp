#pragma once

#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell {

protected:

	std::string	name;
	std::string	effects;

public:

	ASpell();
	ASpell(std::string const & _name, std::string const & _effects);
	ASpell(ASpell const & src);
	ASpell& operator=(ASpell const & assign);
	virtual ~ASpell();

	std::string const &	getName() const;
	std::string const & getEffects() const;

	virtual ASpell*		clone() const = 0;

	void				launch(ATarget const & ref) const;

};