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
