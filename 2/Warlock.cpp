#include "Warlock.hpp"

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
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
	_book.learnSpell(spell);
}

void	Warlock::forgetSpell(std::string spellname)
{
	_book.forgetSpell(spellname);
}

void	Warlock::launchSpell(std::string spellname, ATarget &target)
{
	ASpell *spell = _book.createSpell(spellname);
	if (spell != NULL)
	{
		target.getHitBySpell(*spell);
		delete spell;
	}
}
