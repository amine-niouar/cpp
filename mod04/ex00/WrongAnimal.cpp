/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 06:07:03 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/05 06:19:46 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
        
}

WrongAnimal::WrongAnimal(WrongAnimal &wan)
{
    type = wan.type;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal &wan)
{
    if(this != &wan)
        this->type = wan.type;
    return *this;   
}

const std::string& WrongAnimal::getType(void) const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Silence Silence Silence " << std::endl;
}



WrongAnimal::~WrongAnimal()
{
    
}