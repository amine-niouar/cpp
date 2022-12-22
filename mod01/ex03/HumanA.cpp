/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:24:18 by aniouar           #+#    #+#             */
/*   Updated: 2022/12/21 20:33:02 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string n,Weapon* wpp)
{
    wp = wpp;
    name = n;
}



void HumanA::attack()
{
    std::cout << "<" << name << "> attacks with their " << "<" << wp->getType() 
        << ">" << std::endl;
}

HumanA::~HumanA()
{
    
}