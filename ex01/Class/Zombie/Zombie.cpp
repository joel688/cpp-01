#include "Zombie.hpp"

// ----------Constructors----------

Zombie::Zombie()
{
  return ;
}

// ----------Destructors----------

Zombie::~Zombie()
{
  std::cout << this->name << " has been killed" << std::endl;
  return ;
}

// ---------Setters----------

void  Zombie::SetName(const std::string& name)
{
  this->name = name;
  return ;
}

// ----------Members Functions----------

void  Zombie::announce(void)
{
  std::cout << this->name << ": " << ANNOUCEMENT << std::endl;
  return ;
}

// ----------Non Members Functions----------

Zombie* zombieHorde(int N, std::string name)
{
  Zombie *array_zombies = new Zombie[N];
  for(int i = 0; i < N; i++)
    array_zombies[i].SetName(name);
  return(array_zombies);
}
