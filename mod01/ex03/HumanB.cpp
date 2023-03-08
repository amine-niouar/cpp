/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:36:08 by aniouar           #+#    #+#             */
/*   Updated: 2023/02/26 11:06:02 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"


HumanB::HumanB( std::string n)
{
    wp = 0;
    name = n;
}



 void HumanB::setWeapon(Weapon& wpp)
 {
     wp = &wpp;
 }

void HumanB::attack()
{
    if(wp)
    {
        std::cout << name << " attacks with their " << wp->getType()
              << std::endl;
    } 
 
}

HumanB::~HumanB()
{
    
}