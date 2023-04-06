/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 02:45:42 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 14:19:39 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    
}

AMateria::AMateria(AMateria &am)
{
    type = am.type;
}

AMateria& AMateria::operator=(AMateria &am)
{
    if(this != &am)
        type = am.type;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}

AMateria::~AMateria()
{
    
}
