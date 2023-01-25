/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:13:17 by aniouar           #+#    #+#             */
/*   Updated: 2023/01/24 15:37:06 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon()
{
}

Weapon::Weapon(std::string t)
{
     type = t;
}

const std::string* Weapon::getType(void)
{
    return &type;
}

void Weapon::setType(std::string t)
{
   type = t;
}


Weapon::~Weapon()
{
    
}

