/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:05:00 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/03 18:34:00 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include "Intern.hpp"

int main(void)
{
   
    Bureaucrat b("user1",1);
    Intern someRandomIntern;
AForm* rrf;
rrf = someRandomIntern.makeForm("ShrubberyCreation", "Bender");

 std::cout << "----------------" << std::endl;
b.signForm(*rrf);
b.executeForm(*rrf);

std::cout << "checking if it got the same grade " << rrf->getGradeS() << std::endl;


 std::cout << "----------------" << std::endl;



//while (1);


   
}
