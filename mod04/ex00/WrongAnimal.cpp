/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:49:54 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/04 01:00:10 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    
}

WrongAnimal::WrongAnimal(WrongAnimal &a)
{
    type = a.type;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal &a)
{
    if(this != &a)
        type = a.type;
    return *this;
}

const std::string& WrongAnimal::getType(void) const
{
    return type;
}

 void WrongAnimal::makeSound() const
{
    std::cout << "Nature Nature Nature ... " << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    
}
