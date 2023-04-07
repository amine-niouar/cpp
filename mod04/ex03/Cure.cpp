/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:17:11 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/07 03:16:24 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure::Cure() : AMateria()
{
    type = "cure";
}

Cure::Cure(Cure &i) : AMateria(i)
{
    type = i.type;
}


Cure& Cure::operator=(Cure &i)
{
    if(this != &i)
        type = i.type;
    return (*this);
}

AMateria* Cure::clone() const
{
    AMateria* am;

    am = new Cure();

    return am;
}

void Cure::use(ICharacter &target)
{
    //* heals <name>’s wounds *
    std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
    //(void)target;
}

Cure::~Cure()
{
    
}
