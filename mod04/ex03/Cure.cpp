/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:17:11 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/12 00:11:59 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure is created" << std::endl;
}

Cure::Cure(Cure &i) : AMateria(i.type)
{
    std::cout << "Cure is copied " <<  std::endl;
}


Cure& Cure::operator=(Cure &i)
{
    if(this != &i)
        type = i.type;
    std::cout << "Cure gets assigned " << std::endl;
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
    std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
}

Cure::~Cure()
{
     std::cout << "Cure gets destructed " << std::endl;
}
