/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 04:28:53 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/05 04:30:17 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include "Animal.hpp"


class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat &c);
        Cat& operator=(Cat &c);
        ~Cat();
        void makeSound();
};


#endif