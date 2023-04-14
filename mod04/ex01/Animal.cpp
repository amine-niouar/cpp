/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:31:46 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/11 23:24:43 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
     std::cout << "Animal is created" << std::endl;
}

Animal::Animal(Animal &a)
{
    type = a.type;
     std::cout << "Animal is copied " <<  std::endl;
}

Animal& Animal::operator=(Animal &a)
{
    if(this != &a)
        type = a.type;
    std::cout << "Animal gets assigned " << std::endl;
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
    std::cout << "Animal " << type << " is destructed" << std::endl;
}