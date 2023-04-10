/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:58:47 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/10 02:57:46 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    index = 0;
     for(int i = 0; i < 4; i++)
        slots[i] = NULL;
   
}


MateriaSource::MateriaSource(MateriaSource &m)
{
    int x(-1);

     for(int i = 0; i < 4; i++)
        slots[i] = NULL;
    
    index = m.index;
    while(++x < m.index)
            slots[x] = m.slots[x]->clone();
       
}

MateriaSource& MateriaSource::operator=(MateriaSource &m)
{
    if(this != &m)
    {
        int x(-1);
    
        index = m.index;
        while(++x < m.index)
        {
            if(slots[x])
                delete slots[x];
            slots[x] = m.slots[x]->clone();
        }
    }
    return (*this);
}



void MateriaSource::learnMateria(AMateria* am)
{
    if(index < 4)
    {
        slots[index] = am;
        index++;
    }
   
}
AMateria* MateriaSource::createMateria(std::string const& r)
{
     int i;

     i = index;
     while(--i >= 0)
     {
        if(slots[i]->getType() == r)
            return (slots[i]->clone());
     }
     return (0);
}

MateriaSource::~MateriaSource()
{
     for(int i = 0; i < 4 && slots[i];i++)
        delete slots[i];  
}