/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:18:42 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/02 23:53:58 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string t) : AForm("PresidentialPardon",25,5)
{
    target = t;
    std::cout << target  << " is created " << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if(getSignedStatus() == true)
        {
            if(executor.getGrade() < getGradeE())
                 std::cout << target << " has been pardoned by Zaphod Beeblebro " << std::endl;
             else
                throw CantExecuteExecption();
        }
        else
             throw FormNotSignedExecption();
         
    }
    catch(std::exception &e)
    {
        std::cerr << executor.getName() << " cant execute the following action " << e.what() << std::endl;
    }
}


PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << target  << " is destructed " << std::endl;
}
