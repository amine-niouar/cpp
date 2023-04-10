/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:21:41 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/10 03:14:58 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "cat";
    std::cout << "Cat is created" << std::endl;
}

Cat::Cat(Cat &c) : Animal(c)
{
    std::cout << "Cat is copied " <<  std::endl;
}

Cat& Cat::operator=(Cat &c)
{
    if(this != &c)
        Animal::operator=(c);
    std::cout << "Cat gets assigned " << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow Meow ...." << std::endl;
}

Cat::~Cat()
{
     std::cout << "Cat gets destructed " << std::endl;
}