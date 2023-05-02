/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:39:33 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/02 15:18:21 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __AFORM_H__
#define __AFORM_H__


#include <iostream>


#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm 
{
    private:
        std::string const name;
        bool signedStatus;
        int const gradeS;
        int const gradeE;
    public:
         class GradeTooHighException :  public std::exception
        {
            public:
                const char* what() const throw(){return "form will not signed/execute with this high grade";};
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw(){return "form will not signed/execute with this low grade";};
        };
        AForm();
        AForm(AForm &f);
        AForm(std::string n,int gS,int gE);
        void beSigned(Bureaucrat  &b) ;
        void signAForm();
        bool getSignedStatus() const;
        const std::string&  getName() const;
        int getGradeS() const ; 
        int getGradeE() const;
        AForm& operator=(AForm const &f);
        virtual void execute(Bureaucrat const & executor) const = 0;
        void can_execute(Bureaucrat const  &b) const;
        virtual ~AForm();
};

std::ostream & operator<<(std::ostream & o,AForm const & f);

#endif