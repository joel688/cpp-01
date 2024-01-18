/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:46:59 by joakoeni          #+#    #+#             */
/*   Updated: 2024/01/18 10:47:00 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class/Zombie/Zombie.hpp"

void  randomChump(std::string name)
{
  Zombie zombie(name);
  zombie.announce();
}
