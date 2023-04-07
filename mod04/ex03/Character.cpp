/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:31:31 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/07 03:17:08 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() 
{
    index = 0;
}

Character::Character(std::string n)
{
     index = 0;
    name = n;
}

Character::Character(Character &i)
{
    (void)i;
    //type = i.type;
}

std::string const & Character::getName() const
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
    //delete slots[idx];
    (void)idx;
}

void Character::use(int idx, ICharacter& target)
{
    if(index > 0)
        slots[idx]->use(target);
    
    //std::cout << "* heals   " << slots[idx]->getType() << " wounds"  << target.getName() << std::endl;
}

Character& Character::operator=(Character &i)
{
    (void)i;
    return (*this);
}


Character::~Character()
{
    
}
