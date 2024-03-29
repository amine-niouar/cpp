/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:21:52 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/09 13:49:18 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string t) : AForm("RobotomyRequest",72,45)
{
    target = t;
    std::cout << target  << " is created " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm",72,45)
{
    target = "default";
    std::cout << target  << " is created " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &rrf) : AForm(rrf)
{
    target = rrf.target;
    std::cout << target  << " is copied " << std::endl;
}


RobotomyRequestForm&  RobotomyRequestForm::operator=(RobotomyRequestForm& rrf)
{
    if(this != &rrf)
    {
        target = rrf.target;
        AForm::operator=(rrf);
    }
    std::cout << target  << " is assigned " << std::endl;
    return (*this);
}



void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    srand(time(NULL));
    try
    {
        if(getSignedStatus() == true)
        {
            if(executor.getGrade() < getGradeE())
            {
                 if(rand() % 2 == 0)
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
}


RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << target  << " is destructed " << std::endl;
}