/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 09:13:34 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/04 16:39:23 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    private:
        std::string names[3];
        AForm* (Intern::*createForms[3])(std::string t);
        AForm* create_scf(std::string t);
        AForm* create_rf(std::string t);
        AForm* create_pf(std::string t);
    public:
        class FormNotFoundException :  public std::exception
        {
            public:
               
                 const char* what() const throw() 
                { return "the name listed of form not found";};
        };
        Intern();
        int findForm(std::string& name);
        AForm *makeForm(std::string name,std::string target);
        ~Intern();
};