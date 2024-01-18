/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:50:50 by joakoeni          #+#    #+#             */
/*   Updated: 2024/01/18 10:50:51 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
  private:
    std::string type;

  public:
    Weapon(const std::string& type);
    ~Weapon(void);
    const std::string&     getType(void);
    void            setType(const std::string& type);
};

#endif
