/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:18:42 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/29 09:10:55 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string t) : AForm(145,137)
{
    target = t;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    try
    {
       can_execute(executor);
        
    }
    catch(std::exception &e)
    {
        (void)e;
        
        std::cerr << executor << " cant execute the following action " << std::endl;
        //throw Bureaucrat;
        std::cerr << e.what() << std::endl;
    }
}


PresidentialPardonForm::~PresidentialPardonForm()
{
    
}