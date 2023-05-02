/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:21:52 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/28 17:27:26 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string t) : AForm(145,137)
{
    target = t;
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    try
    {
       can_execute(executor);
        
    }
    catch(std::exception &e)
    {
        std::cerr << executor << " cant execute the following action " << std::endl;
        std::cerr << e.what() << std::endl;
    }
}


RobotomyRequestForm::~RobotomyRequestForm()
{
    
}