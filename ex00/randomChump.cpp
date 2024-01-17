#include "Class/Zombie/Zombie.hpp"

void  randomChump(std::string name)
{
  Zombie zombie(name);
  zombie.announce();
}
