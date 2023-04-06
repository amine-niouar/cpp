/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 03:52:39 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/06 03:14:28 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
int main( void )
{
    Fixed a;

    Fixed const b( Fixed( 42.42f ) * Fixed( 1234.4321f ) );

    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << 42.4219f * 1234.43f << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}


