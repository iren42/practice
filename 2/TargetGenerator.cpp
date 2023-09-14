#include "TargetGenerator.hpp"

TargetGenerator::~TargetGenerator()
{
	std::cout << "TargetGenerator destructor called" << std::endl;
	TARGET::iterator it = _targets.begin();
	while (it != _targets.end())
	{
		delete ((*it).second);
		it++;
	}
}

TargetGenerator::TargetGenerator()
{}

void	TargetGenerator::learnTargetType(ATarget* target)
{
	ATarget *s = target->clone();
	_targets.insert(std::make_pair(s->getType(), s));
}

void	TargetGenerator::forgetTargetType(std::string const &targetname)
{
	TARGET::iterator it = _targets.find(targetname);
	if (it != _targets.end())
	{
		ATarget *ptr = _targets.at(targetname);
		std::cout << targetname << " is going to be forgotten" << std::endl;
		_targets.erase(targetname);
		delete (ptr);
	}
	else
		std::cout << targetname << " is un unknown target" << std::endl;
}

ATarget 	*TargetGenerator::createTarget(std::string const &targetname)
{
	TARGET::iterator it = _targets.find(targetname);	
	if (it != _targets.end()) // targetname found
	{
		ATarget *target = _targets.at(targetname)->clone();
		return (target);
	}
	return (NULL);
}
