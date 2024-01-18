/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:50:40 by joakoeni          #+#    #+#             */
/*   Updated: 2024/01/18 10:50:41 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "../Weapon/Weapon.hpp"

class HumanB
{
  private:
    std::string name;
    Weapon *weapon;

  public:
    HumanB(const std::string& name);
    ~HumanB(void);
    void  attack(void);
    const std::string&  GetName(void);
    void                SetName(const std::string&);
    void                setWeapon(Weapon& weapon);
};

#endif
