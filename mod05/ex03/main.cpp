/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:05:00 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/08 18:25:42 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"

#define GREEN "\033[1;32m"
#define RESET "\033[0m"

// constructors of concrete class 
// missing testing of canonical form in all class

void line()
{
     std::cout << "----------------" << std::endl;
}

void test1()
{
    std::cout <<GREEN<< "Test1 ..." << RESET <<  std::endl;
    try
    {
       line();
        Bureaucrat b("user1",1);
        Intern someRandomIntern;
        AForm* rrf;

        
        rrf = someRandomIntern.makeForm("ShrubberyCreation", "Bender");
        if(rrf)
        {
            line();
            b.signForm(*rrf);
            b.executeForm(*rrf);

            std::cout << "checking if it got the same grade " << rrf->getGradeS() << std::endl;    
        }

        


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
        Bureaucrat b("user1",1);
        Intern someRandomIntern;
        AForm* rrf;

        
        rrf = someRandomIntern.makeForm("RobotomyRequest", "roboto");
        if(rrf)
        {
            line();
            b.signForm(*rrf);
            b.executeForm(*rrf);

            

            std::cout << "checking if it got the same grade " << rrf->getGradeS() << std::endl;
        }

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
        Bureaucrat b("user1",1);
        Intern someRandomIntern;
        AForm* rrf;

        
        rrf = someRandomIntern.makeForm("PresidentialPardon", "contract");
        if(rrf)
        {
            line();
            b.signForm(*rrf);
            b.executeForm(*rrf);

            std::cout << "checking if it got the same grade " << rrf->getGradeS() << std::endl;
        }


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
    std::cout <<GREEN<< "Test3 ..." << RESET <<  std::endl;
    try
    {
       line();
        Bureaucrat b("user1",1);
        Intern someRandomIntern;
        AForm* rrf;

        
        rrf = someRandomIntern.makeForm("WhateverForm", "contract");
        
        if(rrf)
        {
            line();
            b.signForm(*rrf);
            b.executeForm(*rrf);

            std::cout << "checking if it got the same grade " << rrf->getGradeS() << std::endl;      
        }

      


       line();     
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main(void)
{
  
    // // test1 ShrubberyCreation
    // test1();

    // // test1 RobotoMyRequest
     test2();

    // // test3 PresidentialPardon
    // test3();

    // // test4 form not exist
    // test4();
  

  

    
   



//while (1);


   
}
