/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/24 20:13:44 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define GREEN "\033[1;32m"
#define RESET "\033[0m"

void line()
{
     std::cout << "--------------------------------" << std::endl;
}

void test1()
{
    std::cout << GREEN<< "Test1 ..." << RESET <<  std::endl;
    Array<int> a(10);
}


int main( void ) {
    
    
    test1();
    

    return 0;

}