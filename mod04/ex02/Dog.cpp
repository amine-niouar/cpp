/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:41:30 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/14 01:35:04 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AnimalA()
{
    b = new Brain();
    type = "dog";
     std::cout << "Dog is created" << std::endl;
}

Dog::Dog(Dog &d) : AnimalA(d)
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
        AnimalA::operator=(d);
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
    std::cout << "Dog gets destructed " << std::endl;
    delete b;
}