#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <string>
#include <map>
#include <iterator>

#include "ATarget.hpp"

typedef std::map<std::string, ATarget*> TARGET;
class TargetGenerator
{
	private:
	TargetGenerator(const TargetGenerator &);
	TargetGenerator &operator=(const TargetGenerator&);

	TARGET _targets;
	
	public:
	virtual ~TargetGenerator();
	TargetGenerator();

	void	learnTargetType(ATarget*);
	void	forgetTargetType(std::string const &);
	ATarget 	*createTarget(std::string const &);

};
#endif
