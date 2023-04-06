/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:21:41 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 14:09:35 by aniouar          ###   ########.fr       */
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
    std::cout << "Meow Meow Meow ...." << std::endl;
}

Cat::~Cat()
{
    
}