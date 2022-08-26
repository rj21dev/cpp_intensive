#include "ASpell.hpp"

ASpell::ASpell() : name(), effects() {}

ASpell::ASpell(std::string const & _name, std::string const & _effects) {
	name = _name;
	effects = _effects;
}

ASpell::ASpell(ASpell const & src) {
	*this = src;
}

ASpell& ASpell::operator=(ASpell const & assign) {
	name = assign.name;
	effects = assign.effects;
	return *this;
}

ASpell::~ASpell() {}

std::string const &	ASpell::getName() const {
	return name;
}

std::string const & ASpell::getEffects() const {
	return effects;
}

void	ASpell::launch(ATarget const & ref) const {
	ref.getHitBySpell(*this);
}