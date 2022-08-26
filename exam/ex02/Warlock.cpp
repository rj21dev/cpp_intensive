#include "Warlock.hpp"

Warlock::Warlock(std::string const & _name, std::string const & _title) : name(_name), title(_title) {

	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {

	std::cout << name << ": My job here is done!" << std::endl;
}

std::string const & Warlock::getName() const {

	return name;
}

std::string	const & Warlock::getTitle() const {

	return title;
}

void	Warlock::setTitle(std::string const & _title) {

	title = _title;
}

void	Warlock::introduce() const {

	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}
void	Warlock::learnSpell(ASpell* spell) {
	spellbook.learnSpell(spell);
}

void	Warlock::forgetSpell(std::string const & spellName) {
	spellbook.forgetSpell(spellName);
}

void	Warlock::launchSpell(std::string const & spellName, ATarget const & target) {
	ASpell* spell = spellbook.createSpell(spellName);
	if (spell)
		spell->launch(target);
}