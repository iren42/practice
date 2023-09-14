#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <map>
#include <iterator>
#include <string>

#include "ATarget.hpp"
#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock
{
  private:
    std::string _name;
    std::string _title;
	SpellBook	_book;

    Warlock(const Warlock &oth);
    Warlock &operator=(const Warlock &oth);

  public:
    virtual ~Warlock();
    Warlock(std::string name, std::string title);
    const std::string &getName() const;
    const std::string &getTitle() const;

    void  setTitle(const std::string &o);
    void  introduce() const;

	void	learnSpell(ASpell *);
	void	forgetSpell(std::string);
	void	launchSpell(std::string, ATarget &);


};
#endif
