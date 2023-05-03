/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:52:36 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/02 15:20:28 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__


#include <iostream>
#include "AForm.hpp"
class AForm;

class Bureaucrat
{
    protected:
        const std::string name;
        int grade;
    public:
         class GradeTooHighException :  public std::exception
        {
            public:
               
                 const char* what() const throw() 
                { return "Bureaucrat  had the lower grade  no need to decrement";};
        };
        class GradeTooLowException : public std::exception
        {
            public:
                 const char* what() const throw()
                 { return "Bureaucrat had the ultimate grade  no need to increment";}; 
        };
        Bureaucrat();
        Bureaucrat(std::string n,int g);
        Bureaucrat(Bureaucrat &b);
        void executeForm(AForm const & form);
        void get_status() const;
        void signForm(AForm &f) ;
        Bureaucrat& operator=(Bureaucrat& b);
        const std::string& getName() const;
        const int& getGrade() const;
        void incrementGrade();
        void decrementGrade();
        ~Bureaucrat();        
};

std::ostream & operator<<(std::ostream & o,Bureaucrat const & b);

#endif
