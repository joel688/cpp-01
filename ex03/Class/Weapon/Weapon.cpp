/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:50:46 by joakoeni          #+#    #+#             */
/*   Updated: 2024/01/18 10:50:47 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// ----------Constructor----------

Weapon::Weapon(const std::string& type)
{
  this->type = type;
  return ;
}

// ----------Destructors----------

Weapon::~Weapon(void)
{
  std::cout << this->getType() << " Weapon destroyed" << std::endl;
  return;
}

// ----------Setters----------

void  Weapon::setType(const std::string& type)
{
  this->type = type;
  return ;
}

// ----------Getters----------

const std::string& Weapon::getType(void)
{
  return (this->type);
}

// ----------Members Functions----------
