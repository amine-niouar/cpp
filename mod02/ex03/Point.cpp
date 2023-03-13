/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 03:47:06 by aniouar           #+#    #+#             */
/*   Updated: 2023/03/13 04:39:00 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0) , y(0)
{
    
}

Point::Point(const Fixed p1,const Fixed p2) : x(p1) , y(p2)
{
    
}

Point::Point(Point const &p) : x(p.x) , y(p.y)
{
    
}

Point & Point::operator = (const Point &p)
{
    if(this != &p)
        ;
    return *this;
}

const Fixed Point::getX() const
{
    return (x);
}
const Fixed Point::getY() const
{
    return (y);
}


Point::~Point()
{
    
}

