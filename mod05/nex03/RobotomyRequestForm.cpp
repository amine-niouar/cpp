/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:21:52 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/02 23:36:57 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string t) : AForm("RobotomyRequest",72,45)
{
    
    target = t;
    std::cout << target  << " is created " << std::endl;
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    // use rand as begin value
    static int roboto;
    
    try
    {
        if(getSignedStatus() == true)
        {
            if(executor.getGrade() < getGradeE())
            {
                 if(roboto % 2 == 0)
                     throw RobotoException();
                std::cout << target  << " has been robotomized " << std::endl;  
            }
            else
                throw CantExecuteExecption();
        }
        else
             throw FormNotSignedExecption();
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    roboto++;
}


RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << target  << " is destructed " << std::endl;
}