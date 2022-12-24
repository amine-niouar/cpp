/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 22:58:04 by aniouar           #+#    #+#             */
/*   Updated: 2022/12/23 23:29:23 by aniouar          ###   ########.fr       */
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
    complains["debug"] = &Harl::debug;
    complains["info"] = &Harl::info;
    complains["warning"] = &Harl::warning;
    complains["error"] = &Harl::error;
}

void Harl::complain(std::string level)
{
   (this->*complains[level])();
}
