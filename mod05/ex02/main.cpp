/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:05:00 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/08 19:11:43 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
//#include <random>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define GREEN "\033[1;32m"
#define RESET "\033[0m"

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
        Bureaucrat walker("walker",1);
       
        AForm* rrf;

        
        rrf = new ShrubberyCreationForm("Tree");
        if(rrf)
        {
            line();
             walker.signForm(*rrf);
            rrf->execute(walker);
            // b.executeForm(*rrf);

            // std::cout << "checking if it got the same grade " << rrf->getGradeS() << std::endl;    
        }
        line();
        delete rrf;
            
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
        Bureaucrat silva("silva",1);
       
        AForm* rrf;

        
        rrf = new RobotomyRequestForm("Roboto");
        if(rrf)
        {
            line();
             silva.signForm(*rrf);
            rrf->execute(silva);
            // b.executeForm(*rrf);

            // std::cout << "checking if it got the same grade " << rrf->getGradeS() << std::endl;    
        }
        line();
        delete rrf;
            
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
        Bureaucrat walker("walker",1);
       
        AForm* rrf;

        
        rrf = new PresidentialPardonForm("Pardon");
        if(rrf)
        {
            line();
             walker.signForm(*rrf);
            rrf->execute(walker);
            // b.executeForm(*rrf);

            // std::cout << "checking if it got the same grade " << rrf->getGradeS() << std::endl;    
        }
        line();
        delete rrf;
            
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
       
        AForm* rrf;

        
        rrf = new PresidentialPardonForm("Pardon");
        if(rrf)
        {
            line();
            walker.signForm(*rrf);
            walker.executeForm(*rrf);
            //rrf->execute(walker);
            // b.executeForm(*rrf);

            // std::cout << "checking if it got the same grade " << rrf->getGradeS() << std::endl;    
        }
        line();
        delete rrf;
            
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

     try
    {
       line();
        Bureaucrat silva("silva",150);
       
        AForm* rrf;

        
        rrf = new PresidentialPardonForm("Pardon");
        if(rrf)
        {
            line();
            //walker.signForm(*rrf);
            silva.executeForm(*rrf);
            //rrf->execute(walker);
            // b.executeForm(*rrf);

            // std::cout << "checking if it got the same grade " << rrf->getGradeS() << std::endl;    
        }
        line();
        delete rrf;
            
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}


int main(void)
{
   
   // test1 ShrubberyCreation
    test1();

    // test2 RobotomyRequest
    test2();

    // test3 PresidentialPardon
    test3();

    // test4 ExecuteForm

    test4();

    while(1);
}
