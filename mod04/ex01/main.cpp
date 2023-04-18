/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:13:23 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/15 00:05:35 by aniouar          ###   ########.fr       */
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


void testing_deep_copy(Cat &c)
{
    Cat newc = c;
}

    
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
    Cat l;
    testing_deep_copy(l);
     std::cout << "------------------------------" << std::endl;
    

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

