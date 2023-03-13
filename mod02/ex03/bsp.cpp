/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 04:17:12 by aniouar           #+#    #+#             */
/*   Updated: 2023/03/13 04:46:37 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int calculate_area(Point const a, Point const b, Point const c)
{
    int res;

    
    int x1 = a.getX().toInt();
    int x2 = b.getX().toInt();
    int x3 = c.getX().toInt();

    int y1 = a.getX().toInt();
    int y2 = b.getX().toInt();
    int y3 = c.getX().toInt();

    res = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2;
    return res;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    int area1,area2,area3,area4;

    area1 = calculate_area(a,b,c);
    area2 = calculate_area(point,b,c);
     area3 = calculate_area(a,point,c);
     area4 = calculate_area(a,b,point);

    std::cout << area1 << " "  << area2 << " "  << area3 << " "  << area4 << " " << std::endl;
     return (area1 = area2 + area3 + area4);
}