/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:21:41 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 01:33:32 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AnimalA()
{
    b = new Brain();
    type = "cat";
    std::cout << "AnimalA " << type << " is created" << std::endl;
}

Cat::Cat(Cat &c) : AnimalA(c)
{
    *b = *(c.b);
}

Cat& Cat::operator=(Cat &c)
{
    if(this != &c)
        AnimalA::operator=(c);
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