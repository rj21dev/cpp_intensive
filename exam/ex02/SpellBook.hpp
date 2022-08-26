#pragma once

#include "ASpell.hpp"
#include <vector>

class SpellBook {

private:

	std::vector<ASpell*> spells;

	SpellBook(SpellBook const & src);
	SpellBook& operator=(SpellBook const & assign);

public:

		SpellBook();
		~SpellBook();

		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string const & spellName);
		ASpell*	createSpell(std::string const & spellName);
};