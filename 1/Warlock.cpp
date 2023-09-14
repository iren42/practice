#include "Warlock.hpp"

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
	MAP::iterator it = _spells.begin();
	while(it != _spells.end())
	{
		delete (*it).second;
		it++;
	}
	_spells.clear();
}

Warlock::Warlock(std::string name, std::string title)
{
	_name = name;
	_title = title;

}

const std::string &Warlock::getName() const
{
	return (_name);
}

const std::string &Warlock::getTitle() const
{
	return (_title);
}

void  Warlock::setTitle(const std::string &title)
{
	_title = title;
}

void  Warlock::introduce() const
{

	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}


void	Warlock::learnSpell(ASpell *spell)
{
	ASpell *s = spell->clone();
	_spells.insert(MAP::value_type(s->getName(), s));
}

void	Warlock::forgetSpell(std::string spellname)
{
	MAP::iterator it = _spells.find(spellname);
	if (it != _spells.end())
	{
	delete (*it).second;
	_spells.erase(spellname);
	}
}

void	Warlock::launchSpell(std::string spellname, ATarget &target)
{
	std::map<std::string, ASpell*>::iterator it = _spells.find(spellname);
	if (it != _spells.end())
	{
		ASpell *res = _spells.at(spellname);
		target.getHitBySpell(*res);
	}
}
