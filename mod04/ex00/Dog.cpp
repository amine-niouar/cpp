/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 04:19:01 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/05 04:31:35 by aniouar          ###   ########.fr       */
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

void Dog::makeSound()
{
    std::cout << "Barking Barking Barking " << std::endl;
}

Dog::~Animal()
{
    
}