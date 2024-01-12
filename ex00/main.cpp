#include "./Class/Zombie/Zombie.hpp"

int main(void)
{
  Zombie *zombie = newZombie("Richard");
  zombie->announce();
  randomChump("Salah");
  delete zombie;
  return (0);
}
