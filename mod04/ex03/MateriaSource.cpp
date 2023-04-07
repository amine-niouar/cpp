/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:58:47 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/07 03:10:44 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    
    index = 0;
    slots[index] = 0;
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
    AMateria* am;
    int i(-1);
    
    am = 0;
    
    while(++i < index)
    {
          if(slots[i]->getType() == r)
            {
                  am = slots[i];
                  return (am);
            }
    }
        

    return (0);
}

MateriaSource::~MateriaSource()
{

}