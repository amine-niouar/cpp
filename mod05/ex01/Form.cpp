/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:55:07 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/13 00:28:11 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : signedStatus(false), gradeS(150) , gradeE(150)
{
     std::cout << "Form " << name << " with grade sign " << gradeS 
     << " and grade execute " << gradeE 
     << " is created " << std::endl;
}


Form::Form(std::string n,int gS,int gE) : name(n) , signedStatus(false), gradeS(gS) , gradeE(gE)
{
    if(gradeS > 150)
        throw GradeTooLowException();
    else if(gradeS < 1)
        throw GradeTooHighException();

    if(gradeE > 150)
        throw GradeTooLowException();
    else if(gradeE < 1)
        throw GradeTooHighException();
    

    std::cout << "Form " << name << " with grade sign " << gradeS 
     << " and grade execute " << gradeE 
     << " is created " << std::endl;
}


Form::Form(Form &f) : name(f.name) , gradeS(f.gradeS) , gradeE(f.gradeE) 
{
    signedStatus = f.signedStatus;
}

Form& Form::operator=(Form const &f)
{
    if(this != &f)
        signedStatus = f.signedStatus;
    return *this;
}

bool Form::getSignedStatus() const
{
    return signedStatus;
}

const std::string& Form::getName() const
{
    return name;
}

int Form::getGradeS() const
{
    return gradeS;
}
int Form::getGradeE() const
{
    return gradeE;
}

void Form::beSigned(Bureaucrat &b)
{
    int grade_b;

    

    grade_b = b.getGrade();
    if(grade_b > gradeS || grade_b > gradeE)
        throw GradeTooLowException();
    else
        signedStatus = true;        
}



Form::~Form()
{
     std::cout << "Form " << name << " is destructed " << std::endl;
}

std::ostream & operator<<(std::ostream & o,Form const & f)
{
    o  << f.getName() << " , form grade for signing  " << f.getGradeS() 
    << " , grade for executing " << f.getGradeE() 
    << " , status signing :  ";
    
    if(f.getSignedStatus() == true)
        o << "true";
    else
        o << "false";
    
    return o;
}
