/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:47:05 by joakoeni          #+#    #+#             */
/*   Updated: 2024/01/18 10:47:06 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class/Zombie/Zombie.hpp"

Zombie* newZombie(std::string name)
{
  Zombie *zombie = new Zombie(name);
  return (zombie);
}
