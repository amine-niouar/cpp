/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:31:31 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/08 02:24:43 by aniouar          ###   ########.fr       */
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
    int x(-1);
    
    name = i.name;
    index = i.index;
    while(++x < i.index)
        slots[x] = i.slots[x];
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
    int keepIndex;
    int i;
    

    
    if(idx < index)
    {
        i = 0;
        keepIndex = index - 1;
        // delete slots[idx];
        slots[idx] = nullptr;
        while(idx < keepIndex)
        {
                slots[idx] = slots[idx + 1];
                slots[idx + 1] = 0;
                std::cout << slots[idx]->getType() << std::endl;
            i++;
            idx++;
        }
        index--;
        std::cout << "after" << std::endl;
        i = 0;
        while(i < index)
        {
            std::cout << slots[i]->getType() << " ";
            i++;
        }
        std::cout << std::endl;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if(index > 0 && idx < index)
        slots[idx]->use(target);
}

Character& Character::operator=(Character &i)
{
    int x(-1);
    if(this != &i)
    {
        name = i.name;
        index = i.index;
        while(++x < i.index)
             slots[x] = i.slots[x];
    }
    return (*this);
}


Character::~Character()
{
    
}
