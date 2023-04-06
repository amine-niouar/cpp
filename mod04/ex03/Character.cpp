/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:31:31 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 15:52:19 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() 
{
    
}

Character::Character(Character &i)
{
    //type = i.type;
}

std::string const & Character::getName()
{
    return name;
}

void Character::equip(AMateria* m)
{
    slots[index] = m;
    index++;
}

void Character::unequip(int idx)
{
    // add more code
    delete slots[idx];
}

void Character::use(int idx, ICharacter& target)
{
    (void)idx;
    (void)target;
}

Character& Character::operator=(Character &i)
{
    (void)i;
    return (*this);
}


Character::~Character()
{
    
}
