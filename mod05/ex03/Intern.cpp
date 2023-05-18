/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 09:13:23 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/13 02:25:02 by aniouar          ###   ########.fr       */
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
    
    while(++i < 3)
    {
        if(name == names[i])
            return (i);
    }
    throw FormNotFoundException();
    return (-1);
}


AForm * Intern::makeForm(std::string name,std::string target)
{
    try
    {
       int index = findForm(name);
       if(index >= 0)
       {
            AForm* af = (this->*createForms[index])(target);
            std::cout << "Intern creates " << name << std::endl;
            return (af);  
       }
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}

Intern::~Intern()
{
    std::cout << "Intern is destructed" << std::endl;
}
