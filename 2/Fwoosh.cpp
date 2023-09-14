#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed"){
}

Fwoosh::~Fwoosh() {
}

Fwoosh *Fwoosh::clone()
{
	Fwoosh *o = new Fwoosh();
	return (o);
}
