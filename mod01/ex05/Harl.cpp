/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 22:58:04 by aniouar           #+#    #+#             */
/*   Updated: 2023/02/26 11:14:39 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-" <<
"ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put" <<
"enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for" <<
"years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
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
}
