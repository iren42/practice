#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp"){
}

Fireball::~Fireball() {

	std::cout << "Fireball destructor called" << std::endl;
}

Fireball *Fireball::clone()
{
	std::cout << "Fireball clone called" << std::endl;
	Fireball *o = new Fireball();
	return (o);
}
