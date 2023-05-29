/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:21 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/29 19:36:18 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
 #include <algorithm>
#include "Span.hpp"

# define GREEN "\033[1;32m"
# define RESET "\033[0m"

void line()
{
     std::cout << "--------------------------------" << std::endl;
}

void test1()
{
    std::cout << GREEN<< "Test1 ..." << RESET <<  std::endl;

    Span sp = Span(10);
    srand(time(0));
    int i(-1);
    
    while(++i < 10)
        sp.addNumber(rand());
    sp.show();
}

void test2()
{
    std::cout << GREEN<< "Test2 ..." << RESET <<  std::endl;

    Span sp = Span(10);
    int factor(5);
    int i(-1);
    
    while(++i < 10)
    {
        sp.addNumber(factor);
        factor += 5;
    }
    
    sp.show();
    std::cout << "short " << sp.shortestSpan() << std::endl;
    std::cout << "longest  " << sp.longestSpan() << std::endl;    
}

void test3()
{
     std::cout << GREEN<< "Test3 ..." << RESET <<  std::endl;
     Span sp = Span(10);
    std::vector<int> tmp;
     
    int factor(5);
    int i(-1);
    
    while(++i < 5)
    {
        sp.addNumber(factor);
        factor += 5;
    }
    sp.show();
    factor = 30;
    while(i < 10)
    {
        tmp.push_back(factor);
        factor += 10;
        i++;
    }

    sp.addRange(tmp.begin(),tmp.end());
    sp.show();
}

void test4()
{
    std::cout << GREEN<< "Test4 ..." << RESET <<  std::endl;

    try
    {
          Span sp = Span(10);
          srand(time(0));
          int i(-1);
    
          while(++i < 20)
             sp.addNumber(rand());
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

  
}

int main( void ) {

    
    test1();
    test2();
    test3();
    test4();
    return 0;

}