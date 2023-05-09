/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:21:59 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/09 13:38:09 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
     private:
        std::string target;
     public:
        class RobotoException : public std::exception
        {
            public:
                virtual const char* what() const throw() 
                { return "the robotomy failed";};
        };
        RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm &rrf);
        RobotomyRequestForm(std::string t);
        RobotomyRequestForm&  operator=(RobotomyRequestForm& rrf);
        void execute(Bureaucrat const & executor) const ;
        ~RobotomyRequestForm();
};