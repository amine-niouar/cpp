/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:56:37 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/18 03:00:01 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name(""),grade(0)
{
    
}
Bureaucrat::Bureaucrat(std::string n,int g) : name(n),grade(g)
{
    
}

Bureaucrat::Bureaucrat(Bureaucrat &b)
{
    grade = b.grade;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& b)
{
    if(this != &b)
        grade = b.grade;
    return (*this);
}

 const std::string& Bureaucrat::getName()
 {
    return (name);
 }

 void Bureaucrat::decrementGrade()
 {
    int tmp;

    tmp = grade + 1;
    if(tmp > 150)
        throw GradeTooLowException(name,grade);
    else
        grade++;
 }

  void Bureaucrat::incrementGrade()
 {
    int tmp;

    tmp = grade - 1;
    if(tmp < 1)
        throw GradeTooHighException(name,grade);
    else
        grade--;
 }

  const int& Bureaucrat::getGrade()
  {
    return (grade);
  }

  Bureaucrat::~Bureaucrat()
  {
    
  }
