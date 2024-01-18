/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:49:12 by joakoeni          #+#    #+#             */
/*   Updated: 2024/01/18 10:49:13 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
