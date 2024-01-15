#include "./Class/Zombie/Zombie.hpp"

int main(void)
{
  Zombie *array_of_zombies = zombieHorde(NB_ZOMBIES, "Richard");
  for(int i = 0; i < NB_ZOMBIES; i++)  
  array_of_zombies[i].announce();
  delete [] array_of_zombies;
  return (0);
}
