#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fireball : public ASpell {
  public:
    Fireball();
    virtual ~Fireball();

    const std::string getName() const;
    const std::string getEffects() const;

    Fireball *clone();

  private:
    Fireball(const Fireball &);
    Fireball &operator=(const Fireball &);
};

#endif
