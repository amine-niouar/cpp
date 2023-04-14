/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:21:41 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/14 01:13:06 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    b = new Brain();
    type = "cat";
     std::cout << "Cat is created" << std::endl;
}

Cat::Cat(Cat &c) : Animal(c)
{
    
    b = new Brain();
    *b = *(c.b);
    std::cout << "Cat is copied " <<  std::endl;
}

Cat& Cat::operator=(Cat &c)
{
    if(this != &c)
    {
        if(b)
            delete b;
        b = new Brain();
        *b = *(c.b);
        Animal::operator=(c);
    }
    std::cout << "Cat gets assigned " << std::endl;    
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