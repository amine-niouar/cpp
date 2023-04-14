/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:41:30 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/14 01:13:58 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    b = new Brain();
    type = "dog";
    std::cout << "Dog is created" << std::endl;
}

Dog::Dog(Dog &d) : Animal(d)
{
    b = new Brain();
    *b = *(d.b);
    std::cout << "Dog is copied " <<  std::endl;
}

Dog& Dog::operator=(Dog &d)
{
    if(this != &d)
    {
        if(b)
            delete b;
        b = new Brain();
        *b = *(d.b);
        Animal::operator=(d);
    }
    std::cout << "Dog gets assigned " << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Barking Barking Barking ...." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog " << type << " is destructed" << std::endl;
    delete b;
}