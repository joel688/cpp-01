#include "HumanB.hpp"

// ----------Constructor----------

HumanB::HumanB(const std::string& name)
{
  this->SetName(name);
  return ;
}

// ----------Destructors----------

HumanB::~HumanB()
{
  std::cout << this->GetName() << " the HumanB destroyed" << std::endl;
  return ;
}

// ----------Setters----------

void  HumanB::SetName(const std::string& name)
{
  this->name = name;
  return ;
}

void  HumanB::setWeapon(Weapon& weapon)
{
  this->weapon = &weapon;
}

// ----------Getters----------

const std::string& HumanB::GetName(void)
{
  return(this->name);
}

// ----------Members Functions----------

void  HumanB::attack()
{
  std::cout << this->GetName() << " attack with their " << this->weapon->getType() << std::endl;
}
