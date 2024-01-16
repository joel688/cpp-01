#include "Harl.hpp"

void  Harl::debug(void)
{
  std::cout << DEBUG << std::endl;
  return ;
}

void  Harl::info(void)
{
  std::cout << INFO << std::endl;
  return ;
}

void  Harl::warning(void)
{
  std::cout << WARNING << std::endl;
  return ;
}

void  Harl::error(void)
{
  std::cout << ERROR << std::endl;
  return ;
}

void  Harl::complain(std::string level)
{
  void (Harl::*complaints[LEVEL_COUNT])(void) =
  {
    &Harl::debug,
    &Harl::info,
    &Harl::warning,
    &Harl::error
  };
  std::string levels[LEVEL_COUNT] =
  {
    "DEBUG",
    "INFO",
    "WARNING",
    "ERROR"
  };
  for (int i = 0; i < LEVEL_COUNT; i++)
  {
    if (levels[i] == level)
      (this->*complaints[i])();
  }
  return ;
}
