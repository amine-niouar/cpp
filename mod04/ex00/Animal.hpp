/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:29:14 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/10 03:24:40 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        virtual void makeSound() const;
        Animal();
        Animal(Animal &a);
        const std::string& getType(void) const;
        Animal& operator=(Animal &a);
        virtual ~Animal();  
};

#endif