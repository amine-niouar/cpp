/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 09:13:23 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/02 16:31:33 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern()
{
    names[0] = "ShrubberyCreation";
    names[1] = "RobotomyRequest";
    names[2] = "PresidentialPardon";
    
    createForms[0] = &Intern::create_scf;
    createForms[1] = &Intern::create_rf;
    createForms[2] = &Intern::create_pf;

    std::cout << "Intern is created" << std::endl;
}

AForm* Intern::create_scf(std::string t)
{
    
    return (new ShrubberyCreationForm(t));
}

AForm* Intern::create_rf(std::string t)
{
    return (new  RobotomyRequestForm(t));
}

AForm* Intern::create_pf(std::string t)
{
    return (new  PresidentialPardonForm(t));
}


int Intern::findForm(std::string& name)
{
    int i(-1);
    std::string test;
    
    while(++i < 3)
    {
        if(name == names[i])
            return (i);
    }
    test = "the name listed not found";
    throw (test);
    return (-1);
}


AForm * Intern::makeForm(std::string name,std::string target)
{
    try
    {
       int index = findForm(name);
       AForm* af = (this->*createForms[index])(target);
       return (af);
    }
    catch(std::string& s)
    {
        std::cerr << s << '\n';
    }
    return (0);
}

Intern::~Intern()
{
    std::cout << "Intern is destructed" << std::endl;
}
