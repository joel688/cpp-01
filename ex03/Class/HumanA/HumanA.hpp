/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:50:29 by joakoeni          #+#    #+#             */
/*   Updated: 2024/01/18 10:50:29 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "../Weapon/Weapon.hpp"

class HumanA
{
  private:
    Weapon& weapon;
    std::string name;

  public:
    HumanA(const std::string& name, Weapon& weapon);
    ~HumanA(void);
    void  attack(void);
    const std::string&  GetName(void);
    void                SetName(const std::string&);
};

#endif
