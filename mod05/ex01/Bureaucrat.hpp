/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:52:36 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/04 18:09:08 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <iostream>
#include "Form.hpp"
class Form;

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
                 { return "Bureaucrat out of the high grade cant create/increment";};
        };
        class GradeTooLowException : public std::exception
        {
            public:
               
                 const char* what() const throw()
                 { return "Bureaucrat out of the low grade cant  create/decrement";}; 
        };
        Bureaucrat();
        Bureaucrat(std::string n,int g);
        Bureaucrat(Bureaucrat &b);
        void get_status() const;
        void signForm(Form &f);
        Bureaucrat& operator=(Bureaucrat& b);
        const std::string& getName() const;
        const int& getGrade() const;
        void incrementGrade();
        void decrementGrade();
        ~Bureaucrat();        
};

std::ostream & operator<<(std::ostream & o,Bureaucrat const & b);

#endif
