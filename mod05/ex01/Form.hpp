/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:39:33 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/02 18:52:51 by aniouar          ###   ########.fr       */
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
        const std::string  name;
        bool signedStatus;
        const int  gradeS;
        const int  gradeE;
    public:
         class GradeTooHighException :  public std::exception
        {
            public:
                const char* what() const throw(){return "Form grade out of range high grade cant signed/execute";};
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw(){return "Form grade out of range low grade cant signed/execute";};
        };
        Form();
        Form(Form &f);
        Form(std::string n,int gS,int gE);
        void beSigned(Bureaucrat &b);
        bool getSignedStatus() const;
        const std::string&  getName() const;
        int getGradeS() const ; 
        int getGradeE() const;
        Form& operator=(Form const &f);
        ~Form();
};

std::ostream & operator<<(std::ostream & o,Form const & f);

#endif