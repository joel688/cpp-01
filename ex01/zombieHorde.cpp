#include "Class/Zombie/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
  Zombie *array_zombies = new Zombie[N];
  for(int i = 0; i < N; i++)
    array_zombies[i].SetName(name);
  return(array_zombies);
}
