#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include <iostream>

class ASpell {
  public:
    ASpell(std::string name, std::string effects);
    virtual ~ASpell();
    ASpell(const ASpell &);
    ASpell &operator=(const ASpell &);

    const std::string getName() const;
    const std::string getEffects() const;

    virtual ASpell *clone() = 0;

  protected:
    std::string _name;
    std::string _effects;
  private:
};

#endif
