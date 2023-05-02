/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:05:00 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/02 23:55:23 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <random>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
   
   AForm *af;
   Bureaucrat b("user1",1);
   
   PresidentialPardonForm ppf("PresidentialPardon");
   RobotomyRequestForm rrf("RobotomyRequest");
   ShrubberyCreationForm scf("ShrubberyCreation");
   
   af = &ppf;

    b.signForm(*af);
   b.executeForm(*af);

   std::cout << "----------------" << std::endl;

   af = &rrf;
   b.signForm(*af);
   b.executeForm(*af);
   std::cout << "***********" << std::endl;
   b.executeForm(*af);
   std::cout << "***********" << std::endl;
   b.executeForm(*af);
   std::cout << "***********" << std::endl;
   b.executeForm(*af);
    

     std::cout << "----------------" << std::endl;
   af = &scf;
  
   b.signForm(*af);
   b.executeForm(*af);

    std::cout << "----------------" << std::endl;

  

   
}
