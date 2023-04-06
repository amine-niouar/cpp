/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:21:41 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 14:38:54 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    b = new Brain();
    type = "cat";
}

Cat::Cat(Cat &c) : Animal(c)
{
    b = new Brain();
    *b = *(c.b);
}

Cat& Cat::operator=(Cat &c)
{
    if(this != &c)
    {
        *b = *(c.b);
        Animal::operator=(c);
    }
        
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow Meow ...." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat " << type << " is destructed" << std::endl;
    delete b;
}