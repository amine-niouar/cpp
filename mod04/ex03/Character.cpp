/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:31:31 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/14 03:01:19 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() 
{
    for(int i = 0; i < 4; i++)
        slots[i] = NULL;
    index = 0;
    std::cout << "Character is created" << std::endl;
}

Character::Character(std::string n)
{
     for(int i = 0; i < 4; i++)
        slots[i] = NULL;
    index = 0;
    name = n;
     std::cout << "Character is created" << std::endl;
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
     std::cout << "Character is copied " <<  std::endl;   
}

Character& Character::operator=(Character &c)
{
    if(this != &c)
    {
        int x(-1);
        std::cout  << "debuging ... " << c.index << std::endl;   
        name = c.name;
        index = c.index;
        while(++x < c.index)
        {
            if(slots[x])
                delete slots[x];
            slots[x] = c.slots[x]->clone();
            
        }
        
    }
     std::cout << "Character gets assigned " << std::endl;
    return (*this);
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    if(m)
        std::cout << "another cheking for equip with name of " << name << " " << index << std::endl;
    if(m && index < 4)
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
    std::cout << index << std::endl;
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
    std::cout << "Character gets destructed " << std::endl;
}
