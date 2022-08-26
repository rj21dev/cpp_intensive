#include "Warlock.hpp"

Warlock::Warlock(std::string const & _name, std::string const & _title) : name(_name), title(_title) {

	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {

	std::cout << name << ": My job here is done!" << std::endl;
	std::vector<ASpell*>::iterator ite = spells.end();
	for (std::vector<ASpell*>::iterator it = spells.begin(); it != ite; ++it)
		delete *it;
	spells.clear();
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
	if (spell) {
		std::vector<ASpell*>::iterator ite = spells.end();
		for (std::vector<ASpell*>::iterator it = spells.begin(); it != ite; ++it)
			if ((*it)->getName() == spell->getName())
				return;
		spells.push_back(spell->clone());
	}
}

void	Warlock::forgetSpell(std::string const & spellName) {
	std::vector<ASpell*>::iterator ite = spells.end();
	for (std::vector<ASpell*>::iterator it = spells.begin(); it != ite; ++it)
		if ((*it)->getName() == spellName) {
			delete *it;
			it = spells.erase(it);
		}
}

void	Warlock::launchSpell(std::string const & spellName, ATarget const & target) {
	std::vector<ASpell*>::iterator ite = spells.end();
	for (std::vector<ASpell*>::iterator it = spells.begin(); it != ite; ++it)
		if ((*it)->getName() == spellName) {
			(*it)->launch(target);
			return;
		}
}