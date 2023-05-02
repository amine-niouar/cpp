

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
   
    try
    {
          Bureaucrat b("user1",1);
         Bureaucrat b1("user2",130);
         
         b1.decrementGrade();
         b.incrementGrade();

         
         

         std::cout << b1 << std::endl;
            std::cout << b << std::endl;
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;    
    }



 
}
