/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:13:23 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/14 23:57:41 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

// void f()
// {
//      const AnimalA* j = new Dog();
//     const AnimalA* i = new Cat();
//       // Animal a; 
        
//         j->makeSound();
//     i->makeSound();

//     delete j;
//     delete i;
// }

    
int main()
{
    
     const AnimalA* j = new Dog();
    const AnimalA* i = new Cat();

    //Animal a;
    
    j->makeSound();
    i->makeSound();

    delete j;
    delete i;
    // f();
    // while(1);
    return 0;
}

