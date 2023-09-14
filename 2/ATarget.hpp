#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"


class ATarget {
  public:
    ATarget(std::string);
    virtual ~ATarget();

    const std::string getType() const;

    virtual ATarget *clone() = 0;
	void	getHitBySpell(const ASpell &spell);

  protected:
    std::string _type;
  private:
    ATarget(const ATarget &);
    ATarget &operator=(const ATarget &);
};

#endif
