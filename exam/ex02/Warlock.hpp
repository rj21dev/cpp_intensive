#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {

private:
	
	std::string				name;
	std::string				title;
	SpellBook				spellbook;

	Warlock();
	Warlock(Warlock const & src);
	Warlock& operator=(Warlock const & assign);

public:

	Warlock(std::string const & _name, std::string const & _title);
	~Warlock();
	std::string	const &	getName() const;
	std::string	const &	getTitle() const;
	void				setTitle(std::string const & _title);
	void				introduce() const;
	void				learnSpell(ASpell* spell);
	void				forgetSpell(std::string const & spellName);
	void				launchSpell(std::string const & spellName, ATarget const & target);
};