/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:55:07 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/04 18:52:39 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name(""),signedStatus(false), gradeS(150) , gradeE(150)
{
     std::cout << "AForm " << name << " with grade sign " << gradeS 
     << " and grade execute " << gradeE 
     << " is created " << std::endl;
}


AForm::AForm(std::string n,int gS,int gE) : name(n), signedStatus(false), gradeS(gS) , gradeE(gE)
{
    if(gradeS > 150)
        throw GradeTooLowException();
    else if(gradeS < 1)
        throw GradeTooHighException();

    if(gradeE > 150)
        throw GradeTooLowException();
    else if(gradeE < 1)
        throw GradeTooHighException();

     std::cout << "AForm " << name << " with grade sign " << gradeS 
     << " and grade execute " << gradeE 
     << " is created " << std::endl;
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
    if(grade_b > gradeS || grade_b > gradeE)
        throw GradeTooLowException();
    else
        signedStatus = true;        
}


AForm::~AForm()
{
    std::cout << "AForm " << name << " is destructed " << std::endl;
}

std::ostream & operator<<(std::ostream & o,AForm const & f)
{
    o  << f.getName() << " , AForm grade for signing  " << f.getGradeS() 
    << " , grade for executing " << f.getGradeE() 
    << " , status signing :  " << f.getSignedStatus() <<  std::endl;
    
    return o;
}
