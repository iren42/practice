#include "SpellBook.hpp"

SpellBook::~SpellBook()
{
	std::cout << "SpellBook destructor called" << std::endl;
	MAP::iterator it = _spells.begin();
	while (it != _spells.end())
	{
		delete ((*it).second);
		it++;
	}
}

SpellBook::SpellBook()
{}

void	SpellBook::learnSpell(ASpell* spell)
{
	ASpell *s = spell->clone();
	_spells.insert(std::make_pair(s->getName(), s));
}

void	SpellBook::forgetSpell(std::string const &spellname)
{
	MAP::iterator it = _spells.find(spellname);
	if (it != _spells.end())
	{
		ASpell *ptr = _spells.at(spellname);
		std::cout << ptr->getName() << " is going to be forgotten" << std::endl;
		_spells.erase(spellname);
		delete (ptr);
	}
	else
		std::cout << spellname << " is un unknown spell" << std::endl;
}

ASpell 	*SpellBook::createSpell(std::string const &spellname)
{
	MAP::iterator it = _spells.find(spellname);	
	if (it != _spells.end()) // spellname found
	{
		ASpell *spell = _spells.at(spellname)->clone();
		return (spell);
	}
	return (NULL);
}
