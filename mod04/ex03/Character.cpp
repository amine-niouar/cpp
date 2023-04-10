/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:31:31 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/10 03:06:36 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() 
{
    index = 0;
}

Character::Character(std::string n)
{
     for(int i = 0; i < 4; i++)
        slots[i] = NULL;
    index = 0;
    name = n;
}
    
Character::Character(Character &c)
{
    int x(-1);
    
    name = c.name;
    index = c.index;
    while(++x < c.index)
    {
        if(slots[x])
            slots[x] = c.slots[x]->clone();
    }
       
}

Character& Character::operator=(Character &c)
{
    if(this != &c)
    {
        int x(-1);
    
        name = c.name;
        index = c.index;
        while(++x < c.index)
        {
            if(slots[x])
                delete slots[x];
            slots[x] = c.slots[x]->clone();
                
        }
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    if(m)
    {
         slots[index] = m;
        index++;
    }
   
}

void Character::unequip(int idx)
{
    if(idx < index)
    {
        slots[idx] = 0;
        while(idx < index)
        {
            if((idx + 1) < index)
            {
                slots[idx] = slots[idx + 1];
                slots[idx + 1] = 0;
            }
                
            idx++;
        }
        index--;
    }
}


AMateria* Character::getCopy(int idx) const
{
    if(idx < index)
    {
        if(slots[idx])
            return (slots[idx]);
    }
    return (0);
}

void Character::use(int idx, ICharacter& target)
{
    if(index > 0 && idx < index)
        slots[idx]->use(target);
}


Character::~Character()
{
  for(int i = 0; i < 4 && slots[i];i++)
        delete slots[i];  
}
