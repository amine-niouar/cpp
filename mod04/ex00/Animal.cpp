/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:31:46 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 14:09:01 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    
}

Animal::Animal(Animal &a)
{
    type = a.type;
}

Animal& Animal::operator=(Animal &a)
{
    if(this != &a)
        type = a.type;
    return *this;
}

const std::string& Animal::getType(void) const
{
    return type;
}

 void Animal::makeSound() const
{
    std::cout << "Nature Nature Nature ... " << std::endl;
}

Animal::~Animal()
{
    
}