/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 06:07:12 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/05 06:18:54 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONG_ANIMAL_H__
#define __WRONG_ANIMAL_H__

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal &wan);
        WrongAnimal& operator=(WrongAnimal &wan);
        const std::string& getType(void)const;
         void makeSound() const;
        ~WrongAnimal();
      
};

#endif