/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:52:36 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/28 18:50:36 by aniouar          ###   ########.fr       */
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
               
                virtual const char* what() const throw() 
                { return "Bureaucrat  had the lower grade  no need to decrement";};
                //~GradeTooHighException() {};
        };
        class GradeTooLowException : public std::exception
        {
            public:
               
                virtual const char* what() const throw()
                 { return "Bureaucrat had the ultimate grade  no need to increment";}; 
               // ~GradeTooLowException() {};
        };
        Bureaucrat();
        Bureaucrat(std::string n,int g);
        Bureaucrat(Bureaucrat &b);
        void executeForm(AForm const & form);
        void get_status() const;
        void signForm(AForm &f);
        Bureaucrat& operator=(Bureaucrat& b);
        const std::string& getName() const;
        const int& getGrade() const;
        void incrementGrade();
        void decrementGrade();
        ~Bureaucrat();        
};

std::ostream & operator<<(std::ostream & o,Bureaucrat const & b);

#endif
