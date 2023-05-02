/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:55:07 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/28 15:40:26 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : signedStatus(false), gradeS(150) , gradeE(150)
{
    
}

// add a paramerteriz constructor for custome test

AForm::AForm(int gS,int gE) : signedStatus(false), gradeS(gS) , gradeE(gE)
{
    
}


AForm::AForm(AForm &f) : name(f.name) , gradeS(f.gradeS) , gradeE(f.gradeE) 
{
    signedStatus = f.signedStatus;
}

AForm& AForm::operator=(AForm const &f)
{
    if(this != &f)
        signedStatus = f.signedStatus;
    return *this;
}

bool AForm::getSignedStatus() const
{
    return signedStatus;
}

const std::string& AForm::getName() const
{
    return name;
}

int AForm::getGradeS() const
{
    return gradeS;
}
int AForm::getGradeE() const
{
    return gradeE;
}

void AForm::beSigned(Bureaucrat  &b)
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

void AForm::can_execute(Bureaucrat const  &b) const
{
     int grade_b;

    

    grade_b = b.getGrade();
    // Bureaucrat::name = b.getName();
    // grade = grade_b;
    if(grade_b > gradeS || grade_b > gradeE)
        throw GradeTooLowException();
}


AForm::~AForm()
{
    
}

std::ostream & operator<<(std::ostream & o,AForm const & f)
{
    o  << f.getName() << " , AForm grade for signing  " << f.getGradeS() 
    << " , grade for executing " << f.getGradeE() 
    << " , status signing :  " << f.getSignedStatus() <<  std::endl;
    
    return o;
}
