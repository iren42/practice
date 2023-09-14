#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell {
  public:
    Fwoosh();
    virtual ~Fwoosh();

    const std::string getName() const;
    const std::string getEffects() const;

    Fwoosh *clone();

  private:
    Fwoosh(const Fwoosh &);
    Fwoosh &operator=(const Fwoosh &);
};

#endif
