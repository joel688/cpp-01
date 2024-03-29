/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:51:47 by joakoeni          #+#    #+#             */
/*   Updated: 2024/01/18 10:51:49 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#define LEVEL_COUNT  4
#define DEBUG         "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
#define INFO          "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNING       "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define ERROR         "This is unacceptable! I want to speak to the manager now."

#include <string>
#include <iostream>

class Harl
{
  private:
    void  debug(void);
    void  info(void);
    void  warning(void);
    void  error(void);
  public:
    void  complain(std::string level);
};

#endif
