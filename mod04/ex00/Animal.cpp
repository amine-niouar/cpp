/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 04:12:51 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/05 04:40:05 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
        
}

Animal::Animal(Animal &an)
{
    type = an.type;
}

Animal& Animal::operator=(Animal &an)
{
    if(this != &an)
        this->type = an.type;
    return *this;   
}

const std::string& Animal::getType(void) const
{
    return type;
}

void Animal::makeSound()
{
    std::cout << "Silence Silence Silence " << std::endl;
}



Animal::~Animal()
{
    
}