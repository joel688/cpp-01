#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
  private:
    std::string type;

  public:
    Weapon(const std::string& type);
    ~Weapon(void);
    const std::string&     getType(void);
    void            setType(const std::string& type);
};

#endif
