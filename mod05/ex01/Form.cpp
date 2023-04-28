/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:55:07 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/27 17:20:10 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : signedStatus(false), gradeS(150) , gradeE(150)
{
    
}

// add a paramerteriz constructor for custome test

Form::Form(int gS,int gE) : signedStatus(false), gradeS(gS) , gradeE(gE)
{
    
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
    // Bureaucrat::name = b.getName();
    // grade = grade_b;
    if(grade_b > gradeS || grade_b > gradeE)
        throw GradeTooLowException();
    else
        signedStatus = true;        
}



Form::~Form()
{
    
}

std::ostream & operator<<(std::ostream & o,Form const & f)
{
    o  << f.getName() << " , form grade for signing  " << f.getGradeS() 
    << " , grade for executing " << f.getGradeE() 
    << " , status signing :  " << f.getSignedStatus() <<  std::endl;
    
    return o;
}
