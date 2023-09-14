#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"


class Dummy : public ATarget {
  public:
    Dummy();
    virtual ~Dummy();

    const std::string getType() const;

    Dummy *clone();

  private:
    Dummy(const Dummy &);
    Dummy &operator=(const Dummy &);
};

#endif
