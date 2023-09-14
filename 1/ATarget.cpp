#include "ATarget.hpp"

ATarget::ATarget(std::string type) : _type(type){
}

ATarget::~ATarget() {
}

ATarget::ATarget(const ATarget& o)
{
	if (this != &o)
	{
		_type = o._type;
	}
}


ATarget&	ATarget::operator=(const ATarget& o)
{
	if (this != &o)
	{
		_type = o._type;
	}
	return (*this);
}

const std::string ATarget::getType() const
{
  return (_type);
}

void	ATarget::getHitBySpell(const ASpell &spell)
{
	std::cout << _type << " has been " << spell.getEffects() << std::endl;
}
