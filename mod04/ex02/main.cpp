/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:13:23 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 01:33:11 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"


    
int main()
{
    const Dog* j = new Dog();
    const Cat* i = new Cat();

    //AnimalA c;
    
    delete j;
    delete i;
    
    while(1);
    return 0;
}

