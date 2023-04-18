/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:58:47 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/14 23:54:12 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    index = 0;
     for(int i = 0; i < 4; i++)
        slots[i] = NULL;
    std::cout << "MateriaSource is created" << std::endl;
}


MateriaSource::MateriaSource(MateriaSource &m)
{
    int x(-1);

     for(int i = 0; i < 4; i++)
        slots[i] = NULL;
    
    index = m.index;
    while(++x < m.index)
            slots[x] = m.slots[x]->clone();
    std::cout << "MateriaSource is copied" << std::endl;
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
     std::cout << "MateriaSource gets assigned " << std::endl;
    return (*this);
}



void MateriaSource::learnMateria(AMateria* am)
{
    if(am && index < 4)
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
     std::cout << "MateriaSource gets destructed " << std::endl;
     for(int i = 0; i < 4 && slots[i];i++)
        delete slots[i];
     
}