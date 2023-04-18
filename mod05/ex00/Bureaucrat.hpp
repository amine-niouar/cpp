/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniouar <aniouar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:52:36 by aniouar           #+#    #+#             */
/*   Updated: 2023/04/18 02:59:55 by aniouar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        class GradeTooHighException
        {
            public:
                std::string name;
                int grade;
                GradeTooHighException(std::string n,int g) : name(n), grade(g) {};
        };
        class GradeTooLowException
        {
            public:
                std::string name;
                int grade;
                GradeTooLowException(std::string n,int g) : name(n), grade(g) {};
        };
        Bureaucrat();
        Bureaucrat(std::string n,int g);
        Bureaucrat(Bureaucrat &b);
        Bureaucrat& operator=(Bureaucrat& b);
        const std::string& getName();
        const int& getGrade();
        void incrementGrade();
        void decrementGrade();
        ~Bureaucrat();        
};