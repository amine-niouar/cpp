/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:36:08 by aniouar           #+#    #+#             */
/*   Updated: 2022/12/22 21:46:11 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB( std::string n)
{   
    name = n;
}

HumanB::~HumanB()
{
    
}

 void HumanB::setWeapon(Weapon wpp)
 {
     wp = &wpp;
 }

void HumanB::attack()
{
    std::cout << name << " attacks with their " << *(wp->getType()) 
         << std::endl;
}