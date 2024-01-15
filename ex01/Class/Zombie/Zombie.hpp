#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define ANNOUCEMENT "BraiiiiiiinnnzzzZ"
#define NB_ZOMBIES 3

#include <iostream>
#include <string>

class Zombie
{
  private:
    std::string name;

  public:
                          Zombie();
                          ~Zombie();
    void                  announce(void);
    void                  SetName(const std::string& name);
};

    Zombie*               zombieHorde(int N, std::string name);

#endif
