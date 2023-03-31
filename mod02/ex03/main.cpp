/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 03:52:39 by aniouar           #+#    #+#             */
/*   Updated: 2023/03/26 01:42:04 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
int main( void ) {
    //0, 0, 20, 0, 10, 30, 10, 15

    Fixed const x1(0),y1(0);
    Fixed const x2(20),y2(0);
     Fixed const x3(10),y3(30);
      Fixed const x4(1),y4(2);
    Point const a(x1,y1),b(x2,y2),c(x3,y3),d(x4,y4);



    if(bsp(a,b,c,d))
        std::cout << "Point is  belonging to  triangle" << std::endl;
    else
        std::cout <<  "Point is not belonging to  triangle" << std::endl;
        
return 0;
}


