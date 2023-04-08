/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:58:47 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/08 01:35:50 by aniouar          ###   ########.fr       */
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
    
   
    if(r == "ice")
        am = new Ice();
    if(r == "cure")
        am = new Cure();    

    return (am);
}

MateriaSource::~MateriaSource()
{

}