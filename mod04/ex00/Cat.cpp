/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 04:30:35 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/05 04:42:22 by aniouar          ###   ########.fr       */
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

void Cat::makeSound()
{
    std::cout << "Meo Meo Meo " << std::endl;
}

Cat::~Animal()
{
    
}