/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:29:14 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 01:29:50 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __AnimalA_H__
#define __AnimalA_H__

#include <iostream>

class AnimalA
{
    protected:
        std::string type;
    public:
        virtual void makeSound() const = 0;
        AnimalA();
        AnimalA(AnimalA &a);
        const std::string& getType(void) const;
        AnimalA& operator=(AnimalA &a);
        ~AnimalA();  
};

#endif