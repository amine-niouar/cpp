/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:56:37 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/13 10:01:04 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name(""),grade(0)
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
    return (*this)
}

 const std::string& Bureaucrat::getName()
 {
    return (name);
 }

  const int& Bureaucrat::getGrade()
  {
    return (grade);
  }

  Bureaucrat::~Bureaucrat()
  {
    
  }
