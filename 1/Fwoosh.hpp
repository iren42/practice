#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell {
  public:
    Fwoosh();
    virtual ~Fwoosh();
    Fwoosh(const Fwoosh &);
    Fwoosh &operator=(const Fwoosh &);


    Fwoosh *clone();

  private:
};

#endif
