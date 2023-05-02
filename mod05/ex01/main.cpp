

#include <iostream>
#include "Form.hpp"

int main(void)
{
   
    try
    {
        std::cout << "----------------" << std::endl;
        Bureaucrat b("user1",130);
        Bureaucrat b1("user2",130);
        Form contract("Contract",131,129);
        std::cout << "----------------" << std::endl;

        //b.incrementGrade();
        b.signForm(contract);
         
        std::cout << contract << std::endl;
        std::cout << b1;
        std::cout << b;
         std::cout << "----------------" << std::endl;
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;    
    }
   
}
