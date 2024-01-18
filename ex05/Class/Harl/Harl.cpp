/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:51:38 by joakoeni          #+#    #+#             */
/*   Updated: 2024/01/18 10:51:40 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
