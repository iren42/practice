#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into critter"){
	std::cout << "Polymorph constructor called" << std::endl;

}

Polymorph::~Polymorph() {

	std::cout << "Polymorph destructor called" << std::endl;
}

Polymorph *Polymorph::clone()
{
	std::cout << "Polymorph clone called" << std::endl;
	Polymorph *o = new Polymorph();
	return (o);
}
