/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:49:34 by joakoeni          #+#    #+#             */
/*   Updated: 2024/01/18 10:49:35 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main()
{
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  std::cout << "Address of string variable: " << &str << std::endl;
  std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
  std::cout << "Address held by stringREF: " << &stringREF << std::endl;
  std::cout << "Value of string variable: " << str << std::endl;
  std::cout << "Value held by stringPTR: " << *stringPTR << std::endl;
  std::cout << "Value held by stringREF: " << stringREF << std::endl;
  return(0);
}
