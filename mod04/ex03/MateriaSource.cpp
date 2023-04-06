/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:58:47 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 18:11:34 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    slots[0] = 0;
    index = 0;
}
void MateriaSource::learnMateria(AMateria* am)
{
    (void)am;
}
AMateria* MateriaSource::createMateria(std::string const& r)
{
    AMateria* am;

    am = 0;
    if(r == "ice")
        am = new Ice();
    if(r == "cure")
        am = new Cure();
    return (am);
}

MateriaSource::~MateriaSource()
{

}