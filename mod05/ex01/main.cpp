

#include <iostream>
#include "Form.hpp"

int main(void)
{
   
    try
    {
        Bureaucrat b("user1",130);
        Bureaucrat b1("user2",130);
        Form contract(131,3);

        // contract.beSigned(b);

        b.signForm(contract);
         
        std::cout << b1;
        std::cout << b;
     
    }
    catch(std::exception & e)
    {
        
        std::cerr << e.what();

         
    }
   
}
