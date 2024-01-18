/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:49:06 by joakoeni          #+#    #+#             */
/*   Updated: 2024/01/18 10:49:07 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class/Zombie/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
  Zombie *array_zombies = new Zombie[N];
  for(int i = 0; i < N; i++)
    array_zombies[i].SetName(name);
  return(array_zombies);
}
