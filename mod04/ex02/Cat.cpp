/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:21:41 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/14 01:34:49 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AnimalA()
{
    b = new Brain();
    type = "cat";
     std::cout << "Cat is created" << std::endl;
}

Cat::Cat(Cat &c) : AnimalA(c)
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
        AnimalA::operator=(c);
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
    std::cout << type << " is destructed" << std::endl;
    delete b;
}