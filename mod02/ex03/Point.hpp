/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 03:44:28 by aniouar           #+#    #+#             */
/*   Updated: 2023/03/13 04:39:12 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(Point const &p);
        Point(const Fixed p1,const Fixed p2);
       
        Point & operator = (const Point &p);
        const Fixed getX() const;
        const Fixed getY() const;
        ~Point();
        
};



bool bsp( Point const a, Point const b, Point const c, Point const point);