/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 02:13:40 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/11 23:56:50 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain() 
{
    std::cout << "Brain is created" << std::endl;
}

Brain::Brain(Brain &b) 
{
    int i(-1);
    while(++i < 100)
        ideas[i] = b.ideas[i];

    std::cout << "Brain is created " <<  std::endl;
}

Brain& Brain::operator=(Brain &b)
{
    int i(-1);
    if(this != &b)
    {
        while(++i < 100)
            ideas[i] = b.ideas[i];
        std::cout << "Brain gets assigned " << std::endl;
    }
    return *this;
}


Brain::~Brain()
{
     std::cout << "Brain gets destructed " << std::endl;
}