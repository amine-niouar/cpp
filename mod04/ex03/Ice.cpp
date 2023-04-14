/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:21:39 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/12 00:13:05 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice is created" << std::endl;
}

Ice::Ice(Ice &i) 
{
    type = i.type;
    std::cout << "Ice is copied " <<  std::endl;
}


Ice& Ice::operator=(Ice &i)
{
    if(this != &i)
        type = i.type;
     std::cout << "Ice gets assigned " << std::endl;
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
}

Ice::~Ice()
{
    std::cout << "Ice gets destructed " << std::endl;
}
