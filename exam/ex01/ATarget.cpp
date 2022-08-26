#include "ATarget.hpp"
#include <iostream>

ATarget::ATarget() : type() {}
ATarget::ATarget(std::string const & _type) : type(_type) {}
ATarget::ATarget(ATarget const & src) { *this = src; }
ATarget& ATarget::operator=(ATarget const & assign) { type = assign.type; return *this; }
ATarget::~ATarget() {}

std::string const &	ATarget::getType() const { return type; }


void	ATarget::getHitBySpell(ASpell const & ref) const {
	std::cout << type << " has been " << ref.getEffects() << "!" << std::endl;
}