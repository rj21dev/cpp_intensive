#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burned to a crisp") {}
Fireball::~Fireball() {}

ASpell* Fireball::clone() const {
	return new Fireball(*this);
}