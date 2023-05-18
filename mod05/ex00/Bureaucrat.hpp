/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:52:36 by aniouar           #+#    #+#             */
/*   Updated: 2023/05/13 00:11:56 by aniouar          ###   ########.fr       */
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
                { return "Bureaucrat out of the high grade cant create/increment";};
        };
        class GradeTooLowException : public std::exception
        {
            public:
               
                const char* what() const throw()
                 { return "Bureaucrat out of the low grade cant  create/decrement";}; 
        };
        Bureaucrat();
        Bureaucrat(std::string n,int g);
        Bureaucrat(Bureaucrat &b);
        Bureaucrat& operator=(Bureaucrat& b);
        const std::string& getName() const;
        const int& getGrade() const;
        void incrementGrade();
        void decrementGrade();
        ~Bureaucrat();        
};

std::ostream & operator<<(std::ostream & o,Bureaucrat const & b);