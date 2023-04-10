/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 02:45:42 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/10 03:01:14 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}



std::string const & AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter &target)
{
    std::cout << target.getName() << std::endl;
}

AMateria::~AMateria()
{
    
}
