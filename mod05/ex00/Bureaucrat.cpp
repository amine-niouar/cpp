/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:56:37 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/08 17:00:29 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name(""),grade(150)
{
    std::cout << "Bureaucrat " << name << " with grade " << grade << " is created " << std::endl;
}
Bureaucrat::Bureaucrat(std::string n,int g) : name(n)
{
    if(g > 150)
        throw GradeTooLowException();
    else if(g < 1)
        throw GradeTooHighException(); 
    else
        grade =  g;
    std::cout << "Bureaucrat " << name << " with grade " << grade << " is created " << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &b) : name(b.name)
{
    grade = b.grade;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& b)
{
    if(this != &b)
        grade = b.grade;
    return (*this);
}

const std::string& Bureaucrat::getName() const
 {
    return (name);
 }

 const int& Bureaucrat::getGrade() const
  {
    return (grade);
  }

 void Bureaucrat::decrementGrade()
 {
    int tmp;

    tmp = grade + 1;
    if(tmp > 150)
        throw GradeTooLowException();
    else
        grade++;
 }

  void Bureaucrat::incrementGrade()
 {
    int tmp;

    tmp = grade - 1;
    if(tmp < 1)
        throw GradeTooHighException();
    else
        grade--;
 }

  Bureaucrat::~Bureaucrat()
  {
     std::cout << "Bureaucrat " << name << " is destructed " << std::endl;
  }


std::ostream & operator<<(std::ostream & o,Bureaucrat const & b)
{
    
 
    o  << b.getName() << " , bureaucrat grade " << b.getGrade();
    
    return o;
}
