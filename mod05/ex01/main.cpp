/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:10:45 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/13 09:50:37 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include "Form.hpp"

#define GREEN "\033[1;32m"
#define RESET "\033[0m"

void line()
{
     std::cout << "--------------------------------" << std::endl;
}

void test1()
{
    std::cout <<GREEN<< "Test1 ..." << RESET <<  std::endl;
    try
    {
       line();
       Form contract("contract",0,150);
       
       line();     
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
       line();
       Form contract("contract",1,151);
       
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
       Form contract("contract",1,120);
       std::cout << contract << std::endl;
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
       Form contract("contract",100,120);

       contract.beSigned(walker);

       std::cout << contract << std::endl;
       line();     
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
       line();
       Bureaucrat silva("walker",130);
       Form contract("contract",100,120);

       contract.beSigned(silva);

       std::cout << contract << std::endl;
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
       Bureaucrat walker("walker",2);
       Form contract("contract",100,120);

       walker.signForm(contract);

       std::cout << contract << std::endl;
       line();     
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
       line();
       Bureaucrat silva("walker",130);
       Form contract("contract",100,120);

       silva.signForm(contract);

       std::cout << contract << std::endl;
       line();     
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}




int main(void)
{

    // test1 fireup form exeception
    test1();

    // test2 create form and overload out
    test2();

    // test3 beSigned
    test3();

    // test4 signForm
    test4();


   
}
