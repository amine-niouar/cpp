/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 04:17:12 by aniouar           #+#    #+#             */
/*   Updated: 2023/03/26 01:35:51 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float calculate_area(Point const a, Point const b, Point const c)
{
    Fixed res;
    float fres;

    
    Fixed x1 = a.getX();
    Fixed x2 = b.getX();
    Fixed x3 = c.getX();

    Fixed y1 = a.getY();
    Fixed y2 = b.getY();
    Fixed y3 = c.getY();
    
    res = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    fres = abs(res.toFloat() / 2);
    return fres;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float area1,area2,area3,area4;

    area1 = calculate_area(a,b,c);
    area2 = calculate_area(point,b,c);
    area3 = calculate_area(a,point,c);
    area4 = calculate_area(a,b,point);
    
    return (area1 == area2 + area3 + area4);
}