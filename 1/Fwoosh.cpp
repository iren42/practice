#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed"){
}

Fwoosh::~Fwoosh() {
}


Fwoosh::Fwoosh(const Fwoosh& o) : ASpell(o)
{
	(*this) = o;
}

Fwoosh& Fwoosh::operator=(const Fwoosh &o)
{
	if (this != &o)
	{
		ASpell::operator=(o);
	}
	return (*this);
}


Fwoosh *Fwoosh::clone()
{
	Fwoosh *o = new Fwoosh();
	return (o);
}
