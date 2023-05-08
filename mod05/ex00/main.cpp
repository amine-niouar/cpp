/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:47:57 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/08 16:56:27 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include "Bureaucrat.hpp"

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
       line();
        Bureaucrat walker("walker",0);
       

       line();     
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test2()
{
    line();
    std::cout <<GREEN<< "Test2 ..." << RESET <<  std::endl;
    try
    {
       line();
        Bureaucrat walker("walker",151);
       

       line();     
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test3()
{
    line();
    std::cout <<GREEN<< "Test3 ..." << RESET <<  std::endl;
    try
    {
       line();
        Bureaucrat walker("walker",2);
        Bureaucrat silva("silva",130);
        
        walker.incrementGrade();
        silva.decrementGrade();

        std::cout << walker  << '\n';
        std::cout << silva  << '\n';
        
        

       line();     
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test4()
{
     line();
    std::cout <<GREEN<< "Test4 ..." << RESET <<  std::endl;
    try
    {
       line();
        Bureaucrat walker("walker",1);
        
        walker.incrementGrade();
        
        

       line();     
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test5()
{
     line();
    std::cout <<GREEN<< "Test5 ..." << RESET <<  std::endl;
    try
    {
       line();
        Bureaucrat walker("walker",150);
        
        walker.decrementGrade();
        
        

       line();     
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}


int main(void)
{

    //test1 create bureaucrat with over high grade
    test1();
    
    //test2 create bureaucrat with lower high grade
    test2();

    //test3 increment/decrement bureaucrat
    test3();

    //test4 increment with over high grade
    test4();

     //test4 decrement with over high grade
    test5();
    
    
    


 
}
