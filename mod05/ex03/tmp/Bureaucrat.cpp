/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:56:37 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/29 09:10:22 by aniouar          ###   ########.fr       */
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

 const std::string& Bureaucrat::getName() const
 {
    return (name);
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

 void Bureaucrat::get_status() const
 {
    
 }

  const int& Bureaucrat::getGrade() const
  {
    return (grade);
  }

  Bureaucrat::~Bureaucrat()
  {
    
  }

void Bureaucrat::signForm(AForm& f)
{
    // try
    // {
    //     // better place to test beSigned
    //     f.beSigned(*this);
    //     std::cout << name << " signed " << f.getName() << std::endl;
    // }
    // catch(std::exception &e)
    // {
    //      std::cerr << name << " couldn't sign " << f.getName() << " " << e.what() << std::endl;
    // }
    
    (void)f;   
}

void Bureaucrat::executeForm(AForm const & form)
{
    // try
    // {
    //     form.execute();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    (void)form;
}


std::ostream & operator<<(std::ostream & o,Bureaucrat const & b)
{
    o  << b.getName() << " , bureaucrat grade " << b.getGrade() << std::endl;
    
    return o;
}
