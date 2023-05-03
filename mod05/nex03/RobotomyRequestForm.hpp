/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:21:59 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/02 13:30:35 by aniouar          ###   ########.fr       */
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
        RobotomyRequestForm(std::string t);
        void execute(Bureaucrat const & executor) const ;
        ~RobotomyRequestForm();
};