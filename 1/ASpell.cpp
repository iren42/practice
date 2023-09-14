#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {
}

ASpell::~ASpell() {
}

ASpell::ASpell(const ASpell &o)
{
	if (this != &o)
	{
		_name = o._name;
		_effects= o._effects;
	}
}

ASpell &ASpell::operator=(const ASpell &o)
{

	if (this != &o)
	{
		_name = o._name;
		_effects= o._effects;
	}
	return (*this);
}

const std::string ASpell::getName() const
{
	return (_name);
}
const std::string ASpell::getEffects() const
{
	return (_effects);
}
