/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:41:30 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/10 03:13:30 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "dog";
    std::cout << "Dog is created" << std::endl;
    
}

Dog::Dog(Dog &d) : Animal(d)
{
     std::cout << "Dog is copied " <<  std::endl;

}

Dog& Dog::operator=(Dog &d)
{
    if(this != &d)
        Animal::operator=(d);
    std::cout << "Dog gets assigned " << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Barking Barking Barking ...." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog gets destructed " << std::endl;
}