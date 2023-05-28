/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/27 15:09:28 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

#define GREEN "\033[1;32m"
#define RESET "\033[0m"




void line()
{
     std::cout << "--------------------------------" << std::endl;
}



void print_y(int &a)
{
    std::cout << a << std::endl;
}

template<typename T>
void print_x(T const &x)
{
    std::cout << x << ",";
}

int main( void ) {
    
    int a[5] = { 10, 50, 30, 40, 20 };

    iter<int>(a,5,print_y);
    line();
    iter<int>(a,5,print_x);
    std::cout << '\n';
    return 0;

}