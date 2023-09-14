#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Polymorph : public ASpell {
  public:
    Polymorph();
    virtual ~Polymorph();

    const std::string getName() const;
    const std::string getEffects() const;

    Polymorph *clone();

  private:
    Polymorph(const Polymorph &);
    Polymorph &operator=(const Polymorph &);
};

#endif
