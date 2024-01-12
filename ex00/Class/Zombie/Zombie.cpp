#include "Zombie.hpp"

// ----------Constructors----------

Zombie::Zombie(std::string name)
{
  this->name = name;
  return ;
}

// ----------Destructors----------

Zombie::~Zombie()
{
  std::cout << this->name << " has been killed" << std::endl;
  return ;
}

// ----------Members Functions----------

void  Zombie::announce(void)
{
  std::cout << this->name << ": " << ANNOUCEMENT << std::endl;
  return ;
}

// ----------Non Members Functions----------

Zombie* newZombie(std::string name)
{
  Zombie *zombie = new Zombie(name);
  return (zombie);
}

void  randomChump(std::string name)
{
  Zombie zombie(name);
  zombie.announce();
}
