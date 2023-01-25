/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 22:58:04 by aniouar           #+#    #+#             */
/*   Updated: 2023/01/23 16:20:45 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "debug" << std::endl;
}

void Harl::info(void)
{
    std::cout << "info" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "warning" << std::endl;
}

void Harl::error(void)
{
    std::cout << "error" << std::endl;
}

Harl::Harl()
{
    keys[0] = "debug";
    keys[1] = "info";
    keys[2] = "warning";
    keys[3] = "error";
    
    complains[0] = &Harl::debug;
    complains[1] = &Harl::info;
    complains[2] = &Harl::warning;
    complains[3] = &Harl::error;
}

void Harl::complain(std::string level)
{
   int i;
   int match;

   match = 0;
   i = -1;
   while(++i < 4)
   {
       if(level == keys[i])
       {
           match = 1;
           break;
       }
   }
   if(match)
        (this->*complains[i])();
    // print message if the level not exists
}
