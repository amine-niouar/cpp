/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:13:23 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/14 01:32:40 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

// void f()
// {
//      const Animal* j = new Dog();
//     const Animal* i = new Cat();


//     Animal* nat_geo[10];
    
//     int x(-1);

//     while(++x < 5)
//         nat_geo[x] = new Dog();

//     x = 4;
//     while(++x < 10)
//         nat_geo[x] = new Cat();
    

//     std::cout << "------------------------------" << std::endl;
//     x = -1;
//     while(++x < 10)
//         delete nat_geo[x];

//     std::cout << "------------------------------" << std::endl;


   
    
//     delete j;
//     delete i;
// }

    
int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    

    Animal* nat_geo[10];
    
    int x(-1);

    while(++x < 5)
        nat_geo[x] = new Dog();

    x = 4;
    while(++x < 10)
        nat_geo[x] = new Cat();
    

    std::cout << "------------------------------" << std::endl;
    x = -1;
    while(++x < 10)
        delete nat_geo[x];

     std::cout << "------------------------------" << std::endl;


   
    
    delete j;
    delete i;
    // f();
    // while(1);
    return 0;
}

