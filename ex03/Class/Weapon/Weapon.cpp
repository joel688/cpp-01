#include "Weapon.hpp"

// ----------Constructor----------

Weapon::Weapon(const std::string& type)
{
  this->type = type;
  return ;
}

// ----------Destructors----------

Weapon::~Weapon(void)
{
  std::cout << this->getType() << " Weapon destroyed" << std::endl;
  return;
}

// ----------Setters----------

void  Weapon::setType(const std::string& type)
{
  this->type = type;
  return ;
}

// ----------Getters----------

const std::string& Weapon::getType(void)
{
  return (this->type);
}

// ----------Members Functions----------
