/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:47:22 by joakoeni          #+#    #+#             */
/*   Updated: 2024/01/18 10:47:23 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
