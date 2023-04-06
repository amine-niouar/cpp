/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:41:30 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 14:09:43 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "dog";
}

Dog::Dog(Dog &d) : Animal(d)
{
    
}

Dog& Dog::operator=(Dog &d)
{
    if(this != &d)
        Animal::operator=(d);
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Barking Barking Barking ...." << std::endl;
}

Dog::~Dog()
{
    
}