/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 04:30:35 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/05 06:06:12 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal()
{
    type = "cat";
}

Cat::Cat(Cat &c) : Animal(c)
{
    
}

Cat& Cat::operator=(Cat &c)
{
    if(this != &c)
        Animal::operator=(c);
    return *this;   
}

void Cat::makeSound() const
{
    std::cout << "Meo Meo Meo " << std::endl;
}

Cat::~Cat()
{
    
}