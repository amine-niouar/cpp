/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:13:23 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/14 00:59:53 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


// void f()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     const WrongAnimal *d = new WrongCat();


//     std::cout << "Type : " << j->getType() << " " << std::endl;
//     std::cout << "Type : " << i->getType() << " " << std::endl;
//      std::cout << "Type : " << d->getType() << " " << std::endl;

   
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();

//     d->makeSound();
    

//     delete meta;
//     delete j;
//     delete i;
//     delete d;
// }


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
    

    delete meta;
    delete j;
    delete i;
    delete d;


    // f();
    // while (1);    
    return 0;
}
