#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"


class BrickWall : public ATarget {
  public:
    BrickWall();
    virtual ~BrickWall();

    const std::string getType() const;

    BrickWall *clone();

  private:
    BrickWall(const BrickWall &);
    BrickWall &operator=(const BrickWall &);
};

#endif
