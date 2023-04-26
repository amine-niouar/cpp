/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:52:36 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/26 14:13:18 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        class GradeTooHighException :  public std::exception
        {
            public:
               
                const char* what() const throw() 
                { return "Bureaucrat  had the lower grade  no need to decrement";};
                //~GradeTooHighException() {};
        };
        class GradeTooLowException : public std::exception
        {
            public:
               
                const char* what() const throw()
                 { return "Bureaucrat had the ultimate grade  no need to increment";}; 
               // ~GradeTooLowException() {};
        };
        Bureaucrat();
        Bureaucrat(std::string n,int g);
        Bureaucrat(Bureaucrat &b);
        void get_status() const;
        Bureaucrat& operator=(Bureaucrat& b);
        const std::string& getName() const;
        const int& getGrade() const;
        void incrementGrade();
        void decrementGrade();
        ~Bureaucrat();        
};

std::ostream & operator<<(std::ostream & o,Bureaucrat const & b);