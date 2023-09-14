#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy"){
}

Dummy::~Dummy() {
}

Dummy *Dummy::clone()
{
	Dummy *o = new Dummy();
	return (o);
}


Dummy::Dummy(const Dummy& o) : ATarget(o)
{
	(*this) = o;
}

Dummy& Dummy::operator=(const Dummy &o)
{
	if (this != &o)
	{
		ATarget::operator=(o);
	}
	return (*this);
}
