/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:41:30 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 01:33:42 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AnimalA()
{
    b = new Brain();
    type = "dog";
    std::cout << "AnimalA " << type << " is created" << std::endl;
}

Dog::Dog(Dog &d) : AnimalA(d)
{
    b = new Brain();
    *b = *(d.b);
}

Dog& Dog::operator=(Dog &d)
{
    if(this != &d)
        AnimalA::operator=(d);
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Barking Barking Barking ...." << std::endl;
}

Dog::~Dog()
{
    std::cout  << type << " is destructed" << std::endl;
    delete b;
}