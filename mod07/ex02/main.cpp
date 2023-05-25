/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/25 10:27:04 by aniouar          ###   ########.fr       */
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
    try
    {
        Array<int> d;
        Array<int> a(4);
        a[0] = 1;
        a[1] = 3;
        a[2] = 3;
        a[3] = 7;
        Array <int> e(a);
        
        int i(-1);

        while(++i < e.size())
            std::cout << e[i] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
   
}

void test2()
{
    std::cout << GREEN<< "Test2 ..." << RESET <<  std::endl;
    try
    {
        const Array<int> a(4);
        a[0] = 1;
        a[1] = 3;
        a[2] = 3;
        a[3] = 7;
      
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
   
}


void test3()
{
    std::cout << GREEN<< "Test3 ..." << RESET <<  std::endl;
    try
    {
        const Array<int> a(4);
        a[0] = 1;
        a[1] = 3;
        a[2] = 3;
        a[3] = 7;

        std::cout << a[1337] << std::endl;
      
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
   
}


int main( void ) {
    
    
    test1();
    test2();
    test3();

    return 0;

}