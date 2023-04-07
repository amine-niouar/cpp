/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:21:39 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/07 03:15:36 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
    type = "ice";
}

Ice::Ice(Ice &i) : AMateria(i)
{
    type = i.type;
}


Ice& Ice::operator=(Ice &i)
{
    if(this != &i)
        type = i.type;
    return (*this);
}

AMateria* Ice::clone() const
{
    AMateria* am;

    am = new Ice();

    return am;
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
    //(void)target;
}

Ice::~Ice()
{
    
}
