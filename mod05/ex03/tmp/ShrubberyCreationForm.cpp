/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:09:14 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/28 17:28:49 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string t) : AForm(145,137)
{
    target = t;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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


ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}