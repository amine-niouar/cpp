/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 04:19:10 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/05 04:26:13 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include "Animal.hpp"


class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog &d);
        Dog& operator=(Dog &d);
        ~Dog();
        void makeSound();
};


#endif