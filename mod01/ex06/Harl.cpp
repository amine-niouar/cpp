/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 22:58:04 by aniouar           #+#    #+#             */
/*   Updated: 2023/02/26 10:32:45 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"



Harl::Harl()
{
    keys[0] = "Debug";
    keys[1] = "Info";
    keys[2] = "Warning";
    keys[3] = "Error";
    complains[0] = &Harl::debug;
    complains[1] = &Harl::info;
    complains[2] = &Harl::warning;
    complains[3] = &Harl::error;
}

void Harl::debug(void)
{
    std::cout << "[" << keys[0] << "]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[" << keys[1] << "]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[" << keys[2] << "]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "[" << keys[3] << "]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}



void Harl::complain(std::string level)
{
   int i;
   int found;
   int pos;
   
   pos = -1; 
   found = 0;
   i = -1;
   while(++i < 4)
   {
       if(level == keys[i])
       {
            pos = i;
            break;
       }
           
   }
         switch(pos)
        {
            case 0:
                debug();
            case 1:
                info();
            case 2:
                warning();
            case 3:
                error();
                break;
            default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        }
}

