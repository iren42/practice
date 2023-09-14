#include "ATarget.hpp"

ATarget::ATarget(std::string type) : _type(type){
}

ATarget::~ATarget() {
}

const std::string ATarget::getType() const
{
  return (_type);
}

void	ATarget::getHitBySpell(const ASpell &spell)
{
	std::cout << _type << " has been " << spell.getEffects() << std::endl;
}