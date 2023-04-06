/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 02:13:40 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/04 02:42:43 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain() 
{
    
}

Brain::Brain(Brain &b) 
{
    int i(-1);
    while(++i < 100)
        ideas[i] = b.ideas[i];

    
}

Brain& Brain::operator=(Brain &b)
{
    int i(-1);
    if(this != &b)
    {
        while(++i < 100)
            ideas[i] = b.ideas[i];
    }
    return *this;
}


Brain::~Brain()
{
    
}