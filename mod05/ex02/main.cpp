

#include <iostream>
#include "AForm.hpp"

int main(void)
{
   
    try
    {
        Bureaucrat b("user1",130);
        Bureaucrat b1("user2",130);
      
     
    }
    catch(std::exception & e)
    {
        
        std::cerr << e.what();

         
    }
   
}
