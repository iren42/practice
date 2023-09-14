#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include <map>
#include <iterator>

#include "ASpell.hpp"

typedef std::map<std::string, ASpell*> MAP;
class SpellBook
{
	private:
	SpellBook(const SpellBook &);
	SpellBook &operator=(const SpellBook&);

	MAP _spells;
	
	public:
	virtual ~SpellBook();
	SpellBook();

	void	learnSpell(ASpell*);
	void	forgetSpell(std::string const &);
	ASpell 	*createSpell(std::string const &);

};
#endif
