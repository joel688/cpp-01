#include "HumanA.hpp"

// ----------Constructor----------

HumanA::HumanA(const std::string& name, Weapon& weapon) : weapon(weapon)
{
  this->SetName(name);
  return ;
}

// ----------Destructors----------

HumanA::~HumanA()
{
  std::cout << this->GetName() << " the HumanA destroyed" << std::endl;
  return ;
}

// ----------Setters----------

void  HumanA::SetName(const std::string& name)
{
  this->name = name;
  return ;
}

// ----------Getters----------

const std::string& HumanA::GetName(void)
{
  return(this->name);
}

// ----------Members Functions----------

void  HumanA::attack()
{
  std::cout << this->GetName() << " attack with their " << this->weapon.getType() << std::endl;
}
