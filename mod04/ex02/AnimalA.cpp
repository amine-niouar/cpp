/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:31:46 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 01:26:41 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalA.hpp"

AnimalA::AnimalA()
{
      std::cout << "AnimalA is created" << std::endl;
}

AnimalA::AnimalA(AnimalA &a)
{
    type = a.type;
}

AnimalA& AnimalA::operator=(AnimalA &a)
{
    if(this != &a)
        type = a.type;
    return *this;
}

const std::string& AnimalA::getType(void) const
{
    return type;
}



AnimalA::~AnimalA()
{
    std::cout << "AnimalA " << type << " is destructed" << std::endl;
}