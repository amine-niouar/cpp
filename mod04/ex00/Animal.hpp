/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 04:11:38 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/05 06:02:30 by aniouar          ###   ########.fr       */
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
        Animal();
        Animal(Animal &an);
        Animal& operator=(Animal &an);
        const std::string& getType(void)const;
        virtual void makeSound() const;
        ~Animal();
      
};

#endif