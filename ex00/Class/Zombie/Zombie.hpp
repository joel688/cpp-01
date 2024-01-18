/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:47:52 by joakoeni          #+#    #+#             */
/*   Updated: 2024/01/18 10:47:59 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define ANNOUCEMENT "BraiiiiiiinnnzzzZ"

#include <iostream>
#include <string>

class Zombie
{
  private:
    std::string name;

  public:
                          Zombie(std::string name);
                          ~Zombie();
    void                  announce(void);
};

Zombie*               newZombie(std::string name);
void                  randomChump(std::string name);

#endif
