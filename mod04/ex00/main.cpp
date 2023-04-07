/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:13:23 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/07 01:42:03 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

    

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal *d = new WrongCat();

    std::cout << "Type : " << j->getType() << " " << std::endl;
    std::cout << "Type : " << i->getType() << " " << std::endl;
     std::cout << "Type : " << d->getType() << " " << std::endl;

   
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

     d->makeSound();
    return 0;
}
