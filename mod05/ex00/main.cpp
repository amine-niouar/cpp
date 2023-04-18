

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
         Bureaucrat b("user1",1);
         Bureaucrat b1("user2",150);
         
         b1.decrementGrade();
         b.incrementGrade();
         
    }
    catch(Bureaucrat::GradeTooHighException &ghe)
    {
         std::cout << "Bureaucrat " <<  ghe.name << " had the ultimate grade " 
        << ghe.grade << " no need to increment" << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &gle)
    {
        std::cout << "Bureaucrat " <<  gle.name << " had the lower grade " 
        << gle.grade << " no need to decrement" << std::endl;
    }
   
}