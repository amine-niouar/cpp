/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:39:33 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/27 17:28:36 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FORM_H__
#define __FORM_H__


#include <iostream>


#include "Bureaucrat.hpp"

class Bureaucrat;
class Form 
{
    private:
        std::string const name;
        bool signedStatus;
        int const gradeS;
        int const gradeE;
    public:
        /*class GradeTooHighException : public Bureaucrat::GradeTooHighException*/
         class GradeTooHighException :  public std::exception
        {
            public:
                const char* what() const throw(){return "Form will not signed/execute with this high grade";};
        };
        // class GradeTooLowException : public Bureaucrat::GradeTooLowException
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw(){return "Form will not signed/execute with this low grade";};
        };
        Form();
        Form(Form &f);
        Form(int gS,int gE);
        void beSigned(Bureaucrat &b);
        void signForm();
        bool getSignedStatus() const;
        const std::string&  getName() const;
        int getGradeS() const ; 
        int getGradeE() const;
        Form& operator=(Form const &f);
        ~Form();
};

std::ostream & operator<<(std::ostream & o,Form const & f);

#endif