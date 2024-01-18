/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:50:35 by joakoeni          #+#    #+#             */
/*   Updated: 2024/01/18 10:50:36 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// ----------Constructor----------

HumanB::HumanB(const std::string& name)
{
  this->SetName(name);
  return ;
}

// ----------Destructors----------

HumanB::~HumanB()
{
  std::cout << this->GetName() << " the HumanB destroyed" << std::endl;
  return ;
}

// ----------Setters----------

void  HumanB::SetName(const std::string& name)
{
  this->name = name;
  return ;
}

void  HumanB::setWeapon(Weapon& weapon)
{
  this->weapon = &weapon;
}

// ----------Getters----------

const std::string& HumanB::GetName(void)
{
  return(this->name);
}

// ----------Members Functions----------

void  HumanB::attack()
{
  std::cout << this->GetName() << " attack with their " << this->weapon->getType() << std::endl;
}
