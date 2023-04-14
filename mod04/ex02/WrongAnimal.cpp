/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:49:54 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/11 23:59:09 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal is created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &a)
{
    type = a.type;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal &a)
{
    if(this != &a)
        type = a.type;
    std::cout << "WrongAnimal is copied " <<  std::endl;
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
    std::cout << "WrongAnimal gets destructed " << std::endl;
}
