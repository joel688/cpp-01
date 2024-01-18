/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:46:53 by joakoeni          #+#    #+#             */
/*   Updated: 2024/01/18 10:46:55 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/Zombie/Zombie.hpp"

int main(void)
{
  Zombie *zombie = newZombie("Richard");
  zombie->announce();
  randomChump("Salah");
  delete zombie;
  return (0);
}
